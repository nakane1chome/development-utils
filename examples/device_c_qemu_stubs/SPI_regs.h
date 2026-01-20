/*
 * Register definitions for SPI.
 * Generated from SVD file: CMSDK_CM3.svd.
 * SPDX-License-Identifier: MIT
 *
 * DO NOT EDIT - This file is auto-generated.
 */

#ifndef SPI_REGS_H
#define SPI_REGS_H

#include <stdint.h>
#include "svd_reg_macros.h"

/*
 * Peripheral: SPI
 * SPI
 */

/* ============================================================================
 * Register Offsets
 * ============================================================================
 */

#define SPI_SPSTAT_OFFSET    (0x0000)
#define SPI_SPDAT_OFFSET    (0x0002)
#define SPI_SPCLK_OFFSET    (0x0004)
#define SPI_SPCON_OFFSET    (0x0006)

/* ============================================================================
 * Register Reset Values
 * ============================================================================
 */

#define SPI_SPSTAT_RESET    (0x0000U)
#define SPI_SPDAT_RESET    (0x0000U)
#define SPI_SPCLK_RESET    (0x0000U)
#define SPI_SPCON_RESET    (0x0000U)

/* ============================================================================
 * Register Defined Masks (which bits are implemented)
 * ============================================================================
 */

#define SPI_SPSTAT_MASK    (0xFFFFU)
#define SPI_SPDAT_MASK    (0xFFFFU)
#define SPI_SPCLK_MASK    (0xFFFFU)
#define SPI_SPCON_MASK    (0x1 | 0x2 | 0x4 | 0x8 | 0x10 | 0x20 | 0x40)

/* ============================================================================
 * Register Access Modes
 * ============================================================================
 */

#define SPI_SPSTAT_ACCESS    SVD_ACCESS_RW
#define SPI_SPDAT_ACCESS    SVD_ACCESS_RW
#define SPI_SPCLK_ACCESS    SVD_ACCESS_RW
#define SPI_SPCON_ACCESS    SVD_ACCESS_RW

/* ============================================================================
 * Field Definitions
 * ============================================================================
 */


/* ----------------------------------------------------------------------------
 * SPCON: SPI Configuration
 * ----------------------------------------------------------------------------
 */

/* Field: SPEN
 * No description
 */
#define SPI_SPCON_SPEN_SHIFT    (0U)
#define SPI_SPCON_SPEN_WIDTH    (1U)
#define SPI_SPCON_SPEN_MASK     (0x1)

/* Extract SPEN field from register value */
#define SPI_SPCON_SPEN_GET(reg_val) \
    (((reg_val) & SPI_SPCON_SPEN_MASK) >> SPI_SPCON_SPEN_SHIFT)

/* Insert SPEN field into register value */
#define SPI_SPCON_SPEN_SET(reg_val, field_val) \
    (((reg_val) & ~SPI_SPCON_SPEN_MASK) | \
     (((field_val) << SPI_SPCON_SPEN_SHIFT) & SPI_SPCON_SPEN_MASK))

/* Field: SSDIS
 * No description
 */
#define SPI_SPCON_SSDIS_SHIFT    (1U)
#define SPI_SPCON_SSDIS_WIDTH    (1U)
#define SPI_SPCON_SSDIS_MASK     (0x2)

/* Extract SSDIS field from register value */
#define SPI_SPCON_SSDIS_GET(reg_val) \
    (((reg_val) & SPI_SPCON_SSDIS_MASK) >> SPI_SPCON_SSDIS_SHIFT)

/* Insert SSDIS field into register value */
#define SPI_SPCON_SSDIS_SET(reg_val, field_val) \
    (((reg_val) & ~SPI_SPCON_SSDIS_MASK) | \
     (((field_val) << SPI_SPCON_SSDIS_SHIFT) & SPI_SPCON_SSDIS_MASK))

/* Field: MSTRS
 * No description
 */
