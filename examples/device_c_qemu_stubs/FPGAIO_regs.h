/*
 * Register definitions for FPGAIO.
 * Generated from SVD file: CMSDK_CM3.svd.
 * SPDX-License-Identifier: MIT
 *
 * DO NOT EDIT - This file is auto-generated.
 */

#ifndef FPGAIO_REGS_H
#define FPGAIO_REGS_H

#include <stdint.h>
#include "svd_reg_macros.h"

/*
 * Peripheral: FPGAIO
 * FPGA System Control I/O
 */

/* ============================================================================
 * Register Offsets
 * ============================================================================
 */

#define FPGAIO_LED_OFFSET    (0x0000)
#define FPGAIO_BUTTON_OFFSET    (0x0008)
#define FPGAIO_CLK1HZ_OFFSET    (0x0010)
#define FPGAIO_CLK100HZ_OFFSET    (0x0014)
#define FPGAIO_COUNTER_OFFSET    (0x0018)
#define FPGAIO_PRESCALER_OFFSET    (0x001C)
#define FPGAIO_PSCNTR_OFFSET    (0x0020)
#define FPGAIO_MISC_OFFSET    (0x004C)

/* ============================================================================
 * Register Reset Values
 * ============================================================================
 */

#define FPGAIO_LED_RESET    (0x00000000U)
#define FPGAIO_BUTTON_RESET    (0x00000000U)
#define FPGAIO_CLK1HZ_RESET    (0x00000000U)
#define FPGAIO_CLK100HZ_RESET    (0x00000000U)
#define FPGAIO_COUNTER_RESET    (0x00000000U)
#define FPGAIO_PRESCALER_RESET    (0x00000000U)
#define FPGAIO_PSCNTR_RESET    (0x00000000U)
#define FPGAIO_MISC_RESET    (0x00000000U)

/* ============================================================================
 * Register Defined Masks (which bits are implemented)
 * ============================================================================
 */

#define FPGAIO_LED_MASK    (0x1 | 0x2)
#define FPGAIO_BUTTON_MASK    (0x1 | 0x2)
#define FPGAIO_CLK1HZ_MASK    (0xFFFFFFFFU)
#define FPGAIO_CLK100HZ_MASK    (0xFFFFFFFFU)
#define FPGAIO_COUNTER_MASK    (0xFFFFFFFFU)
#define FPGAIO_PRESCALER_MASK    (0xFFFFFFFFU)
#define FPGAIO_PSCNTR_MASK    (0xFFFFFFFFU)
#define FPGAIO_MISC_MASK    (0x200 | 0x100 | 0x80 | 0x40 | 0x20 | 0x10 | 0x8 | 0x2 | 0x1)

/* ============================================================================
 * Register Access Modes
 * ============================================================================
 */

#define FPGAIO_LED_ACCESS    SVD_ACCESS_RW
#define FPGAIO_BUTTON_ACCESS    SVD_ACCESS_RW
#define FPGAIO_CLK1HZ_ACCESS    SVD_ACCESS_RO
#define FPGAIO_CLK100HZ_ACCESS    SVD_ACCESS_RO
#define FPGAIO_COUNTER_ACCESS    SVD_ACCESS_RW
#define FPGAIO_PRESCALER_ACCESS    SVD_ACCESS_RW
#define FPGAIO_PSCNTR_ACCESS    SVD_ACCESS_RW
#define FPGAIO_MISC_ACCESS    SVD_ACCESS_RW

/* ============================================================================
 * Field Definitions
 * ============================================================================
 */


/* ----------------------------------------------------------------------------
 * LED: LED Connections
 * ----------------------------------------------------------------------------
 */

/* Field: LED0
 * No description
 */
#define FPGAIO_LED_LED0_SHIFT    (0U)
#define FPGAIO_LED_LED0_WIDTH    (1U)
#define FPGAIO_LED_LED0_MASK     (0x1)

/* Extract LED0 field from register value */
#define FPGAIO_LED_LED0_GET(reg_val) \
    (((reg_val) & FPGAIO_LED_LED0_MASK) >> FPGAIO_LED_LED0_SHIFT)

