/*
 * QEMU module stub for compilation testing
 * SPDX-License-Identifier: MIT
 */

#ifndef QEMU_MODULE_H
#define QEMU_MODULE_H

/* Type registration macro - creates constructor function */
#define type_init(func) \
    static void __attribute__((constructor)) func##_register(void) { func(); }

#endif /* QEMU_MODULE_H */
