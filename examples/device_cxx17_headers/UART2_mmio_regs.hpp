/*
   Register class and field definition for peripheral UART2.
   SPDX-License-Identifier: Unlicense
*/

#ifndef UART2_MMIO_REGS_HPP
#define UART2_MMIO_REGS_HPP

#include <cstdint>
#include "mmio_device.hpp"
#include "UART2_mmio_param.hpp"

namespace mmio_regs {
    /* UART 0 */
    namespace UART2 {
        /* Recieve and Transmit Data Value */
        template<const std::uintptr_t BASE_ADDR> class DATA
            : public mmio_device::reg<BASE_ADDR,
                                mmio_param::UART2::DATA_r> {
        }; /* DATA */
        /* UART Status Register */
        template<const std::uintptr_t BASE_ADDR> class STATE
            : public mmio_device::reg<BASE_ADDR,
                                mmio_param::UART2::STATE_r> {
            public:
            /* RX Buffer Overun (write 1 to clear) */
            mmio_device::reg_field<BASE_ADDR,
                             mmio_param::UART2::STATE_r,
                             mmio_param::UART2::STATE::RXOV_f> RXOV;
            /* TX Buffer Overun (write 1 to clear) */
            mmio_device::reg_field<BASE_ADDR,
                             mmio_param::UART2::STATE_r,
                             mmio_param::UART2::STATE::TXOV_f> TXOV;
            /* RX Buffer Full */
            mmio_device::reg_field<BASE_ADDR,
                             mmio_param::UART2::STATE_r,
                             mmio_param::UART2::STATE::RXBF_f> RXBF;
            /* TX Buffer Full */
            mmio_device::reg_field<BASE_ADDR,
                             mmio_param::UART2::STATE_r,
                             mmio_param::UART2::STATE::TXBF_f> TXBF;
        }; /* STATE */
        /* UART Control Register */
        template<const std::uintptr_t BASE_ADDR> class CTRL
            : public mmio_device::reg<BASE_ADDR,
                                mmio_param::UART2::CTRL_r> {
            public:
            /* High Speed Test Mode for TX only */
            mmio_device::reg_field<BASE_ADDR,
                             mmio_param::UART2::CTRL_r,
                             mmio_param::UART2::CTRL::HSTX_f> HSTX;
            /* RX Overrun Interrupt Enable */
            mmio_device::reg_field<BASE_ADDR,
                             mmio_param::UART2::CTRL_r,
                             mmio_param::UART2::CTRL::RVOVINT_f> RVOVINT;
            /* TX Overrun Interrupt Enable */
            mmio_device::reg_field<BASE_ADDR,
                             mmio_param::UART2::CTRL_r,
                             mmio_param::UART2::CTRL::TXOVINT_f> TXOVINT;
            /* RX Interrupt Enable */
            mmio_device::reg_field<BASE_ADDR,
                             mmio_param::UART2::CTRL_r,
                             mmio_param::UART2::CTRL::RXINT_f> RXINT;
            /* TX Interrupt Enable */
            mmio_device::reg_field<BASE_ADDR,
                             mmio_param::UART2::CTRL_r,
                             mmio_param::UART2::CTRL::TXINT_f> TXINT;
            /* RX Enable */
            mmio_device::reg_field<BASE_ADDR,
                             mmio_param::UART2::CTRL_r,
                             mmio_param::UART2::CTRL::RXEN_f> RXEN;
            /* TX Enable */
            mmio_device::reg_field<BASE_ADDR,
                             mmio_param::UART2::CTRL_r,
                             mmio_param::UART2::CTRL::TXEN_f> TXEN;
        }; /* CTRL */
        /* UART Interrupt Status Register */
        template<const std::uintptr_t BASE_ADDR> class INTSTATUS
            : public mmio_device::reg<BASE_ADDR,
                                mmio_param::UART2::INTSTATUS_r> {
            public:
            /* RX Overrun Interrupt */
            mmio_device::reg_field<BASE_ADDR,
                             mmio_param::UART2::INTSTATUS_r,
                             mmio_param::UART2::INTSTATUS::RXOV_f> RXOV;
            /* TX Overrun Interrupt */
            mmio_device::reg_field<BASE_ADDR,
                             mmio_param::UART2::INTSTATUS_r,
                             mmio_param::UART2::INTSTATUS::TXOV_f> TXOV;
            /* RX Interrupt */
            mmio_device::reg_field<BASE_ADDR,
                             mmio_param::UART2::INTSTATUS_r,
                             mmio_param::UART2::INTSTATUS::RXINT_f> RXINT;
            /* TX Interrupt */
            mmio_device::reg_field<BASE_ADDR,
                             mmio_param::UART2::INTSTATUS_r,
                             mmio_param::UART2::INTSTATUS::TXINT_f> TXINT;
        }; /* INTSTATUS */
        /* UART Interrupt CLEAR Register */
        template<const std::uintptr_t BASE_ADDR> class INTCLEAR
            : public mmio_device::reg<BASE_ADDR,
                                mmio_param::UART2::INTCLEAR_r> {
            public:
            /* RX Overrun Interrupt */
            mmio_device::reg_field<BASE_ADDR,
                             mmio_param::UART2::INTCLEAR_r,
                             mmio_param::UART2::INTCLEAR::RXOV_f> RXOV;
            /* TX Overrun Interrupt */
            mmio_device::reg_field<BASE_ADDR,
                             mmio_param::UART2::INTCLEAR_r,
                             mmio_param::UART2::INTCLEAR::TXOV_f> TXOV;
            /* RX Interrupt */
            mmio_device::reg_field<BASE_ADDR,
                             mmio_param::UART2::INTCLEAR_r,
                             mmio_param::UART2::INTCLEAR::RXINT_f> RXINT;
            /* TX Interrupt */
            mmio_device::reg_field<BASE_ADDR,
                             mmio_param::UART2::INTCLEAR_r,
                             mmio_param::UART2::INTCLEAR::TXINT_f> TXINT;
        }; /* INTCLEAR */
        /* Baudrate Divider */
        template<const std::uintptr_t BASE_ADDR> class BAUDDIV
            : public mmio_device::reg<BASE_ADDR,
                                mmio_param::UART2::BAUDDIV_r> {
        }; /* BAUDDIV */
    } /* UART2 */
} /* mmio_regs */

#endif // UART2_DEV_HPP
