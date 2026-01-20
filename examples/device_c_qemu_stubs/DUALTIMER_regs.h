/*
 * Register definitions for DUALTIMER.
 * Generated from SVD file: CMSDK_CM3.svd.
 * SPDX-License-Identifier: MIT
 *
 * DO NOT EDIT - This file is auto-generated.
 */

#ifndef DUALTIMER_REGS_H
#define DUALTIMER_REGS_H

#include <stdint.h>
#include "svd_reg_macros.h"

/*
 * Peripheral: DUALTIMER
 * Dual Timer
 */

/* ============================================================================
 * Register Offsets
 * ============================================================================
 */

#define DUALTIMER_TIMER1LOAD_OFFSET    (0x0000)
#define DUALTIMER_TIMER1VALUE_OFFSET    (0x0004)
#define DUALTIMER_TIMER1CONTROL_OFFSET    (0x0008)
#define DUALTIMER_TIMER1INTCLR_OFFSET    (0x000C)
#define DUALTIMER_TIMER1RIS_OFFSET    (0x0010)
#define DUALTIMER_TIMER1MIS_OFFSET    (0x0014)
#define DUALTIMER_TIMER1BGLOAD_OFFSET    (0x0018)
#define DUALTIMER_TIMER2LOAD_OFFSET    (0x0020)
#define DUALTIMER_TIMER2VALUE_OFFSET    (0x0024)
#define DUALTIMER_TIMER2CONTROL_OFFSET    (0x0028)
#define DUALTIMER_TIMER2INTCLR_OFFSET    (0x002C)
#define DUALTIMER_TIMER2RIS_OFFSET    (0x0030)
#define DUALTIMER_TIMER2MIS_OFFSET    (0x0034)
#define DUALTIMER_TIMER2BGLOAD_OFFSET    (0x0038)

/* ============================================================================
 * Register Reset Values
 * ============================================================================
 */

#define DUALTIMER_TIMER1LOAD_RESET    (0x00000000U)
#define DUALTIMER_TIMER1VALUE_RESET    (0xFFFFFFFFU)
#define DUALTIMER_TIMER1CONTROL_RESET    (0x00000020U)
#define DUALTIMER_TIMER1INTCLR_RESET    (0x00000000U)
#define DUALTIMER_TIMER1RIS_RESET    (0x00000000U)
#define DUALTIMER_TIMER1MIS_RESET    (0x00000000U)
#define DUALTIMER_TIMER1BGLOAD_RESET    (0x00000000U)
#define DUALTIMER_TIMER2LOAD_RESET    (0x00000000U)
#define DUALTIMER_TIMER2VALUE_RESET    (0xFFFFFFFFU)
#define DUALTIMER_TIMER2CONTROL_RESET    (0x00000020U)
#define DUALTIMER_TIMER2INTCLR_RESET    (0x00000000U)
#define DUALTIMER_TIMER2RIS_RESET    (0x00000000U)
#define DUALTIMER_TIMER2MIS_RESET    (0x00000000U)
#define DUALTIMER_TIMER2BGLOAD_RESET    (0x00000000U)

/* ============================================================================
 * Register Defined Masks (which bits are implemented)
 * ============================================================================
 */

#define DUALTIMER_TIMER1LOAD_MASK    (0xFFFFFFFFU)
#define DUALTIMER_TIMER1VALUE_MASK    (0xFFFFFFFFU)
#define DUALTIMER_TIMER1CONTROL_MASK    (0x1 | 0x2 | 0xc | 0x20 | 0x40 | 0x80)
#define DUALTIMER_TIMER1INTCLR_MASK    (0x1)
#define DUALTIMER_TIMER1RIS_MASK    (0x1)
#define DUALTIMER_TIMER1MIS_MASK    (0x1)
#define DUALTIMER_TIMER1BGLOAD_MASK    (0xFFFFFFFFU)
#define DUALTIMER_TIMER2LOAD_MASK    (0xFFFFFFFFU)
#define DUALTIMER_TIMER2VALUE_MASK    (0xFFFFFFFFU)
#define DUALTIMER_TIMER2CONTROL_MASK    (0x1 | 0x2 | 0xc | 0x20 | 0x40 | 0x80)
#define DUALTIMER_TIMER2INTCLR_MASK    (0x1)
#define DUALTIMER_TIMER2RIS_MASK    (0x1)
#define DUALTIMER_TIMER2MIS_MASK    (0x1)
#define DUALTIMER_TIMER2BGLOAD_MASK    (0xFFFFFFFFU)

