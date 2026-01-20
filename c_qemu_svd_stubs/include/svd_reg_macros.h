/*
 * SVD Register Access Macros
 * SPDX-License-Identifier: MIT
 *
 * Common macros for accessing SVD-defined registers and fields.
 * These replace C++ constexpr templates with C preprocessor equivalents.
 */

#ifndef SVD_REG_MACROS_H
#define SVD_REG_MACROS_H

#include <stdint.h>

/*
 * Field extraction and insertion macros
 *
 * Usage:
 *   uint32_t field = SVD_FIELD_GET(reg_value, PERIPH_REG_FIELD);
 *   reg_value = SVD_FIELD_SET(reg_value, PERIPH_REG_FIELD, new_value);
 */

/* Extract a field from a register value */
#define SVD_FIELD_GET(reg_val, field_prefix) \
    (((reg_val) & field_prefix##_MASK) >> field_prefix##_SHIFT)

/* Insert a field value into a register value (read-modify-write pattern) */
#define SVD_FIELD_SET(reg_val, field_prefix, field_val) \
    (((reg_val) & ~field_prefix##_MASK) | \
     (((field_val) << field_prefix##_SHIFT) & field_prefix##_MASK))

/* Create a field value at the correct position (for building register values) */
#define SVD_FIELD_VALUE(field_prefix, field_val) \
    (((field_val) << field_prefix##_SHIFT) & field_prefix##_MASK)

/*
 * Register access type indicators (for documentation/assertions)
 */
#define SVD_ACCESS_RO   0x01  /* Read-only */
#define SVD_ACCESS_WO   0x02  /* Write-only */
#define SVD_ACCESS_RW   0x03  /* Read-write */
#define SVD_ACCESS_W1C  0x04  /* Write-1-to-clear */
#define SVD_ACCESS_W1S  0x05  /* Write-1-to-set */
#define SVD_ACCESS_W1T  0x06  /* Write-1-to-toggle */

/*
 * Memory-mapped I/O access macros
 * For use in actual hardware access (not QEMU model internals)
 */

#define SVD_REG_READ8(base, offset) \
    (*(volatile uint8_t *)((uintptr_t)(base) + (offset)))

#define SVD_REG_READ16(base, offset) \
    (*(volatile uint16_t *)((uintptr_t)(base) + (offset)))

#define SVD_REG_READ32(base, offset) \
    (*(volatile uint32_t *)((uintptr_t)(base) + (offset)))

#define SVD_REG_READ64(base, offset) \
    (*(volatile uint64_t *)((uintptr_t)(base) + (offset)))

#define SVD_REG_WRITE8(base, offset, val) \
    (*(volatile uint8_t *)((uintptr_t)(base) + (offset)) = (val))

#define SVD_REG_WRITE16(base, offset, val) \
    (*(volatile uint16_t *)((uintptr_t)(base) + (offset)) = (val))

#define SVD_REG_WRITE32(base, offset, val) \
    (*(volatile uint32_t *)((uintptr_t)(base) + (offset)) = (val))

#define SVD_REG_WRITE64(base, offset, val) \
    (*(volatile uint64_t *)((uintptr_t)(base) + (offset)) = (val))

/*
 * Helper macros for generating field masks
 */
#define SVD_MASK_WIDTH(width) \
    ((1ULL << (width)) - 1ULL)

#define SVD_MASK_AT(shift, width) \
    (SVD_MASK_WIDTH(width) << (shift))

#endif /* SVD_REG_MACROS_H */
