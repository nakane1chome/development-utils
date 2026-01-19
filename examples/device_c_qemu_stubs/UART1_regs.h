/*
 * Register definitions for UART1.
 * Generated from SVD file: CMSDK_CM3.svd.
 * SPDX-License-Identifier: MIT
 *
 * DO NOT EDIT - This file is auto-generated.
 */

#ifndef UART1_REGS_H
#define UART1_REGS_H

#include <stdint.h>
#include "svd_reg_macros.h"

/*
 * Peripheral: UART1
 * UART 0
 */

/* ============================================================================
 * Register Offsets
 * ============================================================================
 */

#define UART1_DATA_OFFSET    (0x0000)
#define UART1_STATE_OFFSET    (0x0004)
#define UART1_CTRL_OFFSET    (0x0008)
#define UART1_INTSTATUS_OFFSET    (0x000C)
#define UART1_INTCLEAR_OFFSET    (0x000C)
#define UART1_BAUDDIV_OFFSET    (0x0010)

/* ============================================================================
 * Register Reset Values
 * ============================================================================
 */

#define UART1_DATA_RESET    (0x00U)
#define UART1_STATE_RESET    (0x00000000U)
#define UART1_CTRL_RESET    (0x00000000U)
#define UART1_INTSTATUS_RESET    (0x00000000U)
#define UART1_INTCLEAR_RESET    (0x00000000U)
#define UART1_BAUDDIV_RESET    (0x00000000U)

/* ============================================================================
 * Register Defined Masks (which bits are implemented)
 * ============================================================================
 */

#define UART1_DATA_MASK    (0xFFU)
#define UART1_STATE_MASK    (0x8 | 0x4 | 0x2 | 0x1)
#define UART1_CTRL_MASK    (0x40 | 0x20 | 0x10 | 0x8 | 0x4 | 0x2 | 0x1)
#define UART1_INTSTATUS_MASK    (0x8 | 0x4 | 0x2 | 0x1)
#define UART1_INTCLEAR_MASK    (0x8 | 0x4 | 0x2 | 0x1)
#define UART1_BAUDDIV_MASK    (0xFFFFFFFFU)

/* ============================================================================
 * Register Access Modes
 * ============================================================================
 */

#define UART1_DATA_ACCESS    SVD_ACCESS_RW
#define UART1_STATE_ACCESS    SVD_ACCESS_RW
#define UART1_CTRL_ACCESS    SVD_ACCESS_RW
#define UART1_INTSTATUS_ACCESS    SVD_ACCESS_RO
#define UART1_INTCLEAR_ACCESS    SVD_ACCESS_WO
#define UART1_BAUDDIV_ACCESS    SVD_ACCESS_RW

/* ============================================================================
 * Field Definitions
 * ============================================================================
 */


/* ----------------------------------------------------------------------------
 * STATE: UART Status Register
 * ----------------------------------------------------------------------------
 */

/* Field: RXOV
 * RX Buffer Overun (write 1 to clear)
 */
#define UART1_STATE_RXOV_SHIFT    (3U)
#define UART1_STATE_RXOV_WIDTH    (1U)
#define UART1_STATE_RXOV_MASK     (0x8)

/* Extract RXOV field from register value */
#define UART1_STATE_RXOV_GET(reg_val) \
    (((reg_val) & UART1_STATE_RXOV_MASK) >> UART1_STATE_RXOV_SHIFT)

/* Insert RXOV field into register value */
#define UART1_STATE_RXOV_SET(reg_val, field_val) \
    (((reg_val) & ~UART1_STATE_RXOV_MASK) | \
     (((field_val) << UART1_STATE_RXOV_SHIFT) & UART1_STATE_RXOV_MASK))

/* Field: TXOV
 * TX Buffer Overun (write 1 to clear)
 */
#define UART1_STATE_TXOV_SHIFT    (2U)
#define UART1_STATE_TXOV_WIDTH    (1U)
#define UART1_STATE_TXOV_MASK     (0x4)

