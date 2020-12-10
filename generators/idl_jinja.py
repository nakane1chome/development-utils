#!/usr/bin/env python
#
# A script to use a jinja template to generate code from any IDL file.
#
# The root of the IDL document is made available as 'data' to the template.
#
# NOTE: Requires opensplice, and uses the opensplice idlpp command

import argparse
import sys
import os

import jinja2
import jinja_filters
import imp
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

args = parser.parse_args()


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
    """
    out = subprocess.Popen(["idlpp", "-l", "pythondesc", idl_path], stdout=subprocess.PIPE).communicate()[0]
    if not out.startswith(b'<topics'):
        raise RuntimeError("Problem found with given IDL file:\n" + out.decode())

    doc = ET.fromstring(out)
    return _etree_to_dict(doc)
    
    
idl_data=None
try:
    idl_data = _pre_process_idl(args.idl)
except RuntimeError as exc:
    print("ERROR: Parsing IDL file: " + args.idl)
    print(exc)

# Template loader
loader = jinja2.loaders.FileSystemLoader(args.templates)

env = jinja2.Environment(loader=loader)

jinja_filters.setup(env)
if args.filters:
    for filter in args.filters:
        filter_mod = imp.load_source('module.name', filter)
        filter_mod.setup(env)

tmpl = env.get_template(args.template)
with open(args.out, "w") as fout:
    fout.write(tmpl.render(data=idl_data))
    fout.close()
