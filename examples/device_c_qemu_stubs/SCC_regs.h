/*
 * Register definitions for SCC.
 * Generated from SVD file: CMSDK_CM3.svd.
 * SPDX-License-Identifier: MIT
 *
 * DO NOT EDIT - This file is auto-generated.
 */

#ifndef SCC_REGS_H
#define SCC_REGS_H

#include <stdint.h>
#include "svd_reg_macros.h"

/*
 * Peripheral: SCC
 * Serial Communication Controller
 */

/* ============================================================================
 * Register Offsets
 * ============================================================================
 */

#define SCC_CFG_REG0_OFFSET    (0x0000)
#define SCC_CFG_REG1_OFFSET    (0x0004)
#define SCC_CFG_REG2_OFFSET    (0x0008)
#define SCC_CFG_REG3_OFFSET    (0x000C)
#define SCC_CFG_REG4_OFFSET    (0x0010)
#define SCC_CFG_REG5_OFFSET    (0x0014)
#define SCC_CFG_REG6_OFFSET    (0x0018)
#define SCC_CFG_REG7_OFFSET    (0x001C)
#define SCC_SYS_CFGDATA_RTN_OFFSET    (0x00A0)
#define SCC_SYS_CFGDATA_OUT_OFFSET    (0x00A4)
#define SCC_SYS_CFGCTRL_OFFSET    (0x00A8)
#define SCC_SYS_CFGSTAT_OFFSET    (0x00AC)
#define SCC_DLL_OFFSET    (0x0100)
#define SCC_AID_OFFSET    (0x0FF8)
#define SCC_ID_OFFSET    (0x0FFC)

/* ============================================================================
 * Register Reset Values
 * ============================================================================
 */

#define SCC_CFG_REG0_RESET    (0x00000000U)
#define SCC_CFG_REG1_RESET    (0x00000000U)
#define SCC_CFG_REG2_RESET    (0x00000000U)
#define SCC_CFG_REG3_RESET    (0x00000000U)
#define SCC_CFG_REG4_RESET    (0x00000000U)
#define SCC_CFG_REG5_RESET    (0x00000000U)
#define SCC_CFG_REG6_RESET    (0x00000000U)
#define SCC_CFG_REG7_RESET    (0x00000000U)
#define SCC_SYS_CFGDATA_RTN_RESET    (0x00000000U)
#define SCC_SYS_CFGDATA_OUT_RESET    (0x00000000U)
#define SCC_SYS_CFGCTRL_RESET    (0x00000000U)
#define SCC_SYS_CFGSTAT_RESET    (0x00000000U)
#define SCC_DLL_RESET    (0x00000000U)
#define SCC_AID_RESET    (0x00000000U)
#define SCC_ID_RESET    (0x00000000U)

/* ============================================================================
 * Register Defined Masks (which bits are implemented)
 * ============================================================================
 */

#define SCC_CFG_REG0_MASK    (0x1)
#define SCC_CFG_REG1_MASK    (0x80 | 0x40 | 0x20 | 0x10 | 0x8 | 0x4 | 0x2 | 0x1)
#define SCC_CFG_REG2_MASK    (0xFFFFFFFFU)
#define SCC_CFG_REG3_MASK    (0x80 | 0x40 | 0x20 | 0x10 | 0x8 | 0x4 | 0x2 | 0x1)
#define SCC_CFG_REG4_MASK    (0xf)
#define SCC_CFG_REG5_MASK    (0x20)
#define SCC_CFG_REG6_MASK    (0xFFFFFFFFU)
#define SCC_CFG_REG7_MASK    (0xFFFFFFFFU)
#define SCC_SYS_CFGDATA_RTN_MASK    (0xFFFFFFFFU)
#define SCC_SYS_CFGDATA_OUT_MASK    (0xFFFFFFFFU)
#define SCC_SYS_CFGCTRL_MASK    (0x80000000 | 0x40000000 | 0x3f00000 | 0xfff)
#define SCC_SYS_CFGSTAT_MASK    (0x2 | 0x1)
#define SCC_DLL_MASK    (0xff000000 | 0xff0000 | 0x1)
#define SCC_AID_MASK    (0xff000000 | 0xf00000 | 0xff)
#define SCC_ID_MASK    (0xff000000 | 0xf00000 | 0xf0000 | 0xff0 | 0xf)

/* ============================================================================
 * Register Access Modes
 * ============================================================================
 */

#define SCC_CFG_REG0_ACCESS    SVD_ACCESS_RW
#define SCC_CFG_REG1_ACCESS    SVD_ACCESS_RW
#define SCC_CFG_REG2_ACCESS    SVD_ACCESS_RO
#define SCC_CFG_REG3_ACCESS    SVD_ACCESS_RO
#define SCC_CFG_REG4_ACCESS    SVD_ACCESS_RO
#define SCC_CFG_REG5_ACCESS    SVD_ACCESS_RW
#define SCC_CFG_REG6_ACCESS    SVD_ACCESS_RO
#define SCC_CFG_REG7_ACCESS    SVD_ACCESS_RO
#define SCC_SYS_CFGDATA_RTN_ACCESS    SVD_ACCESS_RW
#define SCC_SYS_CFGDATA_OUT_ACCESS    SVD_ACCESS_RW
#define SCC_SYS_CFGCTRL_ACCESS    SVD_ACCESS_RW
#define SCC_SYS_CFGSTAT_ACCESS    SVD_ACCESS_RW
#define SCC_DLL_ACCESS    SVD_ACCESS_RW
#define SCC_AID_ACCESS    SVD_ACCESS_RO
#define SCC_ID_ACCESS    SVD_ACCESS_RO

