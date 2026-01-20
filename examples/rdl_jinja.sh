#!/bin/bash

# Convert an SVD example to HTML
if [ ! -d rdl_html/ ] ; then
    mkdir rdl_html/
fi
RDL_PATH=../examples/system_rdl/

for RDL_IN in tiny.rdl atxmega_spi.rdl cfg_registers.rdl; do
   python ../generators/rdl_jinja.py \
    --out-path rdl_html/ \
    --component component_map.html.jinja2 \
    --templates ../templates/rdl_jinja/ \
    ${RDL_PATH}/${RDL_IN}
done
