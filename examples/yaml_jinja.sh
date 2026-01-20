# Convert an YAML Device tree example to HTML
if [ ! -d device_html/ ] ; then
    mkdir device_html/
fi
YAML_IN=./device_data/rpi.yaml
../generators/yaml_jinja.py \
    --templates ../templates/yaml_jinja \
    $YAML_IN \
    dts_yaml.html.jinja2 \
    device_html/rpi_device_tree.html
