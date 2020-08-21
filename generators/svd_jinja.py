#!/bin/env python
# 
# A script to use a jinja template to generate code from an SVD device description
# 
# CMSIS-SVD is an XML file format used by the Keil IDE and MCU on Eclipse
# 
# https://www.keil.com/pack/doc/CMSIS/SVD/html/index.html
# https://mcuoneclipse.com/tag/svd/
# 
# It defines the registers, interrupts and cpu cores for many Cortex-M
# devices. It's also been used by SiFive for their RISC-V devices.
#
# cmsis-svd is also the name of a handy python library that parses SVD.
# https://github.com/posborne/cmsis-svd
# 
# Jinja is a template engine for python
# https://palletsprojects.com/p/jinja/
# It's aimed at generating HTML etc, but we can use it to generate anything really.
# 
# Usage:
#
# This script makes use of two types of templates, device templates and peripheral templates.
#
# - The top of the SVD tree is passed to device templates to generate a single file.
# - Each peripheral in a device is iterated over, and then passed to peripheral template. A file is generated for each peripheral.
# - Only one type of template needs to be passed to an invocation of this script.
# 
# The output file names are generated according to the template file name.
# - for a device template 'device' in the template file name is replaced by the device name.
# - for a peripheral template 'peripheral' in the template file name is replaced by the peripheral name.

import argparse
import sys
import os

import cmsis_svd 
from cmsis_svd.parser import SVDParser

import jinja2
import jinja_filters

parser = argparse.ArgumentParser(
    description='Generate code from CMSIS-SVD using JINJA templates.')
parser.add_argument('svd', type=str,
                    help='SVD File')
parser.add_argument('--templates', type=str,
                    help='Path to templates')
parser.add_argument('--peripheral', type=str,
                    help='Peripheral Template Name')
parser.add_argument('--device', type=str,
                    help='Device Template Name')
parser.add_argument('--out-path', type=str,
                    help='Output File Path')

args = parser.parse_args()

parser = SVDParser.for_xml_file(args.svd)
svd_dict = parser.get_device().to_dict()

# Filters

# Generate a file for each peripheral. 
# Replace 'peripheral' with the name of the peripheral to derive the file name.
loader = jinja2.loaders.FileSystemLoader(args.templates)

if args.peripheral is not None:
    for p in svd_dict['peripherals']: 
        out_file = args.peripheral.replace('peripheral', p['name'])
        out_path = os.path.join(args.out_path, out_file)
        peripheral_env = jinja2.Environment(loader=loader)
        jinja_filters.setup(peripheral_env)

        tmpl = peripheral_env.get_template(args.peripheral)
        with open(out_path, "w") as fout:
            fout.write(tmpl.render(device=svd_dict, peripheral=p))
            fout.close()

if args.device is not None:
    # Replace 'device' with the name of the device to derive the file name.
    out_file = args.device.replace('device', svd_dict['name'])
    out_path = os.path.join(args.out_path, out_file)
    device_env = jinja2.Environment(loader=loader)
    tmpl = device_env.get_template(args.device)
    with open(out_path, "w") as fout:
        fout.write(tmpl.render(device=svd_dict))
        fout.close()
