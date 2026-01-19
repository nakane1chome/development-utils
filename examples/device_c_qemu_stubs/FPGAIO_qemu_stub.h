/*
 * QEMU device model header for FPGAIO.
 * Generated from SVD file: CMSDK_CM3.svd.
 * SPDX-License-Identifier: GPL-2.0-or-later
 */

#ifndef FPGAIO_QEMU_H
#define FPGAIO_QEMU_H

#include "hw/sysbus.h"
#include "qom/object.h"

#define TYPE_FPGAIO    "fpgaio"
OBJECT_DECLARE_SIMPLE_TYPE(FPGAIOState, FPGAIO)

#endif /* FPGAIO_QEMU_H */