/* ============================================================================
 * Field Definitions
 * ============================================================================
 */


/* ----------------------------------------------------------------------------
 * CFG_REG0: No description
 * ----------------------------------------------------------------------------
 */

/* Field: REMAP
 * 1 = REMAP Block RAM to ZBT
 */
#define SCC_CFG_REG0_REMAP_SHIFT    (0U)
#define SCC_CFG_REG0_REMAP_WIDTH    (1U)
#define SCC_CFG_REG0_REMAP_MASK     (0x1)

/* Extract REMAP field from register value */
#define SCC_CFG_REG0_REMAP_GET(reg_val) \
    (((reg_val) & SCC_CFG_REG0_REMAP_MASK) >> SCC_CFG_REG0_REMAP_SHIFT)

/* Insert REMAP field into register value */
#define SCC_CFG_REG0_REMAP_SET(reg_val, field_val) \
    (((reg_val) & ~SCC_CFG_REG0_REMAP_MASK) | \
     (((field_val) << SCC_CFG_REG0_REMAP_SHIFT) & SCC_CFG_REG0_REMAP_MASK))

/* ----------------------------------------------------------------------------
 * CFG_REG1: No description
 * ----------------------------------------------------------------------------
 */

/* Field: MCC_LED7
 * MCC LEDs: 0 = OFF 1 = ON
 */
#define SCC_CFG_REG1_MCC_LED7_SHIFT    (7U)
#define SCC_CFG_REG1_MCC_LED7_WIDTH    (1U)
#define SCC_CFG_REG1_MCC_LED7_MASK     (0x80)

/* Extract MCC_LED7 field from register value */
#define SCC_CFG_REG1_MCC_LED7_GET(reg_val) \
    (((reg_val) & SCC_CFG_REG1_MCC_LED7_MASK) >> SCC_CFG_REG1_MCC_LED7_SHIFT)

/* Insert MCC_LED7 field into register value */
#define SCC_CFG_REG1_MCC_LED7_SET(reg_val, field_val) \
    (((reg_val) & ~SCC_CFG_REG1_MCC_LED7_MASK) | \
     (((field_val) << SCC_CFG_REG1_MCC_LED7_SHIFT) & SCC_CFG_REG1_MCC_LED7_MASK))

/* Field: MCC_LED6
 * MCC LEDs: 0 = OFF 1 = ON
 */
#define SCC_CFG_REG1_MCC_LED6_SHIFT    (6U)
#define SCC_CFG_REG1_MCC_LED6_WIDTH    (1U)
#define SCC_CFG_REG1_MCC_LED6_MASK     (0x40)

/* Extract MCC_LED6 field from register value */
#define SCC_CFG_REG1_MCC_LED6_GET(reg_val) \
    (((reg_val) & SCC_CFG_REG1_MCC_LED6_MASK) >> SCC_CFG_REG1_MCC_LED6_SHIFT)

/* Insert MCC_LED6 field into register value */
#define SCC_CFG_REG1_MCC_LED6_SET(reg_val, field_val) \
    (((reg_val) & ~SCC_CFG_REG1_MCC_LED6_MASK) | \
     (((field_val) << SCC_CFG_REG1_MCC_LED6_SHIFT) & SCC_CFG_REG1_MCC_LED6_MASK))

/* Field: MCC_LED5
 * MCC LEDs: 0 = OFF 1 = ON
 */
#define SCC_CFG_REG1_MCC_LED5_SHIFT    (5U)
#define SCC_CFG_REG1_MCC_LED5_WIDTH    (1U)
#define SCC_CFG_REG1_MCC_LED5_MASK     (0x20)

/* Extract MCC_LED5 field from register value */
#define SCC_CFG_REG1_MCC_LED5_GET(reg_val) \
    (((reg_val) & SCC_CFG_REG1_MCC_LED5_MASK) >> SCC_CFG_REG1_MCC_LED5_SHIFT)

/* Insert MCC_LED5 field into register value */
#define SCC_CFG_REG1_MCC_LED5_SET(reg_val, field_val) \
    (((reg_val) & ~SCC_CFG_REG1_MCC_LED5_MASK) | \
     (((field_val) << SCC_CFG_REG1_MCC_LED5_SHIFT) & SCC_CFG_REG1_MCC_LED5_MASK))

/* Field: MCC_LED4
 * MCC LEDs: 0 = OFF 1 = ON
 */
#define SCC_CFG_REG1_MCC_LED4_SHIFT    (4U)
#define SCC_CFG_REG1_MCC_LED4_WIDTH    (1U)
#define SCC_CFG_REG1_MCC_LED4_MASK     (0x10)

/* Extract MCC_LED4 field from register value */
#define SCC_CFG_REG1_MCC_LED4_GET(reg_val) \
    (((reg_val) & SCC_CFG_REG1_MCC_LED4_MASK) >> SCC_CFG_REG1_MCC_LED4_SHIFT)

/* Insert MCC_LED4 field into register value */
#define SCC_CFG_REG1_MCC_LED4_SET(reg_val, field_val) \
    (((reg_val) & ~SCC_CFG_REG1_MCC_LED4_MASK) | \
     (((field_val) << SCC_CFG_REG1_MCC_LED4_SHIFT) & SCC_CFG_REG1_MCC_LED4_MASK))

