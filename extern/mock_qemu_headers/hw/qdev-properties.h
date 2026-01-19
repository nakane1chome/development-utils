/*
 * QEMU device properties stub for compilation testing
 * SPDX-License-Identifier: MIT
 */

#ifndef HW_QDEV_PROPERTIES_H
#define HW_QDEV_PROPERTIES_H

#include "qemu/osdep.h"

/* Property definition (stub) */
typedef struct Property {
    const char *name;
    int offset;
} Property;

#define DEFINE_PROP_END_OF_LIST() { .name = NULL }

#endif /* HW_QDEV_PROPERTIES_H */