#define SPI_SPCON_MSTRS_SHIFT    (2U)
#define SPI_SPCON_MSTRS_WIDTH    (1U)
#define SPI_SPCON_MSTRS_MASK     (0x4)

/* Extract MSTRS field from register value */
#define SPI_SPCON_MSTRS_GET(reg_val) \
    (((reg_val) & SPI_SPCON_MSTRS_MASK) >> SPI_SPCON_MSTRS_SHIFT)

/* Insert MSTRS field into register value */
#define SPI_SPCON_MSTRS_SET(reg_val, field_val) \
    (((reg_val) & ~SPI_SPCON_MSTRS_MASK) | \
     (((field_val) << SPI_SPCON_MSTRS_SHIFT) & SPI_SPCON_MSTRS_MASK))

/* Field: CPOL
 * No description
 */
#define SPI_SPCON_CPOL_SHIFT    (3U)
#define SPI_SPCON_CPOL_WIDTH    (1U)
#define SPI_SPCON_CPOL_MASK     (0x8)

/* Extract CPOL field from register value */
#define SPI_SPCON_CPOL_GET(reg_val) \
    (((reg_val) & SPI_SPCON_CPOL_MASK) >> SPI_SPCON_CPOL_SHIFT)

/* Insert CPOL field into register value */
#define SPI_SPCON_CPOL_SET(reg_val, field_val) \
    (((reg_val) & ~SPI_SPCON_CPOL_MASK) | \
     (((field_val) << SPI_SPCON_CPOL_SHIFT) & SPI_SPCON_CPOL_MASK))

/* Field: CPHA
 * No description
 */
#define SPI_SPCON_CPHA_SHIFT    (4U)
#define SPI_SPCON_CPHA_WIDTH    (1U)
#define SPI_SPCON_CPHA_MASK     (0x10)

/* Extract CPHA field from register value */
#define SPI_SPCON_CPHA_GET(reg_val) \
    (((reg_val) & SPI_SPCON_CPHA_MASK) >> SPI_SPCON_CPHA_SHIFT)

/* Insert CPHA field into register value */
#define SPI_SPCON_CPHA_SET(reg_val, field_val) \
    (((reg_val) & ~SPI_SPCON_CPHA_MASK) | \
     (((field_val) << SPI_SPCON_CPHA_SHIFT) & SPI_SPCON_CPHA_MASK))

/* Field: SPR1
 * No description
 */
#define SPI_SPCON_SPR1_SHIFT    (5U)
#define SPI_SPCON_SPR1_WIDTH    (1U)
#define SPI_SPCON_SPR1_MASK     (0x20)

/* Extract SPR1 field from register value */
#define SPI_SPCON_SPR1_GET(reg_val) \
    (((reg_val) & SPI_SPCON_SPR1_MASK) >> SPI_SPCON_SPR1_SHIFT)

/* Insert SPR1 field into register value */
#define SPI_SPCON_SPR1_SET(reg_val, field_val) \
    (((reg_val) & ~SPI_SPCON_SPR1_MASK) | \
     (((field_val) << SPI_SPCON_SPR1_SHIFT) & SPI_SPCON_SPR1_MASK))

/* Field: SPR0
 * No description
 */
#define SPI_SPCON_SPR0_SHIFT    (6U)
#define SPI_SPCON_SPR0_WIDTH    (1U)
#define SPI_SPCON_SPR0_MASK     (0x40)

/* Extract SPR0 field from register value */
#define SPI_SPCON_SPR0_GET(reg_val) \
    (((reg_val) & SPI_SPCON_SPR0_MASK) >> SPI_SPCON_SPR0_SHIFT)

/* Insert SPR0 field into register value */
#define SPI_SPCON_SPR0_SET(reg_val, field_val) \
    (((reg_val) & ~SPI_SPCON_SPR0_MASK) | \
     (((field_val) << SPI_SPCON_SPR0_SHIFT) & SPI_SPCON_SPR0_MASK))

#endif /* SPI_REGS_H */