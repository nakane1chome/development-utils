# Convert an SVD example to HTML
VER=cxx20
if [ ! -d device_${VER}_headers/ ] ; then
    mkdir device_${VER}_headers/
fi
SVD_IN=../extern/cmsis-svd/data/ARM_SAMPLE/CMSDK_CM3.svd
../generators/svd_jinja.py \
    --out-path device_${VER}_headers/ \
    --device device.hpp \
    --device test_device.cpp \
    --peripheral peripheral_mmio_param.hpp \
    --peripheral peripheral_mmio_regs.hpp \
    --peripheral peripheral_mmio_dev.hpp \
    --templates ../${VER}_mmio_interface/template/ \
    ${SVD_IN}

make -C device_${VER}_headers/