/* Field: MCC_LED3
 * MCC LEDs: 0 = OFF 1 = ON
 */
#define SCC_CFG_REG1_MCC_LED3_SHIFT    (3U)
#define SCC_CFG_REG1_MCC_LED3_WIDTH    (1U)
#define SCC_CFG_REG1_MCC_LED3_MASK     (0x8)

/* Extract MCC_LED3 field from register value */
#define SCC_CFG_REG1_MCC_LED3_GET(reg_val) \
    (((reg_val) & SCC_CFG_REG1_MCC_LED3_MASK) >> SCC_CFG_REG1_MCC_LED3_SHIFT)

/* Insert MCC_LED3 field into register value */
#define SCC_CFG_REG1_MCC_LED3_SET(reg_val, field_val) \
    (((reg_val) & ~SCC_CFG_REG1_MCC_LED3_MASK) | \
     (((field_val) << SCC_CFG_REG1_MCC_LED3_SHIFT) & SCC_CFG_REG1_MCC_LED3_MASK))

/* Field: MCC_LED2
 * MCC LEDs: 0 = OFF 1 = ON
 */
#define SCC_CFG_REG1_MCC_LED2_SHIFT    (2U)
#define SCC_CFG_REG1_MCC_LED2_WIDTH    (1U)
#define SCC_CFG_REG1_MCC_LED2_MASK     (0x4)

/* Extract MCC_LED2 field from register value */
#define SCC_CFG_REG1_MCC_LED2_GET(reg_val) \
    (((reg_val) & SCC_CFG_REG1_MCC_LED2_MASK) >> SCC_CFG_REG1_MCC_LED2_SHIFT)

/* Insert MCC_LED2 field into register value */
#define SCC_CFG_REG1_MCC_LED2_SET(reg_val, field_val) \
    (((reg_val) & ~SCC_CFG_REG1_MCC_LED2_MASK) | \
     (((field_val) << SCC_CFG_REG1_MCC_LED2_SHIFT) & SCC_CFG_REG1_MCC_LED2_MASK))

/* Field: MCC_LED1
 * MCC LEDs: 0 = OFF 1 = ON
 */
#define SCC_CFG_REG1_MCC_LED1_SHIFT    (1U)
#define SCC_CFG_REG1_MCC_LED1_WIDTH    (1U)
#define SCC_CFG_REG1_MCC_LED1_MASK     (0x2)

/* Extract MCC_LED1 field from register value */
#define SCC_CFG_REG1_MCC_LED1_GET(reg_val) \
    (((reg_val) & SCC_CFG_REG1_MCC_LED1_MASK) >> SCC_CFG_REG1_MCC_LED1_SHIFT)

/* Insert MCC_LED1 field into register value */
#define SCC_CFG_REG1_MCC_LED1_SET(reg_val, field_val) \
    (((reg_val) & ~SCC_CFG_REG1_MCC_LED1_MASK) | \
     (((field_val) << SCC_CFG_REG1_MCC_LED1_SHIFT) & SCC_CFG_REG1_MCC_LED1_MASK))

/* Field: MCC_LED0
 * MCC LEDs: 0 = OFF 1 = ON
 */
#define SCC_CFG_REG1_MCC_LED0_SHIFT    (0U)
#define SCC_CFG_REG1_MCC_LED0_WIDTH    (1U)
#define SCC_CFG_REG1_MCC_LED0_MASK     (0x1)

/* Extract MCC_LED0 field from register value */
#define SCC_CFG_REG1_MCC_LED0_GET(reg_val) \
    (((reg_val) & SCC_CFG_REG1_MCC_LED0_MASK) >> SCC_CFG_REG1_MCC_LED0_SHIFT)

/* Insert MCC_LED0 field into register value */
#define SCC_CFG_REG1_MCC_LED0_SET(reg_val, field_val) \
    (((reg_val) & ~SCC_CFG_REG1_MCC_LED0_MASK) | \
     (((field_val) << SCC_CFG_REG1_MCC_LED0_SHIFT) & SCC_CFG_REG1_MCC_LED0_MASK))

/* ----------------------------------------------------------------------------
 * CFG_REG3: No description
 * ----------------------------------------------------------------------------
 */

/* Field: MCC_SWITCHE7
 * MCC SWITCHES: 0 = OFF 1 = ON
 */
#define SCC_CFG_REG3_MCC_SWITCHE7_SHIFT    (7U)
#define SCC_CFG_REG3_MCC_SWITCHE7_WIDTH    (1U)
#define SCC_CFG_REG3_MCC_SWITCHE7_MASK     (0x80)

/* Extract MCC_SWITCHE7 field from register value */
#define SCC_CFG_REG3_MCC_SWITCHE7_GET(reg_val) \
    (((reg_val) & SCC_CFG_REG3_MCC_SWITCHE7_MASK) >> SCC_CFG_REG3_MCC_SWITCHE7_SHIFT)

/* Insert MCC_SWITCHE7 field into register value */
#define SCC_CFG_REG3_MCC_SWITCHE7_SET(reg_val, field_val) \
    (((reg_val) & ~SCC_CFG_REG3_MCC_SWITCHE7_MASK) | \
     (((field_val) << SCC_CFG_REG3_MCC_SWITCHE7_SHIFT) & SCC_CFG_REG3_MCC_SWITCHE7_MASK))