/* ============================================================================
 * Register Access Modes
 * ============================================================================
 */

#define DUALTIMER_TIMER1LOAD_ACCESS    SVD_ACCESS_RW
#define DUALTIMER_TIMER1VALUE_ACCESS    SVD_ACCESS_RO
#define DUALTIMER_TIMER1CONTROL_ACCESS    SVD_ACCESS_RW
#define DUALTIMER_TIMER1INTCLR_ACCESS    SVD_ACCESS_WO
#define DUALTIMER_TIMER1RIS_ACCESS    SVD_ACCESS_RO
#define DUALTIMER_TIMER1MIS_ACCESS    SVD_ACCESS_RO
#define DUALTIMER_TIMER1BGLOAD_ACCESS    SVD_ACCESS_RW
#define DUALTIMER_TIMER2LOAD_ACCESS    SVD_ACCESS_RW
#define DUALTIMER_TIMER2VALUE_ACCESS    SVD_ACCESS_RO
#define DUALTIMER_TIMER2CONTROL_ACCESS    SVD_ACCESS_RW
#define DUALTIMER_TIMER2INTCLR_ACCESS    SVD_ACCESS_WO
#define DUALTIMER_TIMER2RIS_ACCESS    SVD_ACCESS_RO
#define DUALTIMER_TIMER2MIS_ACCESS    SVD_ACCESS_RO
#define DUALTIMER_TIMER2BGLOAD_ACCESS    SVD_ACCESS_RW

/* ============================================================================
 * Field Definitions
 * ============================================================================
 */


/* ----------------------------------------------------------------------------
 * TIMER1CONTROL: Timer 1 Control Register
 * ----------------------------------------------------------------------------
 */

/* Field: OneShotCount
 * Selects one-shot or wrapping counter mode.
 */
#define DUALTIMER_TIMER1CONTROL_ONESHOTCOUNT_SHIFT    (0U)
#define DUALTIMER_TIMER1CONTROL_ONESHOTCOUNT_WIDTH    (1U)
#define DUALTIMER_TIMER1CONTROL_ONESHOTCOUNT_MASK     (0x1)

/* Extract OneShotCount field from register value */
#define DUALTIMER_TIMER1CONTROL_ONESHOTCOUNT_GET(reg_val) \
    (((reg_val) & DUALTIMER_TIMER1CONTROL_ONESHOTCOUNT_MASK) >> DUALTIMER_TIMER1CONTROL_ONESHOTCOUNT_SHIFT)

/* Insert OneShotCount field into register value */
#define DUALTIMER_TIMER1CONTROL_ONESHOTCOUNT_SET(reg_val, field_val) \
    (((reg_val) & ~DUALTIMER_TIMER1CONTROL_ONESHOTCOUNT_MASK) | \
     (((field_val) << DUALTIMER_TIMER1CONTROL_ONESHOTCOUNT_SHIFT) & DUALTIMER_TIMER1CONTROL_ONESHOTCOUNT_MASK))

/* Field: TimerSize
 * Selects 16-bit or 32- bit counter operation.
 */
#define DUALTIMER_TIMER1CONTROL_TIMERSIZE_SHIFT    (1U)
#define DUALTIMER_TIMER1CONTROL_TIMERSIZE_WIDTH    (1U)
#define DUALTIMER_TIMER1CONTROL_TIMERSIZE_MASK     (0x2)