/* Extract TXOV field from register value */
#define UART1_STATE_TXOV_GET(reg_val) \
    (((reg_val) & UART1_STATE_TXOV_MASK) >> UART1_STATE_TXOV_SHIFT)

/* Insert TXOV field into register value */
#define UART1_STATE_TXOV_SET(reg_val, field_val) \
    (((reg_val) & ~UART1_STATE_TXOV_MASK) | \
     (((field_val) << UART1_STATE_TXOV_SHIFT) & UART1_STATE_TXOV_MASK))

/* Field: RXBF
 * RX Buffer Full
 */
#define UART1_STATE_RXBF_SHIFT    (1U)
#define UART1_STATE_RXBF_WIDTH    (1U)
#define UART1_STATE_RXBF_MASK     (0x2)

/* Extract RXBF field from register value */
#define UART1_STATE_RXBF_GET(reg_val) \
    (((reg_val) & UART1_STATE_RXBF_MASK) >> UART1_STATE_RXBF_SHIFT)

/* Insert RXBF field into register value */
#define UART1_STATE_RXBF_SET(reg_val, field_val) \
    (((reg_val) & ~UART1_STATE_RXBF_MASK) | \
     (((field_val) << UART1_STATE_RXBF_SHIFT) & UART1_STATE_RXBF_MASK))

/* Field: TXBF
 * TX Buffer Full
 */
#define UART1_STATE_TXBF_SHIFT    (0U)
#define UART1_STATE_TXBF_WIDTH    (1U)
#define UART1_STATE_TXBF_MASK     (0x1)

/* Extract TXBF field from register value */
#define UART1_STATE_TXBF_GET(reg_val) \
    (((reg_val) & UART1_STATE_TXBF_MASK) >> UART1_STATE_TXBF_SHIFT)

/* Insert TXBF field into register value */
#define UART1_STATE_TXBF_SET(reg_val, field_val) \
    (((reg_val) & ~UART1_STATE_TXBF_MASK) | \
     (((field_val) << UART1_STATE_TXBF_SHIFT) & UART1_STATE_TXBF_MASK))

/* ----------------------------------------------------------------------------
 * CTRL: UART Control Register
 * ----------------------------------------------------------------------------
 */

/* Field: HSTX
 * High Speed Test Mode for TX only
 */
#define UART1_CTRL_HSTX_SHIFT    (6U)
#define UART1_CTRL_HSTX_WIDTH    (1U)
#define UART1_CTRL_HSTX_MASK     (0x40)

/* Extract HSTX field from register value */
#define UART1_CTRL_HSTX_GET(reg_val) \
    (((reg_val) & UART1_CTRL_HSTX_MASK) >> UART1_CTRL_HSTX_SHIFT)

/* Insert HSTX field into register value */
#define UART1_CTRL_HSTX_SET(reg_val, field_val) \
    (((reg_val) & ~UART1_CTRL_HSTX_MASK) | \
     (((field_val) << UART1_CTRL_HSTX_SHIFT) & UART1_CTRL_HSTX_MASK))

/* Field: RVOVINT
 * RX Overrun Interrupt Enable
 */
#define UART1_CTRL_RVOVINT_SHIFT    (5U)
#define UART1_CTRL_RVOVINT_WIDTH    (1U)
#define UART1_CTRL_RVOVINT_MASK     (0x20)

/* Extract RVOVINT field from register value */
#define UART1_CTRL_RVOVINT_GET(reg_val) \
    (((reg_val) & UART1_CTRL_RVOVINT_MASK) >> UART1_CTRL_RVOVINT_SHIFT)

/* Insert RVOVINT field into register value */
#define UART1_CTRL_RVOVINT_SET(reg_val, field_val) \
    (((reg_val) & ~UART1_CTRL_RVOVINT_MASK) | \
     (((field_val) << UART1_CTRL_RVOVINT_SHIFT) & UART1_CTRL_RVOVINT_MASK))