/* Insert LED0 field into register value */
#define FPGAIO_LED_LED0_SET(reg_val, field_val) \
    (((reg_val) & ~FPGAIO_LED_LED0_MASK) | \
     (((field_val) << FPGAIO_LED_LED0_SHIFT) & FPGAIO_LED_LED0_MASK))

/* Field: LED1
 * No description
 */
#define FPGAIO_LED_LED1_SHIFT    (1U)
#define FPGAIO_LED_LED1_WIDTH    (1U)
#define FPGAIO_LED_LED1_MASK     (0x2)

/* Extract LED1 field from register value */
#define FPGAIO_LED_LED1_GET(reg_val) \
    (((reg_val) & FPGAIO_LED_LED1_MASK) >> FPGAIO_LED_LED1_SHIFT)

/* Insert LED1 field into register value */
#define FPGAIO_LED_LED1_SET(reg_val, field_val) \
    (((reg_val) & ~FPGAIO_LED_LED1_MASK) | \
     (((field_val) << FPGAIO_LED_LED1_SHIFT) & FPGAIO_LED_LED1_MASK))

/* ----------------------------------------------------------------------------
 * BUTTON: Button Connections
 * ----------------------------------------------------------------------------
 */

/* Field: BUTTON0
 * No description
 */
#define FPGAIO_BUTTON_BUTTON0_SHIFT    (0U)
#define FPGAIO_BUTTON_BUTTON0_WIDTH    (1U)
#define FPGAIO_BUTTON_BUTTON0_MASK     (0x1)

/* Extract BUTTON0 field from register value */
#define FPGAIO_BUTTON_BUTTON0_GET(reg_val) \
    (((reg_val) & FPGAIO_BUTTON_BUTTON0_MASK) >> FPGAIO_BUTTON_BUTTON0_SHIFT)

/* Insert BUTTON0 field into register value */
#define FPGAIO_BUTTON_BUTTON0_SET(reg_val, field_val) \
    (((reg_val) & ~FPGAIO_BUTTON_BUTTON0_MASK) | \
     (((field_val) << FPGAIO_BUTTON_BUTTON0_SHIFT) & FPGAIO_BUTTON_BUTTON0_MASK))

/* Field: BUTTON1
 * No description
 */
#define FPGAIO_BUTTON_BUTTON1_SHIFT    (1U)
#define FPGAIO_BUTTON_BUTTON1_WIDTH    (1U)
#define FPGAIO_BUTTON_BUTTON1_MASK     (0x2)

/* Extract BUTTON1 field from register value */
#define FPGAIO_BUTTON_BUTTON1_GET(reg_val) \
    (((reg_val) & FPGAIO_BUTTON_BUTTON1_MASK) >> FPGAIO_BUTTON_BUTTON1_SHIFT)

/* Insert BUTTON1 field into register value */
#define FPGAIO_BUTTON_BUTTON1_SET(reg_val, field_val) \
    (((reg_val) & ~FPGAIO_BUTTON_BUTTON1_MASK) | \
     (((field_val) << FPGAIO_BUTTON_BUTTON1_SHIFT) & FPGAIO_BUTTON_BUTTON1_MASK))

/* ----------------------------------------------------------------------------
 * MISC: Misc. Control
 * ----------------------------------------------------------------------------
 */

/* Field: SHIELD1_SPI_nCS
 * No description
 */
#define FPGAIO_MISC_SHIELD1_SPI_NCS_SHIFT    (9U)
#define FPGAIO_MISC_SHIELD1_SPI_NCS_WIDTH    (1U)
#define FPGAIO_MISC_SHIELD1_SPI_NCS_MASK     (0x200)

/* Extract SHIELD1_SPI_nCS field from register value */
#define FPGAIO_MISC_SHIELD1_SPI_NCS_GET(reg_val) \
    (((reg_val) & FPGAIO_MISC_SHIELD1_SPI_NCS_MASK) >> FPGAIO_MISC_SHIELD1_SPI_NCS_SHIFT)

/* Insert SHIELD1_SPI_nCS field into register value */
#define FPGAIO_MISC_SHIELD1_SPI_NCS_SET(reg_val, field_val) \
    (((reg_val) & ~FPGAIO_MISC_SHIELD1_SPI_NCS_MASK) | \
     (((field_val) << FPGAIO_MISC_SHIELD1_SPI_NCS_SHIFT) & FPGAIO_MISC_SHIELD1_SPI_NCS_MASK))