/* Extract TimerSize field from register value */
#define DUALTIMER_TIMER1CONTROL_TIMERSIZE_GET(reg_val) \
    (((reg_val) & DUALTIMER_TIMER1CONTROL_TIMERSIZE_MASK) >> DUALTIMER_TIMER1CONTROL_TIMERSIZE_SHIFT)

/* Insert TimerSize field into register value */
#define DUALTIMER_TIMER1CONTROL_TIMERSIZE_SET(reg_val, field_val) \
    (((reg_val) & ~DUALTIMER_TIMER1CONTROL_TIMERSIZE_MASK) | \
     (((field_val) << DUALTIMER_TIMER1CONTROL_TIMERSIZE_SHIFT) & DUALTIMER_TIMER1CONTROL_TIMERSIZE_MASK))

/* Field: TimerPre
 * Timer prescale bits.
 */
#define DUALTIMER_TIMER1CONTROL_TIMERPRE_SHIFT    (2U)
#define DUALTIMER_TIMER1CONTROL_TIMERPRE_WIDTH    (2U)
#define DUALTIMER_TIMER1CONTROL_TIMERPRE_MASK     (0xc)

/* Extract TimerPre field from register value */
#define DUALTIMER_TIMER1CONTROL_TIMERPRE_GET(reg_val) \
    (((reg_val) & DUALTIMER_TIMER1CONTROL_TIMERPRE_MASK) >> DUALTIMER_TIMER1CONTROL_TIMERPRE_SHIFT)

/* Insert TimerPre field into register value */
#define DUALTIMER_TIMER1CONTROL_TIMERPRE_SET(reg_val, field_val) \
    (((reg_val) & ~DUALTIMER_TIMER1CONTROL_TIMERPRE_MASK) | \
     (((field_val) << DUALTIMER_TIMER1CONTROL_TIMERPRE_SHIFT) & DUALTIMER_TIMER1CONTROL_TIMERPRE_MASK))

/* Field: InterruptEnable
 * Interrupt Enable bit.
 */
#define DUALTIMER_TIMER1CONTROL_INTERRUPTENABLE_SHIFT    (5U)
#define DUALTIMER_TIMER1CONTROL_INTERRUPTENABLE_WIDTH    (1U)
#define DUALTIMER_TIMER1CONTROL_INTERRUPTENABLE_MASK     (0x20)

/* Extract InterruptEnable field from register value */
#define DUALTIMER_TIMER1CONTROL_INTERRUPTENABLE_GET(reg_val) \
    (((reg_val) & DUALTIMER_TIMER1CONTROL_INTERRUPTENABLE_MASK) >> DUALTIMER_TIMER1CONTROL_INTERRUPTENABLE_SHIFT)

/* Insert InterruptEnable field into register value */
#define DUALTIMER_TIMER1CONTROL_INTERRUPTENABLE_SET(reg_val, field_val) \
    (((reg_val) & ~DUALTIMER_TIMER1CONTROL_INTERRUPTENABLE_MASK) | \
     (((field_val) << DUALTIMER_TIMER1CONTROL_INTERRUPTENABLE_SHIFT) & DUALTIMER_TIMER1CONTROL_INTERRUPTENABLE_MASK))

/* Field: TimerMode
 * Timer Mode bit.
 */
#define DUALTIMER_TIMER1CONTROL_TIMERMODE_SHIFT    (6U)
#define DUALTIMER_TIMER1CONTROL_TIMERMODE_WIDTH    (1U)
#define DUALTIMER_TIMER1CONTROL_TIMERMODE_MASK     (0x40)

/* Extract TimerMode field from register value */
#define DUALTIMER_TIMER1CONTROL_TIMERMODE_GET(reg_val) \
    (((reg_val) & DUALTIMER_TIMER1CONTROL_TIMERMODE_MASK) >> DUALTIMER_TIMER1CONTROL_TIMERMODE_SHIFT)

