/*
   Register class and field definition for peripheral UART4.
   SPDX-License-Identifier: Unlicense
*/

#ifndef UART4_MMIO_REGS_HPP
#define UART4_MMIO_REGS_HPP

#include <cstdint>
#include "mmio_device.hpp"
#include "UART4_mmio_param.hpp"

namespace mmio_regs {
    /* UART 0 */
    namespace UART4 {
        /* Recieve and Transmit Data Value */
        template<const std::uintptr_t BASE_ADDR> class DATA 
            : public mmio_device::reg<BASE_ADDR, 
                                mmio_param::UART4::DATA_r> {
        }; /* DATA */
        /* UART Status Register */
        template<const std::uintptr_t BASE_ADDR> class STATE 
            : public mmio_device::reg<BASE_ADDR, 
                                mmio_param::UART4::STATE_r> {
            public:
            /* RX Buffer Overun (write 1 to clear) */
            mmio_device::reg_field<BASE_ADDR, 
                             mmio_param::UART4::STATE_r,
                             mmio_param::UART4::STATE::RXOV_f> RXOV;
            /* TX Buffer Overun (write 1 to clear) */
            mmio_device::reg_field<BASE_ADDR, 
                             mmio_param::UART4::STATE_r,
                             mmio_param::UART4::STATE::TXOV_f> TXOV;
            /* RX Buffer Full */
            mmio_device::reg_field<BASE_ADDR, 
                             mmio_param::UART4::STATE_r,
                             mmio_param::UART4::STATE::RXBF_f> RXBF;
            /* TX Buffer Full */
            mmio_device::reg_field<BASE_ADDR, 
                             mmio_param::UART4::STATE_r,
                             mmio_param::UART4::STATE::TXBF_f> TXBF;
        }; /* STATE */
        /* UART Control Register */
        template<const std::uintptr_t BASE_ADDR> class CTRL 
            : public mmio_device::reg<BASE_ADDR, 
                                mmio_param::UART4::CTRL_r> {
            public:
            /* High Speed Test Mode for TX only */
            mmio_device::reg_field<BASE_ADDR, 
                             mmio_param::UART4::CTRL_r,
                             mmio_param::UART4::CTRL::HSTX_f> HSTX;
            /* RX Overrun Interrupt Enable */
            mmio_device::reg_field<BASE_ADDR, 
                             mmio_param::UART4::CTRL_r,
                             mmio_param::UART4::CTRL::RVOVINT_f> RVOVINT;
            /* TX Overrun Interrupt Enable */
            mmio_device::reg_field<BASE_ADDR, 
                             mmio_param::UART4::CTRL_r,
                             mmio_param::UART4::CTRL::TXOVINT_f> TXOVINT;
            /* RX Interrupt Enable */
            mmio_device::reg_field<BASE_ADDR, 
                             mmio_param::UART4::CTRL_r,
                             mmio_param::UART4::CTRL::RXINT_f> RXINT;
            /* TX Interrupt Enable */
            mmio_device::reg_field<BASE_ADDR, 
                             mmio_param::UART4::CTRL_r,
                             mmio_param::UART4::CTRL::TXINT_f> TXINT;
            /* RX Enable */
            mmio_device::reg_field<BASE_ADDR, 
                             mmio_param::UART4::CTRL_r,
                             mmio_param::UART4::CTRL::RXEN_f> RXEN;
            /* TX Enable */
            mmio_device::reg_field<BASE_ADDR, 
                             mmio_param::UART4::CTRL_r,
                             mmio_param::UART4::CTRL::TXEN_f> TXEN;
        }; /* CTRL */
        /* UART Interrupt Status Register */
        template<const std::uintptr_t BASE_ADDR> class INTSTATUS 
            : public mmio_device::reg<BASE_ADDR, 
                                mmio_param::UART4::INTSTATUS_r> {
            public:
            /* RX Overrun Interrupt */
            mmio_device::reg_field<BASE_ADDR, 
                             mmio_param::UART4::INTSTATUS_r,
                             mmio_param::UART4::INTSTATUS::RXOV_f> RXOV;
            /* TX Overrun Interrupt */
            mmio_device::reg_field<BASE_ADDR, 
                             mmio_param::UART4::INTSTATUS_r,
                             mmio_param::UART4::INTSTATUS::TXOV_f> TXOV;
            /* RX Interrupt */
            mmio_device::reg_field<BASE_ADDR, 
                             mmio_param::UART4::INTSTATUS_r,
                             mmio_param::UART4::INTSTATUS::RXINT_f> RXINT;
            /* TX Interrupt */
            mmio_device::reg_field<BASE_ADDR, 
                             mmio_param::UART4::INTSTATUS_r,
                             mmio_param::UART4::INTSTATUS::TXINT_f> TXINT;
        }; /* INTSTATUS */
        /* UART Interrupt CLEAR Register */
        template<const std::uintptr_t BASE_ADDR> class INTCLEAR 
            : public mmio_device::reg<BASE_ADDR, 
                                mmio_param::UART4::INTCLEAR_r> {
            public:
            /* RX Overrun Interrupt */
            mmio_device::reg_field<BASE_ADDR, 
                             mmio_param::UART4::INTCLEAR_r,
                             mmio_param::UART4::INTCLEAR::RXOV_f> RXOV;
            /* TX Overrun Interrupt */
            mmio_device::reg_field<BASE_ADDR, 
                             mmio_param::UART4::INTCLEAR_r,
                             mmio_param::UART4::INTCLEAR::TXOV_f> TXOV;
            /* RX Interrupt */
            mmio_device::reg_field<BASE_ADDR, 
                             mmio_param::UART4::INTCLEAR_r,
                             mmio_param::UART4::INTCLEAR::RXINT_f> RXINT;
            /* TX Interrupt */
            mmio_device::reg_field<BASE_ADDR, 
                             mmio_param::UART4::INTCLEAR_r,
                             mmio_param::UART4::INTCLEAR::TXINT_f> TXINT;
        }; /* INTCLEAR */
        /* Baudrate Divider */
        template<const std::uintptr_t BASE_ADDR> class BAUDDIV 
            : public mmio_device::reg<BASE_ADDR, 
                                mmio_param::UART4::BAUDDIV_r> {
        }; /* BAUDDIV */
    } /* UART4 */
} /* mmio_regs */

#endif // UART4_DEV_HPP