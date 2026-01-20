/*
 * Register definitions for TIMER1.
 * Generated from SVD file: CMSDK_CM3.svd.
 * SPDX-License-Identifier: MIT
 *
 * DO NOT EDIT - This file is auto-generated.
 */

#ifndef TIMER1_REGS_H
#define TIMER1_REGS_H

#include <stdint.h>
#include "svd_reg_macros.h"

/*
 * Peripheral: TIMER1
 * Timer 0
 */

/* ============================================================================
 * Register Offsets
 * ============================================================================
 */

#define TIMER1_CTRL_OFFSET    (0x0000)
#define TIMER1_VALUE_OFFSET    (0x0004)
#define TIMER1_RELOAD_OFFSET    (0x0008)
#define TIMER1_INTSTATUS_OFFSET    (0x000C)
#define TIMER1_INTCLEAR_OFFSET    (0x000C)

/* ============================================================================
 * Register Reset Values
 * ============================================================================
 */

#define TIMER1_CTRL_RESET    (0x00000000U)
#define TIMER1_VALUE_RESET    (0x00000000U)
#define TIMER1_RELOAD_RESET    (0x00000000U)
#define TIMER1_INTSTATUS_RESET    (0x00000000U)
#define TIMER1_INTCLEAR_RESET    (0x00000000U)

/* ============================================================================
 * Register Defined Masks (which bits are implemented)
 * ============================================================================
 */

#define TIMER1_CTRL_MASK    (0x1 | 0x2 | 0x4 | 0x8)
#define TIMER1_VALUE_MASK    (0xFFFFFFFFU)
#define TIMER1_RELOAD_MASK    (0xFFFFFFFFU)
#define TIMER1_INTSTATUS_MASK    (0xFFFFFFFFU)
#define TIMER1_INTCLEAR_MASK    (0xFFFFFFFFU)

/* ============================================================================
 * Register Access Modes
 * ============================================================================
 */

#define TIMER1_CTRL_ACCESS    SVD_ACCESS_RW
#define TIMER1_VALUE_ACCESS    SVD_ACCESS_RW
#define TIMER1_RELOAD_ACCESS    SVD_ACCESS_RW
#define TIMER1_INTSTATUS_ACCESS    SVD_ACCESS_RO
#define TIMER1_INTCLEAR_ACCESS    SVD_ACCESS_WO

/* ============================================================================
 * Field Definitions
 * ============================================================================
 */


/* ----------------------------------------------------------------------------
 * CTRL: Control Register
 * ----------------------------------------------------------------------------
 */

/* Field: ENABLE
 * Enable
 */
#define TIMER1_CTRL_ENABLE_SHIFT    (0U)
#define TIMER1_CTRL_ENABLE_WIDTH    (1U)
#define TIMER1_CTRL_ENABLE_MASK     (0x1)

/* Extract ENABLE field from register value */
#define TIMER1_CTRL_ENABLE_GET(reg_val) \
    (((reg_val) & TIMER1_CTRL_ENABLE_MASK) >> TIMER1_CTRL_ENABLE_SHIFT)

/* Insert ENABLE field into register value */
#define TIMER1_CTRL_ENABLE_SET(reg_val, field_val) \
    (((reg_val) & ~TIMER1_CTRL_ENABLE_MASK) | \
     (((field_val) << TIMER1_CTRL_ENABLE_SHIFT) & TIMER1_CTRL_ENABLE_MASK))

/* Field: EXTIN
 * External Input as Enable
 */
#define TIMER1_CTRL_EXTIN_SHIFT    (1U)
#define TIMER1_CTRL_EXTIN_WIDTH    (1U)
#define TIMER1_CTRL_EXTIN_MASK     (0x2)

/* Extract EXTIN field from register value */
#define TIMER1_CTRL_EXTIN_GET(reg_val) \
    (((reg_val) & TIMER1_CTRL_EXTIN_MASK) >> TIMER1_CTRL_EXTIN_SHIFT)

/* Insert EXTIN field into register value */
#define TIMER1_CTRL_EXTIN_SET(reg_val, field_val) \
    (((reg_val) & ~TIMER1_CTRL_EXTIN_MASK) | \
     (((field_val) << TIMER1_CTRL_EXTIN_SHIFT) & TIMER1_CTRL_EXTIN_MASK))

/* Field: EXTCLK
 * External Clock Enable
 */
#define TIMER1_CTRL_EXTCLK_SHIFT    (2U)
#define TIMER1_CTRL_EXTCLK_WIDTH    (1U)
#define TIMER1_CTRL_EXTCLK_MASK     (0x4)

/* Extract EXTCLK field from register value */
#define TIMER1_CTRL_EXTCLK_GET(reg_val) \
    (((reg_val) & TIMER1_CTRL_EXTCLK_MASK) >> TIMER1_CTRL_EXTCLK_SHIFT)

/* Insert EXTCLK field into register value */
#define TIMER1_CTRL_EXTCLK_SET(reg_val, field_val) \
    (((reg_val) & ~TIMER1_CTRL_EXTCLK_MASK) | \
     (((field_val) << TIMER1_CTRL_EXTCLK_SHIFT) & TIMER1_CTRL_EXTCLK_MASK))

/* Field: INTEN
 * Interrupt Enable
 */
#define TIMER1_CTRL_INTEN_SHIFT    (3U)
#define TIMER1_CTRL_INTEN_WIDTH    (1U)
#define TIMER1_CTRL_INTEN_MASK     (0x8)

/* Extract INTEN field from register value */
#define TIMER1_CTRL_INTEN_GET(reg_val) \
    (((reg_val) & TIMER1_CTRL_INTEN_MASK) >> TIMER1_CTRL_INTEN_SHIFT)

/* Insert INTEN field into register value */
#define TIMER1_CTRL_INTEN_SET(reg_val, field_val) \
    (((reg_val) & ~TIMER1_CTRL_INTEN_MASK) | \
     (((field_val) << TIMER1_CTRL_INTEN_SHIFT) & TIMER1_CTRL_INTEN_MASK))

#endif /* TIMER1_REGS_H */