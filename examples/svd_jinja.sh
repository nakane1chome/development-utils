# Convert an SVD example to HTML
if [ ! -d device_html/ ] ; then
    mkdir device_html/
fi
SVD_IN=../extern/cmsis-svd/data/ARM_SAMPLE/ARM_Sample.svd
python ../generators/svd_jinja.py \
    --out-path device_html/ \
    --device device_address_map.html \
    --peripheral peripheral_register_map.html \
    --templates ../templates/svd_jinja/ \
    ${SVD_IN}
       