/* Field: MCC_SWITCHE6
 * MCC SWITCHES: 0 = OFF 1 = ON
 */
#define SCC_CFG_REG3_MCC_SWITCHE6_SHIFT    (6U)
#define SCC_CFG_REG3_MCC_SWITCHE6_WIDTH    (1U)
#define SCC_CFG_REG3_MCC_SWITCHE6_MASK     (0x40)

/* Extract MCC_SWITCHE6 field from register value */
#define SCC_CFG_REG3_MCC_SWITCHE6_GET(reg_val) \
    (((reg_val) & SCC_CFG_REG3_MCC_SWITCHE6_MASK) >> SCC_CFG_REG3_MCC_SWITCHE6_SHIFT)

/* Insert MCC_SWITCHE6 field into register value */
#define SCC_CFG_REG3_MCC_SWITCHE6_SET(reg_val, field_val) \
    (((reg_val) & ~SCC_CFG_REG3_MCC_SWITCHE6_MASK) | \
     (((field_val) << SCC_CFG_REG3_MCC_SWITCHE6_SHIFT) & SCC_CFG_REG3_MCC_SWITCHE6_MASK))

/* Field: MCC_SWITCHE5
 * MCC SWITCHES: 0 = OFF 1 = ON
 */
#define SCC_CFG_REG3_MCC_SWITCHE5_SHIFT    (5U)
#define SCC_CFG_REG3_MCC_SWITCHE5_WIDTH    (1U)
#define SCC_CFG_REG3_MCC_SWITCHE5_MASK     (0x20)

/* Extract MCC_SWITCHE5 field from register value */
#define SCC_CFG_REG3_MCC_SWITCHE5_GET(reg_val) \
    (((reg_val) & SCC_CFG_REG3_MCC_SWITCHE5_MASK) >> SCC_CFG_REG3_MCC_SWITCHE5_SHIFT)

/* Insert MCC_SWITCHE5 field into register value */
#define SCC_CFG_REG3_MCC_SWITCHE5_SET(reg_val, field_val) \
    (((reg_val) & ~SCC_CFG_REG3_MCC_SWITCHE5_MASK) | \
     (((field_val) << SCC_CFG_REG3_MCC_SWITCHE5_SHIFT) & SCC_CFG_REG3_MCC_SWITCHE5_MASK))

/* Field: MCC_SWITCHE4
 * MCC SWITCHES: 0 = OFF 1 = ON
 */
#define SCC_CFG_REG3_MCC_SWITCHE4_SHIFT    (4U)
#define SCC_CFG_REG3_MCC_SWITCHE4_WIDTH    (1U)
#define SCC_CFG_REG3_MCC_SWITCHE4_MASK     (0x10)

/* Extract MCC_SWITCHE4 field from register value */
#define SCC_CFG_REG3_MCC_SWITCHE4_GET(reg_val) \
    (((reg_val) & SCC_CFG_REG3_MCC_SWITCHE4_MASK) >> SCC_CFG_REG3_MCC_SWITCHE4_SHIFT)

/* Insert MCC_SWITCHE4 field into register value */
#define SCC_CFG_REG3_MCC_SWITCHE4_SET(reg_val, field_val) \
    (((reg_val) & ~SCC_CFG_REG3_MCC_SWITCHE4_MASK) | \
     (((field_val) << SCC_CFG_REG3_MCC_SWITCHE4_SHIFT) & SCC_CFG_REG3_MCC_SWITCHE4_MASK))

/* Field: MCC_SWITCHE3
 * MCC SWITCHES: 0 = OFF 1 = ON
 */
#define SCC_CFG_REG3_MCC_SWITCHE3_SHIFT    (3U)
#define SCC_CFG_REG3_MCC_SWITCHE3_WIDTH    (1U)
#define SCC_CFG_REG3_MCC_SWITCHE3_MASK     (0x8)

/* Extract MCC_SWITCHE3 field from register value */
#define SCC_CFG_REG3_MCC_SWITCHE3_GET(reg_val) \
    (((reg_val) & SCC_CFG_REG3_MCC_SWITCHE3_MASK) >> SCC_CFG_REG3_MCC_SWITCHE3_SHIFT)

/* Insert MCC_SWITCHE3 field into register value */
#define SCC_CFG_REG3_MCC_SWITCHE3_SET(reg_val, field_val) \
    (((reg_val) & ~SCC_CFG_REG3_MCC_SWITCHE3_MASK) | \
     (((field_val) << SCC_CFG_REG3_MCC_SWITCHE3_SHIFT) & SCC_CFG_REG3_MCC_SWITCHE3_MASK))

/* Field: MCC_SWITCHE2
 * MCC SWITCHES: 0 = OFF 1 = ON
 */
#define SCC_CFG_REG3_MCC_SWITCHE2_SHIFT    (2U)
#define SCC_CFG_REG3_MCC_SWITCHE2_WIDTH    (1U)
#define SCC_CFG_REG3_MCC_SWITCHE2_MASK     (0x4)

/* Extract MCC_SWITCHE2 field from register value */
#define SCC_CFG_REG3_MCC_SWITCHE2_GET(reg_val) \
    (((reg_val) & SCC_CFG_REG3_MCC_SWITCHE2_MASK) >> SCC_CFG_REG3_MCC_SWITCHE2_SHIFT)

