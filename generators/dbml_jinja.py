#!/usr/bin/env python3
"""
DBML to Code Generator using Jinja2 Templates.

This script generates source code from DBML schema files using Jinja2 templating.
Similar to svd_jinja.py but for database schemas.

Usage:
    python dbml_jinja.py schema.dbml templates/ output/
"""

import argparse
import logging
import sys
from pathlib import Path

from jinja2 import Environment, FileSystemLoader
from pydbml import PyDBML

logger = logging.getLogger(__name__)


class DBMLJinjaGenerator:
    """Generate code from DBML using Jinja2 templates."""

    def __init__(self, dbml_path: Path, template_dir: Path, output_dir: Path):
        """
        Initialize the generator.

        Args:
            dbml_path: Path to DBML schema file
            template_dir: Directory containing Jinja2 templates
            output_dir: Directory for generated output files
        """
        self.dbml_path = dbml_path
        self.template_dir = template_dir
        self.output_dir = output_dir
        self.output_dir.mkdir(parents=True, exist_ok=True)

        # Parse DBML
        logger.info(f"Parsing DBML file: {dbml_path}")
        self.database = PyDBML.parse_file(str(dbml_path))

        # Setup Jinja2 environment
        self.env = Environment(
            loader=FileSystemLoader(str(template_dir)),
            trim_blocks=True,
            lstrip_blocks=True,
        )

        # Add custom filters
        self._setup_filters()

    def _setup_filters(self):
        """Setup custom Jinja2 filters."""
        # String manipulation filters
        self.env.filters["snake_case"] = lambda s: s.lower().replace(" ", "_")
        self.env.filters["pascal_case"] = lambda s: "".join(
            word.capitalize() for word in s.replace("_", " ").split()
        )
        self.env.filters["camel_case"] = lambda s: (
            s[0].lower() + "".join(word.capitalize() for word in s.split("_")[1:])
            if "_" in s
            else s
        )
        self.env.filters["upper_case"] = lambda s: s.upper()
        self.env.filters["singular"] = lambda s: (
            s[:-1] if s.endswith("s") else s
        )  # Simple singularization

        # Relationship naming filter - removes _id suffix from FK column names
        self.env.filters["relationship_name"] = lambda s: (
            s[:-3] if s.endswith("_id") else s
        )

        # Junction table detection - checks if all PK columns are also FKs
        def is_junction_table(table):
            """Check if table is a junction table (all PKs are FKs)."""
            pk_cols = [col for col in table.columns if col.pk]
            if len(pk_cols) < 2:
                return False
            return all(col.get_refs() for col in pk_cols)

        self.env.filters["is_junction_table"] = is_junction_table

        # Enum detection - check if column type is an enum
        def is_enum_type(value):
            """Check if value is an enum type."""
            return not isinstance(value, str)

        self.env.tests["is_enum"] = is_enum_type

        # Get enum values as list
        def get_enum_values(enum_obj):
            """Get list of enum value names."""
            if hasattr(enum_obj, 'items'):
                return [item.name for item in enum_obj.items]
            return []

        self.env.filters["enum_values"] = get_enum_values

        # Get enum name
        def get_enum_name(column_type):
            """Get enum name from column type."""
            if hasattr(column_type, 'name'):
                return column_type.name
            return str(column_type)

        self.env.filters["enum_name"] = get_enum_name

        # Type mapping filters
        self.env.filters["to_python_type"] = self._to_python_type
        self.env.filters["to_sqlalchemy_type"] = self._to_sqlalchemy_type
        self.env.filters["names_to_list"] = lambda objs: ", ".join([obj.name for obj in objs])
        self.env.filters["quoted_names_to_list"] = lambda objs: ", ".join(['"'+obj.name+'"' for obj in objs])

    def _to_python_type(self, dbml_type) -> str:
        """Convert DBML type to Python type."""
        # Handle enum types (pydbml.classes.Enum objects)
        if not isinstance(dbml_type, str):
            # It's an enum reference
            return "str"

        type_map = {
            "int": "int",
            "integer": "int",
            "bigint": "int",
            "varchar": "str",
            "text": "str",
            "string": "str",
            "datetime": "datetime",
            "timestamp": "datetime",
            "boolean": "bool",
            "bool": "bool",
            "float": "float",
            "decimal": "Decimal",
            "json": "dict",
        }
        return type_map.get(dbml_type.lower(), "str")

    def _to_sqlalchemy_type(self, dbml_type) -> str:
        """Convert DBML type to SQLAlchemy type."""
        # Handle enum types (pydbml.classes.Enum objects)
        if not isinstance(dbml_type, str):
            # It's an enum reference - use String for now
            # TODO: Consider using SQLAlchemy Enum type
            return "String"

        type_map = {
            "int": "Integer",
            "integer": "Integer",
            "bigint": "BigInteger",
            "varchar": "String",
            "text": "Text",
            "string": "String",
            "datetime": "DateTime",
            "timestamp": "DateTime",
            "boolean": "Boolean",
            "bool": "Boolean",
            "float": "Float",
            "decimal": "Numeric",
            "json": "Text",  # Store as text for SQLite compatibility
        }
        return type_map.get(dbml_type.lower(), "String")

    def generate(self):
        """Generate code from templates."""
        templates = list(self.template_dir.glob("*.jinja2"))
        logger.info(f"Found {len(templates)} template(s)")

        for template_path in templates:
            template_name = template_path.name

            # Determine template type
            if "{{schema}}" in template_name or "schema" in template_name.lower():
                self._render_schema_template(template_name)
            elif "{{table}}" in template_name or "table" in template_name.lower():
                self._render_table_templates(template_name)
            else:
                # Generic template
                self._render_generic_template(template_name)

    def _render_schema_template(self, template_name: str):
        """
        Render a schema-level template (one output file).

        Args:
            template_name: Name of the template file
        """
        logger.info(f"Rendering schema template: {template_name}")

        template = self.env.get_template(template_name)

        # Prepare context
        context = {
            "database": self.database,
            "tables": self.database.tables,
            "enums": self.database.enums,
            "refs": self.database.refs,
        }

        # Generate output filename
        output_name = template_name.replace(".jinja2", "")
        output_name = output_name.replace("{{schema}}", "schema")
        output_name = output_name.replace("schema", self.dbml_path.stem)

        output_path = self.output_dir / output_name

        # Render and write
        content = template.render(**context)
        output_path.write_text(content)
        logger.info(f"  Generated: {output_path}")

    def _render_table_templates(self, template_name: str):
        """
        Render per-table templates (one output file per table).

        Args:
            template_name: Name of the template file
        """
        logger.info(f"Rendering table templates: {template_name}")

        template = self.env.get_template(template_name)

        for table in self.database.tables:
            # Prepare context
            context = {
                "database": self.database,
                "table": table,
                "columns": table.columns,
                "indexes": table.indexes,
                "refs": [ref for ref in self.database.refs if ref.table1 == table],
            }

            # Generate output filename
            output_name = template_name.replace(".jinja2", "")
            output_name = output_name.replace("{{table}}", table.name)
            output_name = output_name.replace("table", table.name)

            output_path = self.output_dir / output_name

            # Render and write
            content = template.render(**context)
            output_path.write_text(content)
            logger.info(f"  Generated: {output_path}")

    def _render_generic_template(self, template_name: str):
        """
        Render a generic template.

        Args:
            template_name: Name of the template file
        """
        logger.info(f"Rendering generic template: {template_name}")

        template = self.env.get_template(template_name)

        # Prepare context
        context = {
            "database": self.database,
            "tables": self.database.tables,
            "enums": self.database.enums,
            "refs": self.database.refs,
        }

        # Generate output filename
        output_name = template_name.replace(".jinja2", "")
        output_path = self.output_dir / output_name

        # Render and write
        content = template.render(**context)
        output_path.write_text(content)
        logger.info(f"  Generated: {output_path}")


