/*
 * Register definitions for WDT.
 * Generated from SVD file: CMSDK_CM3.svd.
 * SPDX-License-Identifier: MIT
 *
 * DO NOT EDIT - This file is auto-generated.
 */

#ifndef WDT_REGS_H
#define WDT_REGS_H

#include <stdint.h>
#include "svd_reg_macros.h"

/*
 * Peripheral: WDT
 * Watchdog Timer
 */

/* ============================================================================
 * Register Offsets
 * ============================================================================
 */

#define WDT_WDOGLOAD_OFFSET    (0x0000)
#define WDT_WDOGVALUE_OFFSET    (0x0004)
#define WDT_WDOGCONTROL_OFFSET    (0x0008)
#define WDT_WDOGINTCLR_OFFSET    (0x000C)
#define WDT_WDOGRIS_OFFSET    (0x0010)
#define WDT_WDOGMIS_OFFSET    (0x0014)
#define WDT_WDOGLOCK_OFFSET    (0x0C00)

/* ============================================================================
 * Register Reset Values
 * ============================================================================
 */

#define WDT_WDOGLOAD_RESET    (0xFFFFFFFFU)
#define WDT_WDOGVALUE_RESET    (0xFFFFFFFFU)
#define WDT_WDOGCONTROL_RESET    (0x00000020U)
#define WDT_WDOGINTCLR_RESET    (0x00000000U)
#define WDT_WDOGRIS_RESET    (0x00000000U)
#define WDT_WDOGMIS_RESET    (0x00000000U)
#define WDT_WDOGLOCK_RESET    (0x00000000U)

/* ============================================================================
 * Register Defined Masks (which bits are implemented)
 * ============================================================================
 */

#define WDT_WDOGLOAD_MASK    (0xFFFFFFFFU)
#define WDT_WDOGVALUE_MASK    (0xFFFFFFFFU)
#define WDT_WDOGCONTROL_MASK    (0x1 | 0x2)
#define WDT_WDOGINTCLR_MASK    (0x1)
#define WDT_WDOGRIS_MASK    (0x1)
#define WDT_WDOGMIS_MASK    (0x1)
#define WDT_WDOGLOCK_MASK    (0xFFFFFFFFU)

/* ============================================================================
 * Register Access Modes
 * ============================================================================
 */

#define WDT_WDOGLOAD_ACCESS    SVD_ACCESS_RW
#define WDT_WDOGVALUE_ACCESS    SVD_ACCESS_RO
#define WDT_WDOGCONTROL_ACCESS    SVD_ACCESS_RW
#define WDT_WDOGINTCLR_ACCESS    SVD_ACCESS_WO
#define WDT_WDOGRIS_ACCESS    SVD_ACCESS_RO
#define WDT_WDOGMIS_ACCESS    SVD_ACCESS_RO
#define WDT_WDOGLOCK_ACCESS    SVD_ACCESS_RW

/* ============================================================================
 * Field Definitions
 * ============================================================================
 */


/* ----------------------------------------------------------------------------
 * WDOGCONTROL: Watchdog Control Register
 * ----------------------------------------------------------------------------
 */

/* Field: INTEN
 * Enable the interrupt event
 */
#define WDT_WDOGCONTROL_INTEN_SHIFT    (0U)
#define WDT_WDOGCONTROL_INTEN_WIDTH    (1U)
#define WDT_WDOGCONTROL_INTEN_MASK     (0x1)

/* Extract INTEN field from register value */
#define WDT_WDOGCONTROL_INTEN_GET(reg_val) \
    (((reg_val) & WDT_WDOGCONTROL_INTEN_MASK) >> WDT_WDOGCONTROL_INTEN_SHIFT)

/* Insert INTEN field into register value */
#define WDT_WDOGCONTROL_INTEN_SET(reg_val, field_val) \
    (((reg_val) & ~WDT_WDOGCONTROL_INTEN_MASK) | \
     (((field_val) << WDT_WDOGCONTROL_INTEN_SHIFT) & WDT_WDOGCONTROL_INTEN_MASK))