/* Field: TXOVINT
 * TX Overrun Interrupt Enable
 */
#define UART1_CTRL_TXOVINT_SHIFT    (4U)
#define UART1_CTRL_TXOVINT_WIDTH    (1U)
#define UART1_CTRL_TXOVINT_MASK     (0x10)

/* Extract TXOVINT field from register value */
#define UART1_CTRL_TXOVINT_GET(reg_val) \
    (((reg_val) & UART1_CTRL_TXOVINT_MASK) >> UART1_CTRL_TXOVINT_SHIFT)

/* Insert TXOVINT field into register value */
#define UART1_CTRL_TXOVINT_SET(reg_val, field_val) \
    (((reg_val) & ~UART1_CTRL_TXOVINT_MASK) | \
     (((field_val) << UART1_CTRL_TXOVINT_SHIFT) & UART1_CTRL_TXOVINT_MASK))

/* Field: RXINT
 * RX Interrupt Enable
 */
#define UART1_CTRL_RXINT_SHIFT    (3U)
#define UART1_CTRL_RXINT_WIDTH    (1U)
#define UART1_CTRL_RXINT_MASK     (0x8)

/* Extract RXINT field from register value */
#define UART1_CTRL_RXINT_GET(reg_val) \
    (((reg_val) & UART1_CTRL_RXINT_MASK) >> UART1_CTRL_RXINT_SHIFT)

/* Insert RXINT field into register value */
#define UART1_CTRL_RXINT_SET(reg_val, field_val) \
    (((reg_val) & ~UART1_CTRL_RXINT_MASK) | \
     (((field_val) << UART1_CTRL_RXINT_SHIFT) & UART1_CTRL_RXINT_MASK))

/* Field: TXINT
 * TX Interrupt Enable
 */
#define UART1_CTRL_TXINT_SHIFT    (2U)
#define UART1_CTRL_TXINT_WIDTH    (1U)
#define UART1_CTRL_TXINT_MASK     (0x4)

/* Extract TXINT field from register value */
#define UART1_CTRL_TXINT_GET(reg_val) \
    (((reg_val) & UART1_CTRL_TXINT_MASK) >> UART1_CTRL_TXINT_SHIFT)

/* Insert TXINT field into register value */
#define UART1_CTRL_TXINT_SET(reg_val, field_val) \
    (((reg_val) & ~UART1_CTRL_TXINT_MASK) | \
     (((field_val) << UART1_CTRL_TXINT_SHIFT) & UART1_CTRL_TXINT_MASK))

/* Field: RXEN
 * RX Enable
 */
#define UART1_CTRL_RXEN_SHIFT    (1U)
#define UART1_CTRL_RXEN_WIDTH    (1U)
#define UART1_CTRL_RXEN_MASK     (0x2)

/* Extract RXEN field from register value */
#define UART1_CTRL_RXEN_GET(reg_val) \
    (((reg_val) & UART1_CTRL_RXEN_MASK) >> UART1_CTRL_RXEN_SHIFT)

/* Insert RXEN field into register value */
#define UART1_CTRL_RXEN_SET(reg_val, field_val) \
    (((reg_val) & ~UART1_CTRL_RXEN_MASK) | \
     (((field_val) << UART1_CTRL_RXEN_SHIFT) & UART1_CTRL_RXEN_MASK))

/* Field: TXEN
 * TX Enable
 */
#define UART1_CTRL_TXEN_SHIFT    (0U)
#define UART1_CTRL_TXEN_WIDTH    (1U)
#define UART1_CTRL_TXEN_MASK     (0x1)

/* Extract TXEN field from register value */
#define UART1_CTRL_TXEN_GET(reg_val) \
    (((reg_val) & UART1_CTRL_TXEN_MASK) >> UART1_CTRL_TXEN_SHIFT)

