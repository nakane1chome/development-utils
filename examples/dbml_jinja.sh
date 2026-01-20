#!/bin/bash

# Generate code from DBML schema example

# Create output directories
if [ ! -d dbml_generated/ ] ; then
    mkdir dbml_generated/
fi
if [ ! -d dbml_generated/models/ ] ; then
    mkdir dbml_generated/models/
fi
if [ ! -d dbml_generated/docs/ ] ; then
    mkdir dbml_generated/docs/
fi

DBML_IN=dbml/example_schema.dbml

# Generate SQLAlchemy models
echo "Generating SQLAlchemy models..."
python ../generators/dbml_jinja.py \
    ${DBML_IN} \
    ../templates/dbml_jinja/sqlalchemy \
    dbml_generated/models/

# Generate documentation
echo "Generating documentation..."
python ../generators/dbml_jinja.py \
    ${DBML_IN} \
    ../templates/dbml_jinja/docs \
    dbml_generated/docs/

echo "Done! Output in dbml_generated/"
