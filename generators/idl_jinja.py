#!/usr/bin/env python
#
# A script to use a jinja template to generate code from any IDL file.
#
# The root of the IDL document is made available as 'data' to the template.
#
# NOTE: Requires OpenSplice DDS idlpp command (EOL - End of Life)
# RECOMMENDED: Use idl_jinja_bridle.py instead, which uses the modern
# bridle library (actively maintained as of 2025)

import argparse
import sys
import os

import jinja2
try:
    from . import jinja_filters
except ImportError:
    import jinja_filters
import importlib.util
import subprocess

import xml.etree.ElementTree as ET
from collections import defaultdict

parser = argparse.ArgumentParser(
    description='Generate code from IDL using JINJA templates.')
parser.add_argument('idl', type=str,
                    help='IDL File')
parser.add_argument('template', type=str,
                    help='template File')
parser.add_argument('out', type=str,
                    help='output File')
parser.add_argument('--templates', type=str, default=".",
                    help='Path to templates')
parser.add_argument('--filters', type=str, action='append',
                    help='Additional filters to include. File should include a setup() method.')

# https://stackoverflow.com/questions/7684333/converting-xml-to-dictionary-using-elementtree
def _etree_to_dict(t):
    d = {t.tag: {} if t.attrib else None}
    children = list(t)
    if children:
        dd = defaultdict(list)
        for dc in map(_etree_to_dict, children):
            for k, v in dc.items():
                dd[k].append(v)
        d = {t.tag: {k: v[0] if len(v) == 1 else v
                     for k, v in dd.items()}}
    if t.attrib:
        d[t.tag].update(('@' + k, v)
                        for k, v in t.attrib.items())
    if t.text:
        text = t.text.strip()
        if text.find("<MetaData")==0:
            metadata = ET.fromstring(text)
            text = _etree_to_dict(metadata)

        if children or t.attrib:
            if text:
              d[t.tag]['#text'] = text
        else:
            d[t.tag] = text
    return d

def _pre_process_idl(idl_path):
    """ Return all the data from an IDL file as a dictionary.
    Requires OpenSplice DDS idlpp tool to be installed.
    """
    try:
        out = subprocess.Popen(["idlpp", "-l", "pythondesc", idl_path],
                              stdout=subprocess.PIPE,
                              stderr=subprocess.PIPE).communicate()[0]
    except FileNotFoundError:
        raise RuntimeError("OpenSplice DDS idlpp tool not found. Please install OpenSplice DDS.")

    if not out.startswith(b'<topics'):
        raise RuntimeError("Problem found with given IDL file:\n" + out.decode())

    doc = ET.fromstring(out)
    return _etree_to_dict(doc)

def main(idl_file, template_file, out_file, templates_path, filters_list):
    idl_data=None
    try:
        idl_data = _pre_process_idl(idl_file)
    except RuntimeError as exc:
        print("ERROR: Parsing IDL file: " + idl_file)
        print(exc)

    # Template loader
    loader = jinja2.loaders.FileSystemLoader(templates_path)

    env = jinja2.Environment(loader=loader)

    jinja_filters.setup(env)
    if filters_list:
        for filter in filters_list:
            spec = importlib.util.spec_from_file_location('module.name', filter)
            filter_mod = importlib.util.module_from_spec(spec)
            spec.loader.exec_module(filter_mod)
            filter_mod.setup(env)

    tmpl = env.get_template(template_file)
    with open(out_file, "w") as fout:
        fout.write(tmpl.render(data=idl_data))
        fout.close()

def cli_main():
    args = parser.parse_args()
    main(args.idl, args.template, args.out, args.templates, args.filters)

if __name__ == "__main__":
    cli_main()
