#!/usr/bin/env python
#
# A script to use a jinja template to generate code from any IDL file.
#
# The root of the IDL document is made available as 'data' to the template.
#
# NOTE: Uses bridle library (modern OMG IDL parser, actively maintained)
# Alternative to OpenSplice DDS idlpp which is EOL

import argparse
import sys
import os

import jinja2
import jinja_filters
import importlib.util

from bridle import IdlParser

parser = argparse.ArgumentParser(
    description='Generate code from IDL using JINJA templates (using bridle parser).')
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


def _ast_to_dict(node):
    """Convert bridle AST nodes to dictionary format.

    This provides a simple dictionary representation that can be
    easily used in Jinja templates.
    """
    result = {
        'type': type(node).__name__,
    }

    # Add name if present
    if hasattr(node, 'name') and node.name is not None:
        result['name'] = node.name

    # Add scoped name if present
    if hasattr(node, 'scoped_name') and node.scoped_name is not None:
        result['scoped_name'] = str(node.scoped_name)

    # Recursively process children
    if hasattr(node, 'children') and node.children:
        result['children'] = [_ast_to_dict(child) for child in node.children]

    # Add type-specific attributes
    node_type = type(node).__name__

    if node_type == 'PrimitiveNode':
        # Primitive types like i32, s8, etc.
        result['primitive_type'] = str(node)
    elif node_type == 'FieldNode':
        # Struct fields
        if hasattr(node, 'children') and len(node.children) > 0:
            result['field_type'] = _ast_to_dict(node.children[0])

    return result


def _parse_idl_with_bridle(idl_path):
    """Parse an IDL file using the bridle library.

    Returns a dictionary representation of the parsed IDL.
    """
    try:
        parser = IdlParser()
        # Parse returns a list of Tree objects (one per file)
        ast_trees = parser.parse(paths=[idl_path])

        if not ast_trees:
            raise RuntimeError(f"No IDL content found in: {idl_path}")

        # Convert the first tree to dictionary
        tree = ast_trees[0]

        result = {
            'file': idl_path,
            'modules': []
        }

        # Process all top-level children (usually modules)
        for child in tree.children:
            result['modules'].append(_ast_to_dict(child))

        return result

    except ImportError:
        raise RuntimeError(
            "Bridle library not found. Install with: "
            "pip install git+https://github.com/iguessthislldo/bridle.git"
        )
    except Exception as e:
        raise RuntimeError(f"Error parsing IDL file {idl_path}: {str(e)}")


def main(idl_file, template_file, out_file, templates_path, filters_list):
    idl_data = None
    try:
        idl_data = _parse_idl_with_bridle(idl_file)
    except RuntimeError as exc:
        print("ERROR: Parsing IDL file: " + idl_file)
        print(exc)
        return

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


if __name__ == "__main__":
    args = parser.parse_args()
    main(args.idl, args.template, args.out, args.templates, args.filters)