/* Insert TimerMode field into register value */
#define DUALTIMER_TIMER1CONTROL_TIMERMODE_SET(reg_val, field_val) \
    (((reg_val) & ~DUALTIMER_TIMER1CONTROL_TIMERMODE_MASK) | \
     (((field_val) << DUALTIMER_TIMER1CONTROL_TIMERMODE_SHIFT) & DUALTIMER_TIMER1CONTROL_TIMERMODE_MASK))

/* Field: TimerEnable
 * Timer Enable Enable bit.
 */
#define DUALTIMER_TIMER1CONTROL_TIMERENABLE_SHIFT    (7U)
#define DUALTIMER_TIMER1CONTROL_TIMERENABLE_WIDTH    (1U)
#define DUALTIMER_TIMER1CONTROL_TIMERENABLE_MASK     (0x80)

/* Extract TimerEnable field from register value */
#define DUALTIMER_TIMER1CONTROL_TIMERENABLE_GET(reg_val) \
    (((reg_val) & DUALTIMER_TIMER1CONTROL_TIMERENABLE_MASK) >> DUALTIMER_TIMER1CONTROL_TIMERENABLE_SHIFT)

/* Insert TimerEnable field into register value */
#define DUALTIMER_TIMER1CONTROL_TIMERENABLE_SET(reg_val, field_val) \
    (((reg_val) & ~DUALTIMER_TIMER1CONTROL_TIMERENABLE_MASK) | \
     (((field_val) << DUALTIMER_TIMER1CONTROL_TIMERENABLE_SHIFT) & DUALTIMER_TIMER1CONTROL_TIMERENABLE_MASK))

/* ----------------------------------------------------------------------------
 * TIMER1INTCLR: Timer 1 Interrupt Clear Register
 * ----------------------------------------------------------------------------
 */

/* Field: INT
 * Interrupt
 */
#define DUALTIMER_TIMER1INTCLR_INT_SHIFT    (0U)
#define DUALTIMER_TIMER1INTCLR_INT_WIDTH    (1U)
#define DUALTIMER_TIMER1INTCLR_INT_MASK     (0x1)

/* Extract INT field from register value */
#define DUALTIMER_TIMER1INTCLR_INT_GET(reg_val) \
    (((reg_val) & DUALTIMER_TIMER1INTCLR_INT_MASK) >> DUALTIMER_TIMER1INTCLR_INT_SHIFT)

/* Insert INT field into register value */
#define DUALTIMER_TIMER1INTCLR_INT_SET(reg_val, field_val) \
    (((reg_val) & ~DUALTIMER_TIMER1INTCLR_INT_MASK) | \
     (((field_val) << DUALTIMER_TIMER1INTCLR_INT_SHIFT) & DUALTIMER_TIMER1INTCLR_INT_MASK))

/* ----------------------------------------------------------------------------
 * TIMER1RIS: Timer 1 Raw Interrupt Status Register
 * ----------------------------------------------------------------------------
 */

/* Field: RIS
 * Raw Timer Interrupt
 */
#define DUALTIMER_TIMER1RIS_RIS_SHIFT    (0U)
#define DUALTIMER_TIMER1RIS_RIS_WIDTH    (1U)
#define DUALTIMER_TIMER1RIS_RIS_MASK     (0x1)

/* Extract RIS field from register value */
#define DUALTIMER_TIMER1RIS_RIS_GET(reg_val) \
    (((reg_val) & DUALTIMER_TIMER1RIS_RIS_MASK) >> DUALTIMER_TIMER1RIS_RIS_SHIFT)

/* Insert RIS field into register value */
#define DUALTIMER_TIMER1RIS_RIS_SET(reg_val, field_val) \
    (((reg_val) & ~DUALTIMER_TIMER1RIS_RIS_MASK) | \
     (((field_val) << DUALTIMER_TIMER1RIS_RIS_SHIFT) & DUALTIMER_TIMER1RIS_RIS_MASK))

/* ----------------------------------------------------------------------------
 * TIMER1MIS: Timer 1 Mask Interrupt Status Register
 * ----------------------------------------------------------------------------
 */