/* Insert MCC_SWITCHE2 field into register value */
#define SCC_CFG_REG3_MCC_SWITCHE2_SET(reg_val, field_val) \
    (((reg_val) & ~SCC_CFG_REG3_MCC_SWITCHE2_MASK) | \
     (((field_val) << SCC_CFG_REG3_MCC_SWITCHE2_SHIFT) & SCC_CFG_REG3_MCC_SWITCHE2_MASK))

/* Field: MCC_SWITCHE1
 * MCC SWITCHES: 0 = OFF 1 = ON
 */
#define SCC_CFG_REG3_MCC_SWITCHE1_SHIFT    (1U)
#define SCC_CFG_REG3_MCC_SWITCHE1_WIDTH    (1U)
#define SCC_CFG_REG3_MCC_SWITCHE1_MASK     (0x2)

/* Extract MCC_SWITCHE1 field from register value */
#define SCC_CFG_REG3_MCC_SWITCHE1_GET(reg_val) \
    (((reg_val) & SCC_CFG_REG3_MCC_SWITCHE1_MASK) >> SCC_CFG_REG3_MCC_SWITCHE1_SHIFT)

/* Insert MCC_SWITCHE1 field into register value */
#define SCC_CFG_REG3_MCC_SWITCHE1_SET(reg_val, field_val) \
    (((reg_val) & ~SCC_CFG_REG3_MCC_SWITCHE1_MASK) | \
     (((field_val) << SCC_CFG_REG3_MCC_SWITCHE1_SHIFT) & SCC_CFG_REG3_MCC_SWITCHE1_MASK))

/* Field: MCC_SWITCHE0
 * MCC SWITCHES: 0 = OFF 1 = ON
 */
#define SCC_CFG_REG3_MCC_SWITCHE0_SHIFT    (0U)
#define SCC_CFG_REG3_MCC_SWITCHE0_WIDTH    (1U)
#define SCC_CFG_REG3_MCC_SWITCHE0_MASK     (0x1)

/* Extract MCC_SWITCHE0 field from register value */
#define SCC_CFG_REG3_MCC_SWITCHE0_GET(reg_val) \
    (((reg_val) & SCC_CFG_REG3_MCC_SWITCHE0_MASK) >> SCC_CFG_REG3_MCC_SWITCHE0_SHIFT)

/* Insert MCC_SWITCHE0 field into register value */
#define SCC_CFG_REG3_MCC_SWITCHE0_SET(reg_val, field_val) \
    (((reg_val) & ~SCC_CFG_REG3_MCC_SWITCHE0_MASK) | \
     (((field_val) << SCC_CFG_REG3_MCC_SWITCHE0_SHIFT) & SCC_CFG_REG3_MCC_SWITCHE0_MASK))

/* ----------------------------------------------------------------------------
 * CFG_REG4: No description
 * ----------------------------------------------------------------------------
 */

/* Field: BRDREV
 * Board Revision
 */
#define SCC_CFG_REG4_BRDREV_SHIFT    (0U)
#define SCC_CFG_REG4_BRDREV_WIDTH    (4U)
#define SCC_CFG_REG4_BRDREV_MASK     (0xf)

/* Extract BRDREV field from register value */
#define SCC_CFG_REG4_BRDREV_GET(reg_val) \
    (((reg_val) & SCC_CFG_REG4_BRDREV_MASK) >> SCC_CFG_REG4_BRDREV_SHIFT)

/* Insert BRDREV field into register value */
#define SCC_CFG_REG4_BRDREV_SET(reg_val, field_val) \
    (((reg_val) & ~SCC_CFG_REG4_BRDREV_MASK) | \
     (((field_val) << SCC_CFG_REG4_BRDREV_SHIFT) & SCC_CFG_REG4_BRDREV_MASK))

/* ----------------------------------------------------------------------------
 * CFG_REG5: No description
 * ----------------------------------------------------------------------------
 */

/* Field: DEBUG
 * Debug: 0 = Serial Wire Debug 1 = JTAG
 */
#define SCC_CFG_REG5_DEBUG_SHIFT    (5U)
#define SCC_CFG_REG5_DEBUG_WIDTH    (1U)
#define SCC_CFG_REG5_DEBUG_MASK     (0x20)

/* Extract DEBUG field from register value */
#define SCC_CFG_REG5_DEBUG_GET(reg_val) \
    (((reg_val) & SCC_CFG_REG5_DEBUG_MASK) >> SCC_CFG_REG5_DEBUG_SHIFT)

/* Insert DEBUG field into register value */
#define SCC_CFG_REG5_DEBUG_SET(reg_val, field_val) \
    (((reg_val) & ~SCC_CFG_REG5_DEBUG_MASK) | \
     (((field_val) << SCC_CFG_REG5_DEBUG_SHIFT) & SCC_CFG_REG5_DEBUG_MASK))

/* ----------------------------------------------------------------------------
 * SYS_CFGCTRL: No description
 * ----------------------------------------------------------------------------
 */

/* Field: START
 * Start: generates interrupt on write to this bit
 */
#define SCC_SYS_CFGCTRL_START_SHIFT    (31U)
#define SCC_SYS_CFGCTRL_START_WIDTH    (1U)
#define SCC_SYS_CFGCTRL_START_MASK     (0x80000000)

/* Extract START field from register value */
#define SCC_SYS_CFGCTRL_START_GET(reg_val) \
    (((reg_val) & SCC_SYS_CFGCTRL_START_MASK) >> SCC_SYS_CFGCTRL_START_SHIFT)

