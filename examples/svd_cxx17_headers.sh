# Convert an SVD example to HTML
if [ ! -d device_cxx_headers/ ] ; then
    mkdir device_cxx_headers/
fi
SVD_IN=../extern/cmsis-svd/data/ARM_SAMPLE/CMSDK_CM3.svd
../generators/svd_jinja.py \
    --out-path device_cxx_headers/ \
    --device device.hpp \
    --device test_device.cpp \
    --peripheral peripheral_mmio_param.hpp \
    --peripheral peripheral_mmio_regs.hpp \
    --peripheral peripheral_mmio_dev.hpp \
    --templates ../cxx_mmio_interface/template/ \
    ${SVD_IN}

make -C device_cxx_headers/