/* Field: MIS
 * Masked Timer Interrupt
 */
#define DUALTIMER_TIMER1MIS_MIS_SHIFT    (0U)
#define DUALTIMER_TIMER1MIS_MIS_WIDTH    (1U)
#define DUALTIMER_TIMER1MIS_MIS_MASK     (0x1)

/* Extract MIS field from register value */
#define DUALTIMER_TIMER1MIS_MIS_GET(reg_val) \
    (((reg_val) & DUALTIMER_TIMER1MIS_MIS_MASK) >> DUALTIMER_TIMER1MIS_MIS_SHIFT)

/* Insert MIS field into register value */
#define DUALTIMER_TIMER1MIS_MIS_SET(reg_val, field_val) \
    (((reg_val) & ~DUALTIMER_TIMER1MIS_MIS_MASK) | \
     (((field_val) << DUALTIMER_TIMER1MIS_MIS_SHIFT) & DUALTIMER_TIMER1MIS_MIS_MASK))

/* ----------------------------------------------------------------------------
 * TIMER2CONTROL: Timer 2 Control Register
 * ----------------------------------------------------------------------------
 */

/* Field: OneShotCount
 * Selects one-shot or wrapping counter mode.
 */
#define DUALTIMER_TIMER2CONTROL_ONESHOTCOUNT_SHIFT    (0U)
#define DUALTIMER_TIMER2CONTROL_ONESHOTCOUNT_WIDTH    (1U)
#define DUALTIMER_TIMER2CONTROL_ONESHOTCOUNT_MASK     (0x1)

/* Extract OneShotCount field from register value */
#define DUALTIMER_TIMER2CONTROL_ONESHOTCOUNT_GET(reg_val) \
    (((reg_val) & DUALTIMER_TIMER2CONTROL_ONESHOTCOUNT_MASK) >> DUALTIMER_TIMER2CONTROL_ONESHOTCOUNT_SHIFT)

/* Insert OneShotCount field into register value */
#define DUALTIMER_TIMER2CONTROL_ONESHOTCOUNT_SET(reg_val, field_val) \
    (((reg_val) & ~DUALTIMER_TIMER2CONTROL_ONESHOTCOUNT_MASK) | \
     (((field_val) << DUALTIMER_TIMER2CONTROL_ONESHOTCOUNT_SHIFT) & DUALTIMER_TIMER2CONTROL_ONESHOTCOUNT_MASK))

/* Field: TimerSize
 * Selects 16-bit or 32- bit counter operation.
 */
#define DUALTIMER_TIMER2CONTROL_TIMERSIZE_SHIFT    (1U)
#define DUALTIMER_TIMER2CONTROL_TIMERSIZE_WIDTH    (1U)
#define DUALTIMER_TIMER2CONTROL_TIMERSIZE_MASK     (0x2)

/* Extract TimerSize field from register value */
#define DUALTIMER_TIMER2CONTROL_TIMERSIZE_GET(reg_val) \
    (((reg_val) & DUALTIMER_TIMER2CONTROL_TIMERSIZE_MASK) >> DUALTIMER_TIMER2CONTROL_TIMERSIZE_SHIFT)

/* Insert TimerSize field into register value */
#define DUALTIMER_TIMER2CONTROL_TIMERSIZE_SET(reg_val, field_val) \
    (((reg_val) & ~DUALTIMER_TIMER2CONTROL_TIMERSIZE_MASK) | \
     (((field_val) << DUALTIMER_TIMER2CONTROL_TIMERSIZE_SHIFT) & DUALTIMER_TIMER2CONTROL_TIMERSIZE_MASK))

/* Field: TimerPre
 * Timer prescale bits.
 */
#define DUALTIMER_TIMER2CONTROL_TIMERPRE_SHIFT    (2U)
#define DUALTIMER_TIMER2CONTROL_TIMERPRE_WIDTH    (2U)
#define DUALTIMER_TIMER2CONTROL_TIMERPRE_MASK     (0xc)