/* Field: SHIELD0_SPI_nCS
 * No description
 */
#define FPGAIO_MISC_SHIELD0_SPI_NCS_SHIFT    (8U)
#define FPGAIO_MISC_SHIELD0_SPI_NCS_WIDTH    (1U)
#define FPGAIO_MISC_SHIELD0_SPI_NCS_MASK     (0x100)

/* Extract SHIELD0_SPI_nCS field from register value */
#define FPGAIO_MISC_SHIELD0_SPI_NCS_GET(reg_val) \
    (((reg_val) & FPGAIO_MISC_SHIELD0_SPI_NCS_MASK) >> FPGAIO_MISC_SHIELD0_SPI_NCS_SHIFT)

/* Insert SHIELD0_SPI_nCS field into register value */
#define FPGAIO_MISC_SHIELD0_SPI_NCS_SET(reg_val, field_val) \
    (((reg_val) & ~FPGAIO_MISC_SHIELD0_SPI_NCS_MASK) | \
     (((field_val) << FPGAIO_MISC_SHIELD0_SPI_NCS_SHIFT) & FPGAIO_MISC_SHIELD0_SPI_NCS_MASK))

/* Field: ADC_SPI_nCS
 * No description
 */
#define FPGAIO_MISC_ADC_SPI_NCS_SHIFT    (7U)
#define FPGAIO_MISC_ADC_SPI_NCS_WIDTH    (1U)
#define FPGAIO_MISC_ADC_SPI_NCS_MASK     (0x80)

/* Extract ADC_SPI_nCS field from register value */
#define FPGAIO_MISC_ADC_SPI_NCS_GET(reg_val) \
    (((reg_val) & FPGAIO_MISC_ADC_SPI_NCS_MASK) >> FPGAIO_MISC_ADC_SPI_NCS_SHIFT)

/* Insert ADC_SPI_nCS field into register value */
#define FPGAIO_MISC_ADC_SPI_NCS_SET(reg_val, field_val) \
    (((reg_val) & ~FPGAIO_MISC_ADC_SPI_NCS_MASK) | \
     (((field_val) << FPGAIO_MISC_ADC_SPI_NCS_SHIFT) & FPGAIO_MISC_ADC_SPI_NCS_MASK))

/* Field: CLCD_BL_CTRL
 * No description
 */
#define FPGAIO_MISC_CLCD_BL_CTRL_SHIFT    (6U)
#define FPGAIO_MISC_CLCD_BL_CTRL_WIDTH    (1U)
#define FPGAIO_MISC_CLCD_BL_CTRL_MASK     (0x40)

/* Extract CLCD_BL_CTRL field from register value */
#define FPGAIO_MISC_CLCD_BL_CTRL_GET(reg_val) \
    (((reg_val) & FPGAIO_MISC_CLCD_BL_CTRL_MASK) >> FPGAIO_MISC_CLCD_BL_CTRL_SHIFT)

/* Insert CLCD_BL_CTRL field into register value */
#define FPGAIO_MISC_CLCD_BL_CTRL_SET(reg_val, field_val) \
    (((reg_val) & ~FPGAIO_MISC_CLCD_BL_CTRL_MASK) | \
     (((field_val) << FPGAIO_MISC_CLCD_BL_CTRL_SHIFT) & FPGAIO_MISC_CLCD_BL_CTRL_MASK))

/* Field: CLCD_RD
 * No description
 */
#define FPGAIO_MISC_CLCD_RD_SHIFT    (5U)
#define FPGAIO_MISC_CLCD_RD_WIDTH    (1U)
#define FPGAIO_MISC_CLCD_RD_MASK     (0x20)

/* Extract CLCD_RD field from register value */
#define FPGAIO_MISC_CLCD_RD_GET(reg_val) \
    (((reg_val) & FPGAIO_MISC_CLCD_RD_MASK) >> FPGAIO_MISC_CLCD_RD_SHIFT)

