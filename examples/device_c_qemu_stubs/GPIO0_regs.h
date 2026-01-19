/*
 * Register definitions for GPIO0.
 * Generated from SVD file: CMSDK_CM3.svd.
 * SPDX-License-Identifier: MIT
 *
 * DO NOT EDIT - This file is auto-generated.
 */

#ifndef GPIO0_REGS_H
#define GPIO0_REGS_H

#include <stdint.h>
#include "svd_reg_macros.h"

/*
 * Peripheral: GPIO0
 * general-purpose I/O
 */

/* ============================================================================
 * Register Offsets
 * ============================================================================
 */

#define GPIO0_DATA_OFFSET    (0x0000)
#define GPIO0_DATAOUT_OFFSET    (0x0004)
#define GPIO0_OUTENSET_OFFSET    (0x0010)
#define GPIO0_OUTENCLR_OFFSET    (0x0014)
#define GPIO0_ALTFUNCSET_OFFSET    (0x0018)
#define GPIO0_ALTFUNCCLR_OFFSET    (0x001C)
#define GPIO0_INTENSET_OFFSET    (0x0020)
#define GPIO0_INTENCLR_OFFSET    (0x0024)
#define GPIO0_INTTYPESET_OFFSET    (0x0028)
#define GPIO0_INTTYPECLR_OFFSET    (0x002C)
#define GPIO0_INTPOLSET_OFFSET    (0x0030)
#define GPIO0_INTPOLCLR_OFFSET    (0x0034)
#define GPIO0_INTSTATUS_OFFSET    (0x0038)
#define GPIO0_INTCLEAR_OFFSET    (0x0038)

/* ============================================================================
 * Register Reset Values
 * ============================================================================
 */

#define GPIO0_DATA_RESET    (0x00000000U)
#define GPIO0_DATAOUT_RESET    (0x00000000U)
#define GPIO0_OUTENSET_RESET    (0x00000000U)
#define GPIO0_OUTENCLR_RESET    (0x00000000U)
#define GPIO0_ALTFUNCSET_RESET    (0x00000000U)
#define GPIO0_ALTFUNCCLR_RESET    (0x00000000U)
#define GPIO0_INTENSET_RESET    (0x00000000U)
#define GPIO0_INTENCLR_RESET    (0x00000000U)
#define GPIO0_INTTYPESET_RESET    (0x00000000U)
#define GPIO0_INTTYPECLR_RESET    (0x00000000U)
#define GPIO0_INTPOLSET_RESET    (0x00000000U)
#define GPIO0_INTPOLCLR_RESET    (0x00000000U)
#define GPIO0_INTSTATUS_RESET    (0x00000000U)
#define GPIO0_INTCLEAR_RESET    (0x00000000U)

/* ============================================================================
 * Register Defined Masks (which bits are implemented)
 * ============================================================================
 */

#define GPIO0_DATA_MASK    (0xFFFFFFFFU)
#define GPIO0_DATAOUT_MASK    (0xFFFFFFFFU)
#define GPIO0_OUTENSET_MASK    (0xFFFFFFFFU)
#define GPIO0_OUTENCLR_MASK    (0xFFFFFFFFU)
#define GPIO0_ALTFUNCSET_MASK    (0xFFFFFFFFU)
#define GPIO0_ALTFUNCCLR_MASK    (0xFFFFFFFFU)
#define GPIO0_INTENSET_MASK    (0xFFFFFFFFU)
#define GPIO0_INTENCLR_MASK    (0xFFFFFFFFU)
#define GPIO0_INTTYPESET_MASK    (0xFFFFFFFFU)
#define GPIO0_INTTYPECLR_MASK    (0xFFFFFFFFU)
#define GPIO0_INTPOLSET_MASK    (0xFFFFFFFFU)
#define GPIO0_INTPOLCLR_MASK    (0xFFFFFFFFU)
#define GPIO0_INTSTATUS_MASK    (0xFFFFFFFFU)
#define GPIO0_INTCLEAR_MASK    (0xFFFFFFFFU)

/* ============================================================================
 * Register Access Modes
 * ============================================================================
 */

#define GPIO0_DATA_ACCESS    SVD_ACCESS_RW
#define GPIO0_DATAOUT_ACCESS    SVD_ACCESS_RW
#define GPIO0_OUTENSET_ACCESS    SVD_ACCESS_RW
#define GPIO0_OUTENCLR_ACCESS    SVD_ACCESS_RW
#define GPIO0_ALTFUNCSET_ACCESS    SVD_ACCESS_RW
#define GPIO0_ALTFUNCCLR_ACCESS    SVD_ACCESS_RW
#define GPIO0_INTENSET_ACCESS    SVD_ACCESS_RW
#define GPIO0_INTENCLR_ACCESS    SVD_ACCESS_RW
#define GPIO0_INTTYPESET_ACCESS    SVD_ACCESS_RW
#define GPIO0_INTTYPECLR_ACCESS    SVD_ACCESS_RW
#define GPIO0_INTPOLSET_ACCESS    SVD_ACCESS_RW
#define GPIO0_INTPOLCLR_ACCESS    SVD_ACCESS_RW
#define GPIO0_INTSTATUS_ACCESS    SVD_ACCESS_RO
#define GPIO0_INTCLEAR_ACCESS    SVD_ACCESS_WO

/* ============================================================================
 * Field Definitions
 * ============================================================================
 */


#endif /* GPIO0_REGS_H */