/* Insert START field into register value */
#define SCC_SYS_CFGCTRL_START_SET(reg_val, field_val) \
    (((reg_val) & ~SCC_SYS_CFGCTRL_START_MASK) | \
     (((field_val) << SCC_SYS_CFGCTRL_START_SHIFT) & SCC_SYS_CFGCTRL_START_MASK))

/* Field: RW_ACCESS
 * Read/Write Access
 */
#define SCC_SYS_CFGCTRL_RW_ACCESS_SHIFT    (30U)
#define SCC_SYS_CFGCTRL_RW_ACCESS_WIDTH    (1U)
#define SCC_SYS_CFGCTRL_RW_ACCESS_MASK     (0x40000000)

/* Extract RW_ACCESS field from register value */
#define SCC_SYS_CFGCTRL_RW_ACCESS_GET(reg_val) \
    (((reg_val) & SCC_SYS_CFGCTRL_RW_ACCESS_MASK) >> SCC_SYS_CFGCTRL_RW_ACCESS_SHIFT)

/* Insert RW_ACCESS field into register value */
#define SCC_SYS_CFGCTRL_RW_ACCESS_SET(reg_val, field_val) \
    (((reg_val) & ~SCC_SYS_CFGCTRL_RW_ACCESS_MASK) | \
     (((field_val) << SCC_SYS_CFGCTRL_RW_ACCESS_SHIFT) & SCC_SYS_CFGCTRL_RW_ACCESS_MASK))

/* Field: RFUNCVAL
 * Function Value
 */
#define SCC_SYS_CFGCTRL_RFUNCVAL_SHIFT    (20U)
#define SCC_SYS_CFGCTRL_RFUNCVAL_WIDTH    (6U)
#define SCC_SYS_CFGCTRL_RFUNCVAL_MASK     (0x3f00000)

/* Extract RFUNCVAL field from register value */
#define SCC_SYS_CFGCTRL_RFUNCVAL_GET(reg_val) \
    (((reg_val) & SCC_SYS_CFGCTRL_RFUNCVAL_MASK) >> SCC_SYS_CFGCTRL_RFUNCVAL_SHIFT)

/* Insert RFUNCVAL field into register value */
#define SCC_SYS_CFGCTRL_RFUNCVAL_SET(reg_val, field_val) \
    (((reg_val) & ~SCC_SYS_CFGCTRL_RFUNCVAL_MASK) | \
     (((field_val) << SCC_SYS_CFGCTRL_RFUNCVAL_SHIFT) & SCC_SYS_CFGCTRL_RFUNCVAL_MASK))

/* Field: DEVICE
 * Device (value of 0/1/2 for supported clocks
 */
#define SCC_SYS_CFGCTRL_DEVICE_SHIFT    (0U)
#define SCC_SYS_CFGCTRL_DEVICE_WIDTH    (12U)
#define SCC_SYS_CFGCTRL_DEVICE_MASK     (0xfff)

/* Extract DEVICE field from register value */
#define SCC_SYS_CFGCTRL_DEVICE_GET(reg_val) \
    (((reg_val) & SCC_SYS_CFGCTRL_DEVICE_MASK) >> SCC_SYS_CFGCTRL_DEVICE_SHIFT)

/* Insert DEVICE field into register value */
#define SCC_SYS_CFGCTRL_DEVICE_SET(reg_val, field_val) \
    (((reg_val) & ~SCC_SYS_CFGCTRL_DEVICE_MASK) | \
     (((field_val) << SCC_SYS_CFGCTRL_DEVICE_SHIFT) & SCC_SYS_CFGCTRL_DEVICE_MASK))

/* ----------------------------------------------------------------------------
 * SYS_CFGSTAT: No description
 * ----------------------------------------------------------------------------
 */

/* Field: ERROR
 * Error Flag
 */
#define SCC_SYS_CFGSTAT_ERROR_SHIFT    (1U)
#define SCC_SYS_CFGSTAT_ERROR_WIDTH    (1U)
#define SCC_SYS_CFGSTAT_ERROR_MASK     (0x2)

/* Extract ERROR field from register value */
#define SCC_SYS_CFGSTAT_ERROR_GET(reg_val) \
    (((reg_val) & SCC_SYS_CFGSTAT_ERROR_MASK) >> SCC_SYS_CFGSTAT_ERROR_SHIFT)

/* Insert ERROR field into register value */
#define SCC_SYS_CFGSTAT_ERROR_SET(reg_val, field_val) \
    (((reg_val) & ~SCC_SYS_CFGSTAT_ERROR_MASK) | \
     (((field_val) << SCC_SYS_CFGSTAT_ERROR_SHIFT) & SCC_SYS_CFGSTAT_ERROR_MASK))

/* Field: COMPLETE
 * Complete Flag
 */
#define SCC_SYS_CFGSTAT_COMPLETE_SHIFT    (0U)
#define SCC_SYS_CFGSTAT_COMPLETE_WIDTH    (1U)
#define SCC_SYS_CFGSTAT_COMPLETE_MASK     (0x1)

/* Extract COMPLETE field from register value */
#define SCC_SYS_CFGSTAT_COMPLETE_GET(reg_val) \
    (((reg_val) & SCC_SYS_CFGSTAT_COMPLETE_MASK) >> SCC_SYS_CFGSTAT_COMPLETE_SHIFT)

