#!/bin/env python3
#
# A script to use a jinja template to generate code from any OBJDUMP output file.
#
# The root of the objdump document is made available as 'data' to the template.

import argparse
import sys
import os
import re

import jinja2
try:
    from . import jinja_filters
except ImportError:
    import jinja_filters
import importlib.util
import jinja2_highlight

parser = argparse.ArgumentParser(
    description='Generate code from OBJDUMP using JINJA templates.')
parser.add_argument('objdump', type=str,
                    help='OBJDUMP File')
parser.add_argument('template', type=str,
                    help='template File')
parser.add_argument('out', type=str,
                    help='output File')
parser.add_argument('--templates', type=str, default=".",
                    help='Path to templates')
parser.add_argument('--filters', type=str, action='append',
                    help='Additional filters to include. File should include a setup() method.')

SECTION_RE=re.compile('Disassembly of section ([\w\.]+)\:')
SYMBOL_RE=re.compile('([0-9a-fA-F]+)\s+\<(.+?)\>:')
ADDR_RE=re.compile('([0-9a-fA-F]+):')
FILE_RE=re.compile('(.*?):\s+file format (.*)')
LINE_NUMBERS_RE=re.compile('(.*?)\:(\d+)$')

def parse_objectdump(filename):
    objdump_data={}
    by_addr={}
    by_section={}
    by_symbol={}

    objdump_data["by_addr"]=by_addr
    objdump_data["by_section"]=by_section
    objdump_data["by_symbol"]=by_symbol

    current_line = ("???",0)

    section=None
    with open(filename, 'r') as fin :
        addr=None
        for line in fin.readlines():
            m0=SECTION_RE.match(line)
            m1=SYMBOL_RE.match(line)
            m2=ADDR_RE.match(line)
            m3=FILE_RE.match(line)
            m4=LINE_NUMBERS_RE.match(line)

            if m3 is not None:
                objdump_data["file"] = m3.group(1)
                objdump_data["format"] = m3.group(2)
            elif m4 is not None:
                file_name=m4.group(1)
                line_no=m4.group(2)
                current_line=(file_name, os.path.basename(file_name), line_no, "%s:%s" % (os.path.basename(file_name), line_no) )
            elif m1 is not None:
                addr=int(m1.group(1),16)
                symbol=m1.group(2)
                record = {"addr": addr,"symbol": symbol, "line_no" : current_line}
                by_symbol[symbol] = record
                by_addr[addr] = record
            elif m2 is not None:
                addr=int(m2.group(1),16)
                data=line[m2.end(1)+1:].strip()
                parts=re.compile('\s+').split(data)
                if addr not in by_addr:
                    by_addr[addr] = {"addr": addr}
                by_addr[addr]["asm_opcode"]= parts[1]
                by_addr[addr]["machine_code"]= parts[0]
                if len(parts)>=3:
                    by_addr[addr]["asm_args"]=parts[2].split(",")
                else:
                    #by_addr["asm_args"]=[]
                    pass
                by_addr[addr]["asm_code"]=" ".join(parts[1:])
                by_addr[addr]["line_no"] = current_line
            elif line.strip() != "":
                if addr is not None:
                    if "code" not in by_addr[addr]:
                        by_addr[addr]["code"] = []
                    by_addr[addr]["code"].append(line.rstrip())
                    print(line.rstrip())

            if addr is not None:
                if section is not None:
                    if by_section[section]["addr"] is None:
                        by_section[section]["addr"]  = addr
    return objdump_data

def main(objdump_file, template_file, out_file, templates_path, filters_list):
    objdump_data = parse_objectdump(objdump_file)

    # Template loader
    loader = jinja2.loaders.FileSystemLoader(templates_path)

    env = jinja2.Environment(loader=loader,extensions=['jinja2_highlight.HighlightExtension'])
    env.extend(jinja2_highlight_cssclass = 'codehilite')

    jinja_filters.setup(env)
    if filters_list is not None:
        for filter in filters_list:
            spec = importlib.util.spec_from_file_location('module.name', filter)
            filter_mod = importlib.util.module_from_spec(spec)
            spec.loader.exec_module(filter_mod)
            filter_mod.setup(env)

    tmpl = env.get_template(template_file)
    with open(out_file, "w") as fout:
        fout.write(tmpl.render(data=objdump_data))
        fout.close()

def cli_main():
    args = parser.parse_args()
    main(args.objdump, args.template, args.out, args.templates, args.filters)

if __name__ == "__main__":
    cli_main()
