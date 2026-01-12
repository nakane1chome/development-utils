# Convert an SVD example to HTML
VER=cxx17
if [ ! -d device_${VER}_headers/ ] ; then
    mkdir device_${VER}_headers/
fi
SVD_IN=../extern/cmsis-svd/data/ARM_SAMPLE/CMSDK_CM3.svd
../generators/svd_jinja.py \
    --out-path device_${VER}_headers/ \
    --device device.hpp.jinja2 \
    --device test_device.cpp.jinja2 \
    --peripheral peripheral_mmio_param.hpp.jinja2 \
    --peripheral peripheral_mmio_regs.hpp.jinja2 \
    --peripheral peripheral_mmio_dev.hpp.jinja2 \
    --templates ../${VER}_mmio_interface/template/ \
    ${SVD_IN}

make -C device_${VER}_headers/ -f Makefile.gxx
