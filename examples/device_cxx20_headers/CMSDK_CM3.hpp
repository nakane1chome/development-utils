/*
   Device base addresss and IRQ definitions for device CMSDK_CM3.
   Generated from SVD File: CMSDK_CM3.svd.
   SPDX-License-Identifier: Unlicense
*/
#ifndef CMSDK_CM3_DEV_HPP
#define CMSDK_CM3_DEV_HPP

#include <stdint.h>

namespace base_addr {

    namespace CMSDK_CM3 {
           static constexpr uintptr_t                    TIMER0 = 0x40000000;
           static constexpr uintptr_t                    TIMER1 = 0x40001000;
           static constexpr uintptr_t                 DUALTIMER = 0x40002000;
           static constexpr uintptr_t                     UART0 = 0x40004000;
           static constexpr uintptr_t                     UART1 = 0x40005000;
           static constexpr uintptr_t                     UART2 = 0x40006000;
           static constexpr uintptr_t                     UART3 = 0x40007000;
           static constexpr uintptr_t                     UART4 = 0x40009000;
           static constexpr uintptr_t                     GPIO0 = 0x40010000;
           static constexpr uintptr_t                     GPIO1 = 0x40011000;
           static constexpr uintptr_t                       SPI = 0x40027000;
           static constexpr uintptr_t                       WDT = 0x40008000;
           static constexpr uintptr_t                    FPGAIO = 0x40028000;
           static constexpr uintptr_t                       SCC = 0x4002f000;
    }

}

namespace irq {

    namespace CMSDK_CM3 {
           static constexpr int             TIMER0_TIMER0 = 0x008;
           static constexpr int             TIMER1_TIMER1 = 0x009;
           static constexpr int       DUALTIMER_DUALTIMER = 0x00a;
           static constexpr int            UART0_UART0_RX = 0x000;
           static constexpr int            UART1_UART1_RX = 0x002;
           static constexpr int            UART2_UART2_RX = 0x004;
           static constexpr int            UART3_UART3_RX = 0x012;
           static constexpr int            UART4_UART4_RX = 0x014;
           static constexpr int               GPIO0_GPIO0 = 0x006;
           static constexpr int               GPIO1_GPIO1 = 0x007;
           static constexpr int                   SPI_SPI = 0x00b;
           static constexpr int                   WDT_WDT = 0x000;
    }
}

#endif // CMSDK_CM3_DEV_HPP