/* Insert TXEN field into register value */
#define UART1_CTRL_TXEN_SET(reg_val, field_val) \
    (((reg_val) & ~UART1_CTRL_TXEN_MASK) | \
     (((field_val) << UART1_CTRL_TXEN_SHIFT) & UART1_CTRL_TXEN_MASK))

/* ----------------------------------------------------------------------------
 * INTSTATUS: UART Interrupt Status Register
 * ----------------------------------------------------------------------------
 */

/* Field: RXOV
 * RX Overrun Interrupt
 */
#define UART1_INTSTATUS_RXOV_SHIFT    (3U)
#define UART1_INTSTATUS_RXOV_WIDTH    (1U)
#define UART1_INTSTATUS_RXOV_MASK     (0x8)

/* Extract RXOV field from register value */
#define UART1_INTSTATUS_RXOV_GET(reg_val) \
    (((reg_val) & UART1_INTSTATUS_RXOV_MASK) >> UART1_INTSTATUS_RXOV_SHIFT)

/* Insert RXOV field into register value */
#define UART1_INTSTATUS_RXOV_SET(reg_val, field_val) \
    (((reg_val) & ~UART1_INTSTATUS_RXOV_MASK) | \
     (((field_val) << UART1_INTSTATUS_RXOV_SHIFT) & UART1_INTSTATUS_RXOV_MASK))

/* Field: TXOV
 * TX Overrun Interrupt
 */
#define UART1_INTSTATUS_TXOV_SHIFT    (2U)
#define UART1_INTSTATUS_TXOV_WIDTH    (1U)
#define UART1_INTSTATUS_TXOV_MASK     (0x4)

/* Extract TXOV field from register value */
#define UART1_INTSTATUS_TXOV_GET(reg_val) \
    (((reg_val) & UART1_INTSTATUS_TXOV_MASK) >> UART1_INTSTATUS_TXOV_SHIFT)

/* Insert TXOV field into register value */
#define UART1_INTSTATUS_TXOV_SET(reg_val, field_val) \
    (((reg_val) & ~UART1_INTSTATUS_TXOV_MASK) | \
     (((field_val) << UART1_INTSTATUS_TXOV_SHIFT) & UART1_INTSTATUS_TXOV_MASK))

/* Field: RXINT
 * RX Interrupt
 */
#define UART1_INTSTATUS_RXINT_SHIFT    (1U)
#define UART1_INTSTATUS_RXINT_WIDTH    (1U)
#define UART1_INTSTATUS_RXINT_MASK     (0x2)

/* Extract RXINT field from register value */
#define UART1_INTSTATUS_RXINT_GET(reg_val) \
    (((reg_val) & UART1_INTSTATUS_RXINT_MASK) >> UART1_INTSTATUS_RXINT_SHIFT)

/* Insert RXINT field into register value */
#define UART1_INTSTATUS_RXINT_SET(reg_val, field_val) \
    (((reg_val) & ~UART1_INTSTATUS_RXINT_MASK) | \
     (((field_val) << UART1_INTSTATUS_RXINT_SHIFT) & UART1_INTSTATUS_RXINT_MASK))

/* Field: TXINT
 * TX Interrupt
 */
#define UART1_INTSTATUS_TXINT_SHIFT    (0U)
#define UART1_INTSTATUS_TXINT_WIDTH    (1U)
#define UART1_INTSTATUS_TXINT_MASK     (0x1)

/* Extract TXINT field from register value */
#define UART1_INTSTATUS_TXINT_GET(reg_val) \
    (((reg_val) & UART1_INTSTATUS_TXINT_MASK) >> UART1_INTSTATUS_TXINT_SHIFT)

/* Insert TXINT field into register value */
#define UART1_INTSTATUS_TXINT_SET(reg_val, field_val) \
    (((reg_val) & ~UART1_INTSTATUS_TXINT_MASK) | \
     (((field_val) << UART1_INTSTATUS_TXINT_SHIFT) & UART1_INTSTATUS_TXINT_MASK))