/* Extract TimerPre field from register value */
#define DUALTIMER_TIMER2CONTROL_TIMERPRE_GET(reg_val) \
    (((reg_val) & DUALTIMER_TIMER2CONTROL_TIMERPRE_MASK) >> DUALTIMER_TIMER2CONTROL_TIMERPRE_SHIFT)

/* Insert TimerPre field into register value */
#define DUALTIMER_TIMER2CONTROL_TIMERPRE_SET(reg_val, field_val) \
    (((reg_val) & ~DUALTIMER_TIMER2CONTROL_TIMERPRE_MASK) | \
     (((field_val) << DUALTIMER_TIMER2CONTROL_TIMERPRE_SHIFT) & DUALTIMER_TIMER2CONTROL_TIMERPRE_MASK))

/* Field: InterruptEnable
 * Interrupt Enable bit.
 */
#define DUALTIMER_TIMER2CONTROL_INTERRUPTENABLE_SHIFT    (5U)
#define DUALTIMER_TIMER2CONTROL_INTERRUPTENABLE_WIDTH    (1U)
#define DUALTIMER_TIMER2CONTROL_INTERRUPTENABLE_MASK     (0x20)

/* Extract InterruptEnable field from register value */
#define DUALTIMER_TIMER2CONTROL_INTERRUPTENABLE_GET(reg_val) \
    (((reg_val) & DUALTIMER_TIMER2CONTROL_INTERRUPTENABLE_MASK) >> DUALTIMER_TIMER2CONTROL_INTERRUPTENABLE_SHIFT)

/* Insert InterruptEnable field into register value */
#define DUALTIMER_TIMER2CONTROL_INTERRUPTENABLE_SET(reg_val, field_val) \
    (((reg_val) & ~DUALTIMER_TIMER2CONTROL_INTERRUPTENABLE_MASK) | \
     (((field_val) << DUALTIMER_TIMER2CONTROL_INTERRUPTENABLE_SHIFT) & DUALTIMER_TIMER2CONTROL_INTERRUPTENABLE_MASK))

/* Field: TimerMode
 * Timer Mode bit.
 */
#define DUALTIMER_TIMER2CONTROL_TIMERMODE_SHIFT    (6U)
#define DUALTIMER_TIMER2CONTROL_TIMERMODE_WIDTH    (1U)
#define DUALTIMER_TIMER2CONTROL_TIMERMODE_MASK     (0x40)

/* Extract TimerMode field from register value */
#define DUALTIMER_TIMER2CONTROL_TIMERMODE_GET(reg_val) \
    (((reg_val) & DUALTIMER_TIMER2CONTROL_TIMERMODE_MASK) >> DUALTIMER_TIMER2CONTROL_TIMERMODE_SHIFT)

/* Insert TimerMode field into register value */
#define DUALTIMER_TIMER2CONTROL_TIMERMODE_SET(reg_val, field_val) \
    (((reg_val) & ~DUALTIMER_TIMER2CONTROL_TIMERMODE_MASK) | \
     (((field_val) << DUALTIMER_TIMER2CONTROL_TIMERMODE_SHIFT) & DUALTIMER_TIMER2CONTROL_TIMERMODE_MASK))

/* Field: TimerEnable
 * Timer Enable Enable bit.
 */
#define DUALTIMER_TIMER2CONTROL_TIMERENABLE_SHIFT    (7U)
#define DUALTIMER_TIMER2CONTROL_TIMERENABLE_WIDTH    (1U)
#define DUALTIMER_TIMER2CONTROL_TIMERENABLE_MASK     (0x80)

/* Extract TimerEnable field from register value */
#define DUALTIMER_TIMER2CONTROL_TIMERENABLE_GET(reg_val) \
    (((reg_val) & DUALTIMER_TIMER2CONTROL_TIMERENABLE_MASK) >> DUALTIMER_TIMER2CONTROL_TIMERENABLE_SHIFT)

