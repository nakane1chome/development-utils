/*
   Register class and field definition for peripheral TIMER1.
   SPDX-License-Identifier: Unlicense
*/

#ifndef TIMER1_MMIO_REGS_HPP
#define TIMER1_MMIO_REGS_HPP

#include <cstdint>
#include "mmio_device.hpp"
#include "TIMER1_mmio_param.hpp"

namespace mmio_regs {
    /* Timer 0 */
    namespace TIMER1 {
        /* Control Register */
        template<const std::uintptr_t BASE_ADDR> class CTRL
            : public mmio_device::reg<BASE_ADDR,
                                mmio_param::TIMER1::CTRL_r> {
            public:
            /* Enable */
            mmio_device::reg_field<BASE_ADDR,
                             mmio_param::TIMER1::CTRL_r,
                             mmio_param::TIMER1::CTRL::ENABLE_f> ENABLE;
            /* External Input as Enable */
            mmio_device::reg_field<BASE_ADDR,
                             mmio_param::TIMER1::CTRL_r,
                             mmio_param::TIMER1::CTRL::EXTIN_f> EXTIN;
            /* External Clock Enable */
            mmio_device::reg_field<BASE_ADDR,
                             mmio_param::TIMER1::CTRL_r,
                             mmio_param::TIMER1::CTRL::EXTCLK_f> EXTCLK;
            /* Interrupt Enable */
            mmio_device::reg_field<BASE_ADDR,
                             mmio_param::TIMER1::CTRL_r,
                             mmio_param::TIMER1::CTRL::INTEN_f> INTEN;
        }; /* CTRL */
        /* Current Timer Counter Value */
        template<const std::uintptr_t BASE_ADDR> class VALUE
            : public mmio_device::reg<BASE_ADDR,
                                mmio_param::TIMER1::VALUE_r> {
        }; /* VALUE */
        /* Counter Reload Value */
        template<const std::uintptr_t BASE_ADDR> class RELOAD
            : public mmio_device::reg<BASE_ADDR,
                                mmio_param::TIMER1::RELOAD_r> {
        }; /* RELOAD */
        /* Timer Interrupt status register */
        template<const std::uintptr_t BASE_ADDR> class INTSTATUS
            : public mmio_device::reg<BASE_ADDR,
                                mmio_param::TIMER1::INTSTATUS_r> {
        }; /* INTSTATUS */
        /* Timer Interrupt clear register */
        template<const std::uintptr_t BASE_ADDR> class INTCLEAR
            : public mmio_device::reg<BASE_ADDR,
                                mmio_param::TIMER1::INTCLEAR_r> {
        }; /* INTCLEAR */
    } /* TIMER1 */
} /* mmio_regs */

#endif // TIMER1_DEV_HPP
