/*
 * QEMU OS-dependent header stub for compilation testing
 * SPDX-License-Identifier: MIT
 */

#ifndef QEMU_OSDEP_H
#define QEMU_OSDEP_H

#include <stdint.h>
#include <stddef.h>
#include <stdbool.h>
#include <inttypes.h>

/* QEMU address type */
typedef uint64_t hwaddr;
#define HWADDR_PRIx PRIx64

/* Error type placeholder */
typedef struct Error Error;

#endif /* QEMU_OSDEP_H */
