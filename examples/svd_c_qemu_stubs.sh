#!/bin/bash
# Generate C QEMU device model stubs from an SVD file
#
# This example generates plain C code suitable for QEMU device models
# from CMSIS-SVD peripheral descriptions.

set -e

OUTDIR=device_c_qemu_stubs
MOCK_QEMU_HEADERS=../extern/mock_qemu_headers
SVD_STUBS_INCLUDE=../c_qemu_svd_stubs/include

if [ ! -d ${OUTDIR}/ ] ; then
    mkdir ${OUTDIR}/
fi

SVD_IN=../extern/cmsis-svd/data/ARM_SAMPLE/CMSDK_CM3.svd

# Copy mock QEMU headers for standalone compilation
cp -r ${MOCK_QEMU_HEADERS}/qemu ${OUTDIR}/
cp -r ${MOCK_QEMU_HEADERS}/qom ${OUTDIR}/
cp -r ${MOCK_QEMU_HEADERS}/hw ${OUTDIR}/

# Copy SVD stub support headers
cp ${SVD_STUBS_INCLUDE}/svd_reg_macros.h ${OUTDIR}/

# Generate device and peripheral files
../generators/svd_jinja.py \
    --out-path ${OUTDIR}/ \
    --device device.h.jinja2 \
    --device Makefile.jinja2 \
    --peripheral peripheral_regs.h.jinja2 \
    --peripheral peripheral_qemu_stub.c.jinja2 \
    --peripheral peripheral_qemu_stub.h.jinja2 \
    --templates ../c_qemu_svd_stubs/template/ \
    ${SVD_IN}

echo "Generated files in ${OUTDIR}/:"
ls -la ${OUTDIR}/

# Build the generated stubs
echo ""
echo "Building generated stubs..."
make -C ${OUTDIR}/ check