/* Insert CLCD_RD field into register value */
#define FPGAIO_MISC_CLCD_RD_SET(reg_val, field_val) \
    (((reg_val) & ~FPGAIO_MISC_CLCD_RD_MASK) | \
     (((field_val) << FPGAIO_MISC_CLCD_RD_SHIFT) & FPGAIO_MISC_CLCD_RD_MASK))

/* Field: CLCD_RS
 * No description
 */
#define FPGAIO_MISC_CLCD_RS_SHIFT    (4U)
#define FPGAIO_MISC_CLCD_RS_WIDTH    (1U)
#define FPGAIO_MISC_CLCD_RS_MASK     (0x10)

/* Extract CLCD_RS field from register value */
#define FPGAIO_MISC_CLCD_RS_GET(reg_val) \
    (((reg_val) & FPGAIO_MISC_CLCD_RS_MASK) >> FPGAIO_MISC_CLCD_RS_SHIFT)

/* Insert CLCD_RS field into register value */
#define FPGAIO_MISC_CLCD_RS_SET(reg_val, field_val) \
    (((reg_val) & ~FPGAIO_MISC_CLCD_RS_MASK) | \
     (((field_val) << FPGAIO_MISC_CLCD_RS_SHIFT) & FPGAIO_MISC_CLCD_RS_MASK))

/* Field: CLCD_RESET
 * No description
 */
#define FPGAIO_MISC_CLCD_RESET_SHIFT    (3U)
#define FPGAIO_MISC_CLCD_RESET_WIDTH    (1U)
#define FPGAIO_MISC_CLCD_RESET_MASK     (0x8)

/* Extract CLCD_RESET field from register value */
#define FPGAIO_MISC_CLCD_RESET_GET(reg_val) \
    (((reg_val) & FPGAIO_MISC_CLCD_RESET_MASK) >> FPGAIO_MISC_CLCD_RESET_SHIFT)

/* Insert CLCD_RESET field into register value */
#define FPGAIO_MISC_CLCD_RESET_SET(reg_val, field_val) \
    (((reg_val) & ~FPGAIO_MISC_CLCD_RESET_MASK) | \
     (((field_val) << FPGAIO_MISC_CLCD_RESET_SHIFT) & FPGAIO_MISC_CLCD_RESET_MASK))

/* Field: SPI_nSS
 * No description
 */
#define FPGAIO_MISC_SPI_NSS_SHIFT    (1U)
#define FPGAIO_MISC_SPI_NSS_WIDTH    (1U)
#define FPGAIO_MISC_SPI_NSS_MASK     (0x2)

/* Extract SPI_nSS field from register value */
#define FPGAIO_MISC_SPI_NSS_GET(reg_val) \
    (((reg_val) & FPGAIO_MISC_SPI_NSS_MASK) >> FPGAIO_MISC_SPI_NSS_SHIFT)

/* Insert SPI_nSS field into register value */
#define FPGAIO_MISC_SPI_NSS_SET(reg_val, field_val) \
    (((reg_val) & ~FPGAIO_MISC_SPI_NSS_MASK) | \
     (((field_val) << FPGAIO_MISC_SPI_NSS_SHIFT) & FPGAIO_MISC_SPI_NSS_MASK))

/* Field: CLCD_CS
 * No description
 */
#define FPGAIO_MISC_CLCD_CS_SHIFT    (0U)
#define FPGAIO_MISC_CLCD_CS_WIDTH    (1U)
#define FPGAIO_MISC_CLCD_CS_MASK     (0x1)

/* Extract CLCD_CS field from register value */
#define FPGAIO_MISC_CLCD_CS_GET(reg_val) \
    (((reg_val) & FPGAIO_MISC_CLCD_CS_MASK) >> FPGAIO_MISC_CLCD_CS_SHIFT)

/* Insert CLCD_CS field into register value */
#define FPGAIO_MISC_CLCD_CS_SET(reg_val, field_val) \
    (((reg_val) & ~FPGAIO_MISC_CLCD_CS_MASK) | \
     (((field_val) << FPGAIO_MISC_CLCD_CS_SHIFT) & FPGAIO_MISC_CLCD_CS_MASK))

#endif /* FPGAIO_REGS_H */