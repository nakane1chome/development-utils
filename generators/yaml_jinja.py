#!/bin/env python
#
# A script to use a jinja template to generate code from any YAML file.
#
# The root of the YAML document is made available as 'data' to the template.

import argparse
import sys
import os

import yaml

import yaml_tags

import jinja2
import jinja_filters
import riscv_csr_filters

parser = argparse.ArgumentParser(
    description='Generate code from YAML using JINJA templates.')
parser.add_argument('yaml', type=str,
                    help='YAML File')
parser.add_argument('template', type=str,
                    help='template File')
parser.add_argument('out', type=str,
                    help='output File')
parser.add_argument('--templates', type=str, default=".",
                    help='Path to templates')

args = parser.parse_args()

yaml_data=None
with open(args.yaml, 'r') as fin :
    try:
        yaml_data = yaml.full_load(fin)
    except yaml.YAMLError as exc:
        print("ERROR: Parsing YAML file: " + args.yaml)
        print(exc)

# Template loader
loader = jinja2.loaders.FileSystemLoader(args.templates)

env = jinja2.Environment(loader=loader)

jinja_filters.setup(env)
riscv_csr_filters.setup(env)

tmpl = env.get_template(args.template)
with open(args.out, "w") as fout:
    fout.write(tmpl.render(data=yaml_data))
    fout.close()
