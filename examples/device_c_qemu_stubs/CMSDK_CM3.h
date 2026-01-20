/*
 * Device base addresses and IRQ definitions for CMSDK_CM3.
 * Generated from SVD file: CMSDK_CM3.svd.
 * SPDX-License-Identifier: MIT
 *
 * DO NOT EDIT - This file is auto-generated.
 */

#ifndef CMSDK_CM3_DEVICE_H
#define CMSDK_CM3_DEVICE_H

#include <stdint.h>

/*
 * Device: CMSDK_CM3
 * ARM 32-bit Cortex-M3 based device
 */

/* ----------------------------------------------------------------------------
 * Peripheral Base Addresses
 * ----------------------------------------------------------------------------
 */

#define CMSDK_CM3_TIMER0_BASE    (0x40000000ULL)
#define CMSDK_CM3_TIMER1_BASE    (0x40001000ULL)
#define CMSDK_CM3_DUALTIMER_BASE    (0x40002000ULL)
#define CMSDK_CM3_UART0_BASE    (0x40004000ULL)
#define CMSDK_CM3_UART1_BASE    (0x40005000ULL)
#define CMSDK_CM3_UART2_BASE    (0x40006000ULL)
#define CMSDK_CM3_UART3_BASE    (0x40007000ULL)
#define CMSDK_CM3_UART4_BASE    (0x40009000ULL)
#define CMSDK_CM3_GPIO0_BASE    (0x40010000ULL)
#define CMSDK_CM3_GPIO1_BASE    (0x40011000ULL)
#define CMSDK_CM3_SPI_BASE    (0x40027000ULL)
#define CMSDK_CM3_WDT_BASE    (0x40008000ULL)
#define CMSDK_CM3_FPGAIO_BASE    (0x40028000ULL)
#define CMSDK_CM3_SCC_BASE    (0x4002F000ULL)

/* ----------------------------------------------------------------------------
 * Interrupt Numbers
 * ----------------------------------------------------------------------------
 */
#define CMSDK_CM3_TIMER0_TIMER0_IRQ    (8)
#define CMSDK_CM3_TIMER1_TIMER1_IRQ    (9)
#define CMSDK_CM3_DUALTIMER_DUALTIMER_IRQ    (10)
#define CMSDK_CM3_UART0_UART0_RX_IRQ    (0)
#define CMSDK_CM3_UART1_UART1_RX_IRQ    (2)
#define CMSDK_CM3_UART2_UART2_RX_IRQ    (4)
#define CMSDK_CM3_UART3_UART3_RX_IRQ    (18)
#define CMSDK_CM3_UART4_UART4_RX_IRQ    (20)
#define CMSDK_CM3_GPIO0_GPIO0_IRQ    (6)
#define CMSDK_CM3_GPIO1_GPIO1_IRQ    (7)
#define CMSDK_CM3_SPI_SPI_IRQ    (11)
#define CMSDK_CM3_WDT_WDT_IRQ    (0)

#endif /* CMSDK_CM3_DEVICE_H */