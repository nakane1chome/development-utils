#!/bin/env python
# 
# A script to use a jinja template to generate code from a System RDL register description
# 
# Sytem RDL is a DSL for control & status register (CSR) definition.
# 
# https://www.accellera.org/downloads/standards/systemrdl
# https://github.com/systemrdl
# 
# Jinja is a template engine for python
# https://palletsprojects.com/p/jinja/
# It's aimed at generating HTML etc, but we can use it to generate anything really.
# 
# Usage:
#
# This script makes use of one types of templates, component templates only.
#
# - The top of the RDL tree is passed to component templates to generate a single file.
# - Only one type of template needs to be passed to an invocation of this script.
# 

import argparse
import sys
import os

import systemrdl

import jinja2
try:
    from . import jinja_filters
except ImportError:
    import jinja_filters

parser = argparse.ArgumentParser(
    description='Generate code from CMSIS-SVD using JINJA templates.')
parser.add_argument('rdl', type=str,
                    help='RDL File')
parser.add_argument('--templates', type=str,
                    help='Path to templates')
parser.add_argument('--component', type=str,  action='append',
                    help='Component Template Name')
parser.add_argument('--out-path', type=str,
                    help='Output File Path')

# Filters

def node_type(obj):
    name = obj.__class__.__name__
    return os.path.basename(name)

def is_addrmap(obj):
    return isinstance(obj, systemrdl.node.AddrmapNode)

def is_reg(obj):
    return isinstance(obj, systemrdl.node.RegNode)

def is_regfile(obj):
    return isinstance(obj, systemrdl.node.RegfileNode)

def is_field(obj):
    return isinstance(obj, systemrdl.node.FieldNode)

def setup_filters(env):
    env.filters['is_addrmap'] = is_addrmap
    env.filters['is_reg'] = is_reg
    env.filters['is_regfile'] = is_regfile
    env.filters['is_field'] = is_field
    env.filters['node_type'] = node_type

def main(rdl_file, templates_path, component_templates, out_path):
    rdlc = systemrdl.compiler.RDLCompiler()
    rdlc.compile_file(rdl_file)
    root_node = rdlc.elaborate()

    component_name = os.path.basename(rdl_file)
    addrmap_node = root_node.children()[0]
    if addrmap_node != None and is_addrmap(addrmap_node):
        component_name = addrmap_node.get_property("name")

    # Generate a file for each peripheral.
    # Replace 'peripheral' with the name of the peripheral to derive the file name.
    loader = jinja2.loaders.FileSystemLoader(templates_path)

    # Replace 'component' with the name of the component to derive the file name.

    for d_template in component_templates:
        if d_template.find("component") < 0:
            print(f"Warning: template file {d_template} does not include string 'component' ")
        out_file = d_template.replace('component', component_name)
        out_file_path = os.path.join(out_path, out_file)
        component_env = jinja2.Environment(loader=loader,
                                        extensions=['jinja2.ext.loopcontrols'])
        jinja_filters.setup(component_env)
        setup_filters(component_env)
        tmpl = component_env.get_template(d_template)

        with open(out_file_path, "w") as fout:
            fout.write(tmpl.render(root_node=root_node,
                                   rld=rdl_file,
                                   component_name=component_name))
            fout.close()

def cli_main():
    args = parser.parse_args()
    main(args.rdl, args.templates, args.component, args.out_path)

if __name__ == "__main__":
    cli_main()