/* Insert COMPLETE field into register value */
#define SCC_SYS_CFGSTAT_COMPLETE_SET(reg_val, field_val) \
    (((reg_val) & ~SCC_SYS_CFGSTAT_COMPLETE_MASK) | \
     (((field_val) << SCC_SYS_CFGSTAT_COMPLETE_SHIFT) & SCC_SYS_CFGSTAT_COMPLETE_MASK))

/* ----------------------------------------------------------------------------
 * DLL: DLL Lock Register
 * ----------------------------------------------------------------------------
 */

/* Field: LOCKED_MASKED
 * Error Flag
 */
#define SCC_DLL_LOCKED_MASKED_SHIFT    (24U)
#define SCC_DLL_LOCKED_MASKED_WIDTH    (8U)
#define SCC_DLL_LOCKED_MASKED_MASK     (0xff000000)

/* Extract LOCKED_MASKED field from register value */
#define SCC_DLL_LOCKED_MASKED_GET(reg_val) \
    (((reg_val) & SCC_DLL_LOCKED_MASKED_MASK) >> SCC_DLL_LOCKED_MASKED_SHIFT)

/* Insert LOCKED_MASKED field into register value */
#define SCC_DLL_LOCKED_MASKED_SET(reg_val, field_val) \
    (((reg_val) & ~SCC_DLL_LOCKED_MASKED_MASK) | \
     (((field_val) << SCC_DLL_LOCKED_MASKED_SHIFT) & SCC_DLL_LOCKED_MASKED_MASK))

/* Field: LOCK_UNLOCK
 * Complete Flag
 */
#define SCC_DLL_LOCK_UNLOCK_SHIFT    (16U)
#define SCC_DLL_LOCK_UNLOCK_WIDTH    (8U)
#define SCC_DLL_LOCK_UNLOCK_MASK     (0xff0000)

/* Extract LOCK_UNLOCK field from register value */
#define SCC_DLL_LOCK_UNLOCK_GET(reg_val) \
    (((reg_val) & SCC_DLL_LOCK_UNLOCK_MASK) >> SCC_DLL_LOCK_UNLOCK_SHIFT)

/* Insert LOCK_UNLOCK field into register value */
#define SCC_DLL_LOCK_UNLOCK_SET(reg_val, field_val) \
    (((reg_val) & ~SCC_DLL_LOCK_UNLOCK_MASK) | \
     (((field_val) << SCC_DLL_LOCK_UNLOCK_SHIFT) & SCC_DLL_LOCK_UNLOCK_MASK))

/* Field: LOCKED
 * Complete Flag
 */
#define SCC_DLL_LOCKED_SHIFT    (0U)
#define SCC_DLL_LOCKED_WIDTH    (1U)
#define SCC_DLL_LOCKED_MASK     (0x1)

/* Extract LOCKED field from register value */
#define SCC_DLL_LOCKED_GET(reg_val) \
    (((reg_val) & SCC_DLL_LOCKED_MASK) >> SCC_DLL_LOCKED_SHIFT)

/* Insert LOCKED field into register value */
#define SCC_DLL_LOCKED_SET(reg_val, field_val) \
    (((reg_val) & ~SCC_DLL_LOCKED_MASK) | \
     (((field_val) << SCC_DLL_LOCKED_SHIFT) & SCC_DLL_LOCKED_MASK))

/* ----------------------------------------------------------------------------
 * AID: No description
 * ----------------------------------------------------------------------------
 */

/* Field: FPGA_BUILD
 * FPGA Build Number
 */
#define SCC_AID_FPGA_BUILD_SHIFT    (24U)
#define SCC_AID_FPGA_BUILD_WIDTH    (8U)
#define SCC_AID_FPGA_BUILD_MASK     (0xff000000)

/* Extract FPGA_BUILD field from register value */
#define SCC_AID_FPGA_BUILD_GET(reg_val) \
    (((reg_val) & SCC_AID_FPGA_BUILD_MASK) >> SCC_AID_FPGA_BUILD_SHIFT)

/* Insert FPGA_BUILD field into register value */
#define SCC_AID_FPGA_BUILD_SET(reg_val, field_val) \
    (((reg_val) & ~SCC_AID_FPGA_BUILD_MASK) | \
     (((field_val) << SCC_AID_FPGA_BUILD_SHIFT) & SCC_AID_FPGA_BUILD_MASK))

/* Field: MPS2_REV
 * V2M-MPS2 target Board Revision (A=0,B=1,C=2)
 */
#define SCC_AID_MPS2_REV_SHIFT    (20U)
#define SCC_AID_MPS2_REV_WIDTH    (4U)
#define SCC_AID_MPS2_REV_MASK     (0xf00000)

/* Extract MPS2_REV field from register value */
#define SCC_AID_MPS2_REV_GET(reg_val) \
    (((reg_val) & SCC_AID_MPS2_REV_MASK) >> SCC_AID_MPS2_REV_SHIFT)

/* Insert MPS2_REV field into register value */
#define SCC_AID_MPS2_REV_SET(reg_val, field_val) \
    (((reg_val) & ~SCC_AID_MPS2_REV_MASK) | \
     (((field_val) << SCC_AID_MPS2_REV_SHIFT) & SCC_AID_MPS2_REV_MASK))

/* Field: NUM_CFG_REG
 * Number of SCC configuration register
 */
#define SCC_AID_NUM_CFG_REG_SHIFT    (0U)
#define SCC_AID_NUM_CFG_REG_WIDTH    (8U)
#define SCC_AID_NUM_CFG_REG_MASK     (0xff)