/* Insert TimerEnable field into register value */
#define DUALTIMER_TIMER2CONTROL_TIMERENABLE_SET(reg_val, field_val) \
    (((reg_val) & ~DUALTIMER_TIMER2CONTROL_TIMERENABLE_MASK) | \
     (((field_val) << DUALTIMER_TIMER2CONTROL_TIMERENABLE_SHIFT) & DUALTIMER_TIMER2CONTROL_TIMERENABLE_MASK))

/* ----------------------------------------------------------------------------
 * TIMER2INTCLR: Timer 2 Interrupt Clear Register
 * ----------------------------------------------------------------------------
 */

/* Field: INT
 * Interrupt
 */
#define DUALTIMER_TIMER2INTCLR_INT_SHIFT    (0U)
#define DUALTIMER_TIMER2INTCLR_INT_WIDTH    (1U)
#define DUALTIMER_TIMER2INTCLR_INT_MASK     (0x1)

/* Extract INT field from register value */
#define DUALTIMER_TIMER2INTCLR_INT_GET(reg_val) \
    (((reg_val) & DUALTIMER_TIMER2INTCLR_INT_MASK) >> DUALTIMER_TIMER2INTCLR_INT_SHIFT)

/* Insert INT field into register value */
#define DUALTIMER_TIMER2INTCLR_INT_SET(reg_val, field_val) \
    (((reg_val) & ~DUALTIMER_TIMER2INTCLR_INT_MASK) | \
     (((field_val) << DUALTIMER_TIMER2INTCLR_INT_SHIFT) & DUALTIMER_TIMER2INTCLR_INT_MASK))

/* ----------------------------------------------------------------------------
 * TIMER2RIS: Timer 2 Raw Interrupt Status Register
 * ----------------------------------------------------------------------------
 */

/* Field: RIS
 * Raw Timer Interrupt
 */
#define DUALTIMER_TIMER2RIS_RIS_SHIFT    (0U)
#define DUALTIMER_TIMER2RIS_RIS_WIDTH    (1U)
#define DUALTIMER_TIMER2RIS_RIS_MASK     (0x1)

/* Extract RIS field from register value */
#define DUALTIMER_TIMER2RIS_RIS_GET(reg_val) \
    (((reg_val) & DUALTIMER_TIMER2RIS_RIS_MASK) >> DUALTIMER_TIMER2RIS_RIS_SHIFT)

/* Insert RIS field into register value */
#define DUALTIMER_TIMER2RIS_RIS_SET(reg_val, field_val) \
    (((reg_val) & ~DUALTIMER_TIMER2RIS_RIS_MASK) | \
     (((field_val) << DUALTIMER_TIMER2RIS_RIS_SHIFT) & DUALTIMER_TIMER2RIS_RIS_MASK))

/* ----------------------------------------------------------------------------
 * TIMER2MIS: Timer 2 Mask Interrupt Status Register
 * ----------------------------------------------------------------------------
 */

/* Field: MIS
 * Masked Timer Interrupt
 */
#define DUALTIMER_TIMER2MIS_MIS_SHIFT    (0U)
#define DUALTIMER_TIMER2MIS_MIS_WIDTH    (1U)
#define DUALTIMER_TIMER2MIS_MIS_MASK     (0x1)

/* Extract MIS field from register value */
#define DUALTIMER_TIMER2MIS_MIS_GET(reg_val) \
    (((reg_val) & DUALTIMER_TIMER2MIS_MIS_MASK) >> DUALTIMER_TIMER2MIS_MIS_SHIFT)

/* Insert MIS field into register value */
#define DUALTIMER_TIMER2MIS_MIS_SET(reg_val, field_val) \
    (((reg_val) & ~DUALTIMER_TIMER2MIS_MIS_MASK) | \
     (((field_val) << DUALTIMER_TIMER2MIS_MIS_SHIFT) & DUALTIMER_TIMER2MIS_MIS_MASK))

#endif /* DUALTIMER_REGS_H */