def main(dbml_file, template_dir, output_dir, verbose=False):
    """
    Main function for DBML code generation.

    Args:
        dbml_file: Path to DBML schema file
        template_dir: Directory containing Jinja2 templates
        output_dir: Output directory for generated files
        verbose: Enable verbose logging
    """
    # Configure logging
    logging.basicConfig(
        level=logging.DEBUG if verbose else logging.INFO,
        format="%(levelname)s: %(message)s",
    )

    # Convert to Path objects
    dbml_path = Path(dbml_file)
    template_path = Path(template_dir)
    output_path = Path(output_dir)

    # Validate inputs
    if not dbml_path.exists():
        logger.error(f"DBML file not found: {dbml_path}")
        sys.exit(1)

    if not template_path.exists():
        logger.error(f"Template directory not found: {template_path}")
        sys.exit(1)

    try:
        # Generate code
        generator = DBMLJinjaGenerator(dbml_path, template_path, output_path)
        generator.generate()

        logger.info("Code generation complete!")

    except Exception as e:
        logger.error(f"Generation failed: {e}")
        if verbose:
            raise
        sys.exit(1)


def cli_main():
    """CLI entry point."""
    parser = argparse.ArgumentParser(
        description="Generate code from DBML schema using Jinja2 templates"
    )
    parser.add_argument("dbml_file", type=Path, help="Path to DBML schema file")
    parser.add_argument(
        "template_dir", type=Path, help="Directory containing Jinja2 templates"
    )
    parser.add_argument("output_dir", type=Path, help="Output directory for generated files")
    parser.add_argument(
        "-v", "--verbose", action="store_true", help="Enable verbose logging"
    )

    args = parser.parse_args()
    main(args.dbml_file, args.template_dir, args.output_dir, args.verbose)


if __name__ == "__main__":
    cli_main()