/* Field: RESEN
 * Enable watchdog reset output
 */
#define WDT_WDOGCONTROL_RESEN_SHIFT    (1U)
#define WDT_WDOGCONTROL_RESEN_WIDTH    (1U)
#define WDT_WDOGCONTROL_RESEN_MASK     (0x2)

/* Extract RESEN field from register value */
#define WDT_WDOGCONTROL_RESEN_GET(reg_val) \
    (((reg_val) & WDT_WDOGCONTROL_RESEN_MASK) >> WDT_WDOGCONTROL_RESEN_SHIFT)

/* Insert RESEN field into register value */
#define WDT_WDOGCONTROL_RESEN_SET(reg_val, field_val) \
    (((reg_val) & ~WDT_WDOGCONTROL_RESEN_MASK) | \
     (((field_val) << WDT_WDOGCONTROL_RESEN_SHIFT) & WDT_WDOGCONTROL_RESEN_MASK))

/* ----------------------------------------------------------------------------
 * WDOGINTCLR: Watchdog Interrupt Clear Register
 * ----------------------------------------------------------------------------
 */

/* Field: INT
 * Interrupt
 */
#define WDT_WDOGINTCLR_INT_SHIFT    (0U)
#define WDT_WDOGINTCLR_INT_WIDTH    (1U)
#define WDT_WDOGINTCLR_INT_MASK     (0x1)

/* Extract INT field from register value */
#define WDT_WDOGINTCLR_INT_GET(reg_val) \
    (((reg_val) & WDT_WDOGINTCLR_INT_MASK) >> WDT_WDOGINTCLR_INT_SHIFT)

/* Insert INT field into register value */
#define WDT_WDOGINTCLR_INT_SET(reg_val, field_val) \
    (((reg_val) & ~WDT_WDOGINTCLR_INT_MASK) | \
     (((field_val) << WDT_WDOGINTCLR_INT_SHIFT) & WDT_WDOGINTCLR_INT_MASK))

/* ----------------------------------------------------------------------------
 * WDOGRIS: Watchdog Raw Interrupt Status Register
 * ----------------------------------------------------------------------------
 */

/* Field: RIS
 * Raw watchdog Interrupt
 */
#define WDT_WDOGRIS_RIS_SHIFT    (0U)
#define WDT_WDOGRIS_RIS_WIDTH    (1U)
#define WDT_WDOGRIS_RIS_MASK     (0x1)

/* Extract RIS field from register value */
#define WDT_WDOGRIS_RIS_GET(reg_val) \
    (((reg_val) & WDT_WDOGRIS_RIS_MASK) >> WDT_WDOGRIS_RIS_SHIFT)

/* Insert RIS field into register value */
#define WDT_WDOGRIS_RIS_SET(reg_val, field_val) \
    (((reg_val) & ~WDT_WDOGRIS_RIS_MASK) | \
     (((field_val) << WDT_WDOGRIS_RIS_SHIFT) & WDT_WDOGRIS_RIS_MASK))

/* ----------------------------------------------------------------------------
 * WDOGMIS: Watchdog Mask Interrupt Status Register
 * ----------------------------------------------------------------------------
 */

/* Field: MIS
 * Masked Watchdog Interrupt
 */
#define WDT_WDOGMIS_MIS_SHIFT    (0U)
#define WDT_WDOGMIS_MIS_WIDTH    (1U)
#define WDT_WDOGMIS_MIS_MASK     (0x1)

/* Extract MIS field from register value */
#define WDT_WDOGMIS_MIS_GET(reg_val) \
    (((reg_val) & WDT_WDOGMIS_MIS_MASK) >> WDT_WDOGMIS_MIS_SHIFT)

/* Insert MIS field into register value */
#define WDT_WDOGMIS_MIS_SET(reg_val, field_val) \
    (((reg_val) & ~WDT_WDOGMIS_MIS_MASK) | \
     (((field_val) << WDT_WDOGMIS_MIS_SHIFT) & WDT_WDOGMIS_MIS_MASK))

#endif /* WDT_REGS_H */