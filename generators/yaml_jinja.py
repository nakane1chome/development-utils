#!/bin/env python
#
# A script to use a jinja template to generate code from any YAML file.
#
# The root of the YAML document is made available as 'data' to the template.

import argparse

import yaml

try:
    from . import jinja_filters
except ImportError:
    import jinja_filters

import importlib.util

import jinja2

parser = argparse.ArgumentParser(description="Generate code from YAML using JINJA templates.")
parser.add_argument("yaml", type=str, help="YAML File")
parser.add_argument("template", type=str, help="template File")
parser.add_argument("out", type=str, help="output File")
parser.add_argument("--templates", type=str, default=".", help="Path to templates")
parser.add_argument(
    "--filters",
    type=str,
    action="append",
    help="Additional filters to include. File should include a setup() method.",
)


def main(yaml_file, template_file, out_file, templates_path, filters_list):
    yaml_data = None
    with open(yaml_file) as fin:
        try:
            yaml_data = yaml.full_load(fin)
        except yaml.YAMLError as exc:
            print("ERROR: Parsing YAML file: " + yaml_file)
            print(exc)

    # Template loader
    loader = jinja2.loaders.FileSystemLoader(templates_path)

    env = jinja2.Environment(loader=loader)

    jinja_filters.setup(env)
    if filters_list:
        for filter in filters_list:
            spec = importlib.util.spec_from_file_location("module.name", filter)
            filter_mod = importlib.util.module_from_spec(spec)
            spec.loader.exec_module(filter_mod)
            filter_mod.setup(env)

    tmpl = env.get_template(template_file)
    with open(out_file, "w") as fout:
        fout.write(tmpl.render(data=yaml_data))
        fout.close()


def cli_main():
    args = parser.parse_args()
    main(args.yaml, args.template, args.out, args.templates, args.filters)


if __name__ == "__main__":
    cli_main()
