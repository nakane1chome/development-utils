/*
 * QEMU logging stub for compilation testing
 * SPDX-License-Identifier: MIT
 */

#ifndef QEMU_LOG_H
#define QEMU_LOG_H

#include <stdio.h>

/* Log mask bits */
#define LOG_GUEST_ERROR  (1 << 0)
#define LOG_UNIMP        (1 << 1)

/* Stub implementation - prints to stderr */
#define qemu_log_mask(mask, fmt, ...) \
    fprintf(stderr, "[QEMU] " fmt, ##__VA_ARGS__)

#endif /* QEMU_LOG_H */