/* ----------------------------------------------------------------------------
 * INTCLEAR: UART Interrupt CLEAR Register
 * ----------------------------------------------------------------------------
 */

/* Field: RXOV
 * RX Overrun Interrupt
 */
#define UART1_INTCLEAR_RXOV_SHIFT    (3U)
#define UART1_INTCLEAR_RXOV_WIDTH    (1U)
#define UART1_INTCLEAR_RXOV_MASK     (0x8)

/* Extract RXOV field from register value */
#define UART1_INTCLEAR_RXOV_GET(reg_val) \
    (((reg_val) & UART1_INTCLEAR_RXOV_MASK) >> UART1_INTCLEAR_RXOV_SHIFT)

/* Insert RXOV field into register value */
#define UART1_INTCLEAR_RXOV_SET(reg_val, field_val) \
    (((reg_val) & ~UART1_INTCLEAR_RXOV_MASK) | \
     (((field_val) << UART1_INTCLEAR_RXOV_SHIFT) & UART1_INTCLEAR_RXOV_MASK))

/* Field: TXOV
 * TX Overrun Interrupt
 */
#define UART1_INTCLEAR_TXOV_SHIFT    (2U)
#define UART1_INTCLEAR_TXOV_WIDTH    (1U)
#define UART1_INTCLEAR_TXOV_MASK     (0x4)

/* Extract TXOV field from register value */
#define UART1_INTCLEAR_TXOV_GET(reg_val) \
    (((reg_val) & UART1_INTCLEAR_TXOV_MASK) >> UART1_INTCLEAR_TXOV_SHIFT)

/* Insert TXOV field into register value */
#define UART1_INTCLEAR_TXOV_SET(reg_val, field_val) \
    (((reg_val) & ~UART1_INTCLEAR_TXOV_MASK) | \
     (((field_val) << UART1_INTCLEAR_TXOV_SHIFT) & UART1_INTCLEAR_TXOV_MASK))

/* Field: RXINT
 * RX Interrupt
 */
#define UART1_INTCLEAR_RXINT_SHIFT    (1U)
#define UART1_INTCLEAR_RXINT_WIDTH    (1U)
#define UART1_INTCLEAR_RXINT_MASK     (0x2)

/* Extract RXINT field from register value */
#define UART1_INTCLEAR_RXINT_GET(reg_val) \
    (((reg_val) & UART1_INTCLEAR_RXINT_MASK) >> UART1_INTCLEAR_RXINT_SHIFT)

/* Insert RXINT field into register value */
#define UART1_INTCLEAR_RXINT_SET(reg_val, field_val) \
    (((reg_val) & ~UART1_INTCLEAR_RXINT_MASK) | \
     (((field_val) << UART1_INTCLEAR_RXINT_SHIFT) & UART1_INTCLEAR_RXINT_MASK))

/* Field: TXINT
 * TX Interrupt
 */
#define UART1_INTCLEAR_TXINT_SHIFT    (0U)
#define UART1_INTCLEAR_TXINT_WIDTH    (1U)
#define UART1_INTCLEAR_TXINT_MASK     (0x1)

/* Extract TXINT field from register value */
#define UART1_INTCLEAR_TXINT_GET(reg_val) \
    (((reg_val) & UART1_INTCLEAR_TXINT_MASK) >> UART1_INTCLEAR_TXINT_SHIFT)

/* Insert TXINT field into register value */
#define UART1_INTCLEAR_TXINT_SET(reg_val, field_val) \
    (((reg_val) & ~UART1_INTCLEAR_TXINT_MASK) | \
     (((field_val) << UART1_INTCLEAR_TXINT_SHIFT) & UART1_INTCLEAR_TXINT_MASK))

#endif /* UART1_REGS_H */