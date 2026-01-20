/*
 * QEMU device model header for SPI.
 * Generated from SVD file: CMSDK_CM3.svd.
 * SPDX-License-Identifier: GPL-2.0-or-later
 */

#ifndef SPI_QEMU_H
#define SPI_QEMU_H

#include "hw/sysbus.h"
#include "qom/object.h"

#define TYPE_SPI    "spi"
OBJECT_DECLARE_SIMPLE_TYPE(SPIState, SPI)

#endif /* SPI_QEMU_H */