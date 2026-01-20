/*
 * QEMU device model header for WDT.
 * Generated from SVD file: CMSDK_CM3.svd.
 * SPDX-License-Identifier: GPL-2.0-or-later
 */

#ifndef WDT_QEMU_H
#define WDT_QEMU_H

#include "hw/sysbus.h"
#include "qom/object.h"

#define TYPE_WDT    "wdt"
OBJECT_DECLARE_SIMPLE_TYPE(WDTState, WDT)

#endif /* WDT_QEMU_H */