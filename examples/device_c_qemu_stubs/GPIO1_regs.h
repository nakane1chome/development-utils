/*
 * Register definitions for GPIO1.
 * Generated from SVD file: CMSDK_CM3.svd.
 * SPDX-License-Identifier: MIT
 *
 * DO NOT EDIT - This file is auto-generated.
 */

#ifndef GPIO1_REGS_H
#define GPIO1_REGS_H

#include <stdint.h>
#include "svd_reg_macros.h"

/*
 * Peripheral: GPIO1
 * general-purpose I/O
 */

/* ============================================================================
 * Register Offsets
 * ============================================================================
 */

#define GPIO1_DATA_OFFSET    (0x0000)
#define GPIO1_DATAOUT_OFFSET    (0x0004)
#define GPIO1_OUTENSET_OFFSET    (0x0010)
#define GPIO1_OUTENCLR_OFFSET    (0x0014)
#define GPIO1_ALTFUNCSET_OFFSET    (0x0018)
#define GPIO1_ALTFUNCCLR_OFFSET    (0x001C)
#define GPIO1_INTENSET_OFFSET    (0x0020)
#define GPIO1_INTENCLR_OFFSET    (0x0024)
#define GPIO1_INTTYPESET_OFFSET    (0x0028)
#define GPIO1_INTTYPECLR_OFFSET    (0x002C)
#define GPIO1_INTPOLSET_OFFSET    (0x0030)
#define GPIO1_INTPOLCLR_OFFSET    (0x0034)
#define GPIO1_INTSTATUS_OFFSET    (0x0038)
#define GPIO1_INTCLEAR_OFFSET    (0x0038)

/* ============================================================================
 * Register Reset Values
 * ============================================================================
 */

#define GPIO1_DATA_RESET    (0x00000000U)
#define GPIO1_DATAOUT_RESET    (0x00000000U)
#define GPIO1_OUTENSET_RESET    (0x00000000U)
#define GPIO1_OUTENCLR_RESET    (0x00000000U)
#define GPIO1_ALTFUNCSET_RESET    (0x00000000U)
#define GPIO1_ALTFUNCCLR_RESET    (0x00000000U)
#define GPIO1_INTENSET_RESET    (0x00000000U)
#define GPIO1_INTENCLR_RESET    (0x00000000U)
#define GPIO1_INTTYPESET_RESET    (0x00000000U)
#define GPIO1_INTTYPECLR_RESET    (0x00000000U)
#define GPIO1_INTPOLSET_RESET    (0x00000000U)
#define GPIO1_INTPOLCLR_RESET    (0x00000000U)
#define GPIO1_INTSTATUS_RESET    (0x00000000U)
#define GPIO1_INTCLEAR_RESET    (0x00000000U)

/* ============================================================================
 * Register Defined Masks (which bits are implemented)
 * ============================================================================
 */

#define GPIO1_DATA_MASK    (0xFFFFFFFFU)
#define GPIO1_DATAOUT_MASK    (0xFFFFFFFFU)
#define GPIO1_OUTENSET_MASK    (0xFFFFFFFFU)
#define GPIO1_OUTENCLR_MASK    (0xFFFFFFFFU)
#define GPIO1_ALTFUNCSET_MASK    (0xFFFFFFFFU)
#define GPIO1_ALTFUNCCLR_MASK    (0xFFFFFFFFU)
#define GPIO1_INTENSET_MASK    (0xFFFFFFFFU)
#define GPIO1_INTENCLR_MASK    (0xFFFFFFFFU)
#define GPIO1_INTTYPESET_MASK    (0xFFFFFFFFU)
#define GPIO1_INTTYPECLR_MASK    (0xFFFFFFFFU)
#define GPIO1_INTPOLSET_MASK    (0xFFFFFFFFU)
#define GPIO1_INTPOLCLR_MASK    (0xFFFFFFFFU)
#define GPIO1_INTSTATUS_MASK    (0xFFFFFFFFU)
#define GPIO1_INTCLEAR_MASK    (0xFFFFFFFFU)

/* ============================================================================
 * Register Access Modes
 * ============================================================================
 */

#define GPIO1_DATA_ACCESS    SVD_ACCESS_RW
#define GPIO1_DATAOUT_ACCESS    SVD_ACCESS_RW
#define GPIO1_OUTENSET_ACCESS    SVD_ACCESS_RW
#define GPIO1_OUTENCLR_ACCESS    SVD_ACCESS_RW
#define GPIO1_ALTFUNCSET_ACCESS    SVD_ACCESS_RW
#define GPIO1_ALTFUNCCLR_ACCESS    SVD_ACCESS_RW
#define GPIO1_INTENSET_ACCESS    SVD_ACCESS_RW
#define GPIO1_INTENCLR_ACCESS    SVD_ACCESS_RW
#define GPIO1_INTTYPESET_ACCESS    SVD_ACCESS_RW
#define GPIO1_INTTYPECLR_ACCESS    SVD_ACCESS_RW
#define GPIO1_INTPOLSET_ACCESS    SVD_ACCESS_RW
#define GPIO1_INTPOLCLR_ACCESS    SVD_ACCESS_RW
#define GPIO1_INTSTATUS_ACCESS    SVD_ACCESS_RO
#define GPIO1_INTCLEAR_ACCESS    SVD_ACCESS_WO

/* ============================================================================
 * Field Definitions
 * ============================================================================
 */


#endif /* GPIO1_REGS_H */