/* Extract NUM_CFG_REG field from register value */
#define SCC_AID_NUM_CFG_REG_GET(reg_val) \
    (((reg_val) & SCC_AID_NUM_CFG_REG_MASK) >> SCC_AID_NUM_CFG_REG_SHIFT)

/* Insert NUM_CFG_REG field into register value */
#define SCC_AID_NUM_CFG_REG_SET(reg_val, field_val) \
    (((reg_val) & ~SCC_AID_NUM_CFG_REG_MASK) | \
     (((field_val) << SCC_AID_NUM_CFG_REG_SHIFT) & SCC_AID_NUM_CFG_REG_MASK))

/* ----------------------------------------------------------------------------
 * ID: No description
 * ----------------------------------------------------------------------------
 */

/* Field: IMPLEMENTER_ID
 * Implementer ID: 0x41 = ARM
 */
#define SCC_ID_IMPLEMENTER_ID_SHIFT    (24U)
#define SCC_ID_IMPLEMENTER_ID_WIDTH    (8U)
#define SCC_ID_IMPLEMENTER_ID_MASK     (0xff000000)

/* Extract IMPLEMENTER_ID field from register value */
#define SCC_ID_IMPLEMENTER_ID_GET(reg_val) \
    (((reg_val) & SCC_ID_IMPLEMENTER_ID_MASK) >> SCC_ID_IMPLEMENTER_ID_SHIFT)

/* Insert IMPLEMENTER_ID field into register value */
#define SCC_ID_IMPLEMENTER_ID_SET(reg_val, field_val) \
    (((reg_val) & ~SCC_ID_IMPLEMENTER_ID_MASK) | \
     (((field_val) << SCC_ID_IMPLEMENTER_ID_SHIFT) & SCC_ID_IMPLEMENTER_ID_MASK))

/* Field: APP_NOTE_VAR
 * Application note IP variant number
 */
#define SCC_ID_APP_NOTE_VAR_SHIFT    (20U)
#define SCC_ID_APP_NOTE_VAR_WIDTH    (4U)
#define SCC_ID_APP_NOTE_VAR_MASK     (0xf00000)

/* Extract APP_NOTE_VAR field from register value */
#define SCC_ID_APP_NOTE_VAR_GET(reg_val) \
    (((reg_val) & SCC_ID_APP_NOTE_VAR_MASK) >> SCC_ID_APP_NOTE_VAR_SHIFT)

/* Insert APP_NOTE_VAR field into register value */
#define SCC_ID_APP_NOTE_VAR_SET(reg_val, field_val) \
    (((reg_val) & ~SCC_ID_APP_NOTE_VAR_MASK) | \
     (((field_val) << SCC_ID_APP_NOTE_VAR_SHIFT) & SCC_ID_APP_NOTE_VAR_MASK))

/* Field: IP_ARCH
 * IP Architecture: 0x4 = AHB
 */
#define SCC_ID_IP_ARCH_SHIFT    (16U)
#define SCC_ID_IP_ARCH_WIDTH    (4U)
#define SCC_ID_IP_ARCH_MASK     (0xf0000)

/* Extract IP_ARCH field from register value */
#define SCC_ID_IP_ARCH_GET(reg_val) \
    (((reg_val) & SCC_ID_IP_ARCH_MASK) >> SCC_ID_IP_ARCH_SHIFT)

/* Insert IP_ARCH field into register value */
#define SCC_ID_IP_ARCH_SET(reg_val, field_val) \
    (((reg_val) & ~SCC_ID_IP_ARCH_MASK) | \
     (((field_val) << SCC_ID_IP_ARCH_SHIFT) & SCC_ID_IP_ARCH_MASK))

/* Field: PRI_NUM
 * Primary Part Number: 383 = AN383
 */
#define SCC_ID_PRI_NUM_SHIFT    (4U)
#define SCC_ID_PRI_NUM_WIDTH    (8U)
#define SCC_ID_PRI_NUM_MASK     (0xff0)

/* Extract PRI_NUM field from register value */
#define SCC_ID_PRI_NUM_GET(reg_val) \
    (((reg_val) & SCC_ID_PRI_NUM_MASK) >> SCC_ID_PRI_NUM_SHIFT)

/* Insert PRI_NUM field into register value */
#define SCC_ID_PRI_NUM_SET(reg_val, field_val) \
    (((reg_val) & ~SCC_ID_PRI_NUM_MASK) | \
     (((field_val) << SCC_ID_PRI_NUM_SHIFT) & SCC_ID_PRI_NUM_MASK))

/* Field: APP_REV
 * Application note IP revision number
 */
#define SCC_ID_APP_REV_SHIFT    (0U)
#define SCC_ID_APP_REV_WIDTH    (4U)
#define SCC_ID_APP_REV_MASK     (0xf)

/* Extract APP_REV field from register value */
#define SCC_ID_APP_REV_GET(reg_val) \
    (((reg_val) & SCC_ID_APP_REV_MASK) >> SCC_ID_APP_REV_SHIFT)

/* Insert APP_REV field into register value */
#define SCC_ID_APP_REV_SET(reg_val, field_val) \
    (((reg_val) & ~SCC_ID_APP_REV_MASK) | \
     (((field_val) << SCC_ID_APP_REV_SHIFT) & SCC_ID_APP_REV_MASK))

#endif /* SCC_REGS_H */