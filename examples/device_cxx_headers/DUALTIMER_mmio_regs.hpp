/*
   Register class and field definition for peripheral DUALTIMER.
   SPDX-License-Identifier: Unlicense
*/

#ifndef DUALTIMER_MMIO_REGS_HPP
#define DUALTIMER_MMIO_REGS_HPP

#include <cstdint>
#include "mmio_device.hpp"
#include "DUALTIMER_mmio_param.hpp"

namespace mmio_regs {
    /* Dual Timer */
    namespace DUALTIMER {
        /* Timer 1 Load Register */
        template<const std::uintptr_t BASE_ADDR> class TIMER1LOAD 
            : public mmio_device::reg<BASE_ADDR, 
                                mmio_param::DUALTIMER::TIMER1LOAD_r> {
        }; /* TIMER1LOAD */
        /* Timer 1 Value Register */
        template<const std::uintptr_t BASE_ADDR> class TIMER1VALUE 
            : public mmio_device::reg<BASE_ADDR, 
                                mmio_param::DUALTIMER::TIMER1VALUE_r> {
        }; /* TIMER1VALUE */
        /* Timer 1 Control Register */
        template<const std::uintptr_t BASE_ADDR> class TIMER1CONTROL 
            : public mmio_device::reg<BASE_ADDR, 
                                mmio_param::DUALTIMER::TIMER1CONTROL_r> {
            public:
            /* Selects one-shot or wrapping counter mode. */
            mmio_device::reg_field<BASE_ADDR, 
                             mmio_param::DUALTIMER::TIMER1CONTROL_r,
                             mmio_param::DUALTIMER::TIMER1CONTROL::OneShotCount_f> OneShotCount;
            /* Selects 16-bit or 32- bit counter operation. */
            mmio_device::reg_field<BASE_ADDR, 
                             mmio_param::DUALTIMER::TIMER1CONTROL_r,
                             mmio_param::DUALTIMER::TIMER1CONTROL::TimerSize_f> TimerSize;
            /* Timer prescale bits. */
            mmio_device::reg_field<BASE_ADDR, 
                             mmio_param::DUALTIMER::TIMER1CONTROL_r,
                             mmio_param::DUALTIMER::TIMER1CONTROL::TimerPre_f> TimerPre;
            /* Interrupt Enable bit. */
            mmio_device::reg_field<BASE_ADDR, 
                             mmio_param::DUALTIMER::TIMER1CONTROL_r,
                             mmio_param::DUALTIMER::TIMER1CONTROL::InterruptEnable_f> InterruptEnable;
            /* Timer Mode bit. */
            mmio_device::reg_field<BASE_ADDR, 
                             mmio_param::DUALTIMER::TIMER1CONTROL_r,
                             mmio_param::DUALTIMER::TIMER1CONTROL::TimerMode_f> TimerMode;
            /* Timer Enable Enable bit. */
            mmio_device::reg_field<BASE_ADDR, 
                             mmio_param::DUALTIMER::TIMER1CONTROL_r,
                             mmio_param::DUALTIMER::TIMER1CONTROL::TimerEnable_f> TimerEnable;
        }; /* TIMER1CONTROL */
        /* Timer 1 Interrupt Clear Register */
        template<const std::uintptr_t BASE_ADDR> class TIMER1INTCLR 
            : public mmio_device::reg<BASE_ADDR, 
                                mmio_param::DUALTIMER::TIMER1INTCLR_r> {
            public:
            /* Interrupt */
            mmio_device::reg_field<BASE_ADDR, 
                             mmio_param::DUALTIMER::TIMER1INTCLR_r,
                             mmio_param::DUALTIMER::TIMER1INTCLR::INT_f> INT;
        }; /* TIMER1INTCLR */
        /* Timer 1 Raw Interrupt Status Register */
        template<const std::uintptr_t BASE_ADDR> class TIMER1RIS 
            : public mmio_device::reg<BASE_ADDR, 
                                mmio_param::DUALTIMER::TIMER1RIS_r> {
            public:
            /* Raw Timer Interrupt */
            mmio_device::reg_field<BASE_ADDR, 
                             mmio_param::DUALTIMER::TIMER1RIS_r,
                             mmio_param::DUALTIMER::TIMER1RIS::RIS_f> RIS;
        }; /* TIMER1RIS */
        /* Timer 1 Mask Interrupt Status Register */
        template<const std::uintptr_t BASE_ADDR> class TIMER1MIS 
            : public mmio_device::reg<BASE_ADDR, 
                                mmio_param::DUALTIMER::TIMER1MIS_r> {
            public:
            /* Masked Timer Interrupt */
            mmio_device::reg_field<BASE_ADDR, 
                             mmio_param::DUALTIMER::TIMER1MIS_r,
                             mmio_param::DUALTIMER::TIMER1MIS::MIS_f> MIS;
        }; /* TIMER1MIS */
        /* Timer 1 Background Load Register */
        template<const std::uintptr_t BASE_ADDR> class TIMER1BGLOAD 
            : public mmio_device::reg<BASE_ADDR, 
                                mmio_param::DUALTIMER::TIMER1BGLOAD_r> {
        }; /* TIMER1BGLOAD */
        /* Timer 2 Load Register */
        template<const std::uintptr_t BASE_ADDR> class TIMER2LOAD 
            : public mmio_device::reg<BASE_ADDR, 
                                mmio_param::DUALTIMER::TIMER2LOAD_r> {
        }; /* TIMER2LOAD */
        /* Timer 2 Value Register */
        template<const std::uintptr_t BASE_ADDR> class TIMER2VALUE 
            : public mmio_device::reg<BASE_ADDR, 
                                mmio_param::DUALTIMER::TIMER2VALUE_r> {
        }; /* TIMER2VALUE */
        /* Timer 2 Control Register */
        template<const std::uintptr_t BASE_ADDR> class TIMER2CONTROL 
            : public mmio_device::reg<BASE_ADDR, 
                                mmio_param::DUALTIMER::TIMER2CONTROL_r> {
            public:
            /* Selects one-shot or wrapping counter mode. */
            mmio_device::reg_field<BASE_ADDR, 
                             mmio_param::DUALTIMER::TIMER2CONTROL_r,
                             mmio_param::DUALTIMER::TIMER2CONTROL::OneShotCount_f> OneShotCount;
            /* Selects 16-bit or 32- bit counter operation. */
            mmio_device::reg_field<BASE_ADDR, 
                             mmio_param::DUALTIMER::TIMER2CONTROL_r,
                             mmio_param::DUALTIMER::TIMER2CONTROL::TimerSize_f> TimerSize;
            /* Timer prescale bits. */
            mmio_device::reg_field<BASE_ADDR, 
                             mmio_param::DUALTIMER::TIMER2CONTROL_r,
                             mmio_param::DUALTIMER::TIMER2CONTROL::TimerPre_f> TimerPre;
            /* Interrupt Enable bit. */
            mmio_device::reg_field<BASE_ADDR, 
                             mmio_param::DUALTIMER::TIMER2CONTROL_r,
                             mmio_param::DUALTIMER::TIMER2CONTROL::InterruptEnable_f> InterruptEnable;
            /* Timer Mode bit. */
            mmio_device::reg_field<BASE_ADDR, 
                             mmio_param::DUALTIMER::TIMER2CONTROL_r,
                             mmio_param::DUALTIMER::TIMER2CONTROL::TimerMode_f> TimerMode;
            /* Timer Enable Enable bit. */
            mmio_device::reg_field<BASE_ADDR, 
                             mmio_param::DUALTIMER::TIMER2CONTROL_r,
                             mmio_param::DUALTIMER::TIMER2CONTROL::TimerEnable_f> TimerEnable;
        }; /* TIMER2CONTROL */
        /* Timer 2 Interrupt Clear Register */
        template<const std::uintptr_t BASE_ADDR> class TIMER2INTCLR 
            : public mmio_device::reg<BASE_ADDR, 
                                mmio_param::DUALTIMER::TIMER2INTCLR_r> {
            public:
            /* Interrupt */
            mmio_device::reg_field<BASE_ADDR, 
                             mmio_param::DUALTIMER::TIMER2INTCLR_r,
                             mmio_param::DUALTIMER::TIMER2INTCLR::INT_f> INT;
        }; /* TIMER2INTCLR */
        /* Timer 2 Raw Interrupt Status Register */
        template<const std::uintptr_t BASE_ADDR> class TIMER2RIS 
            : public mmio_device::reg<BASE_ADDR, 
                                mmio_param::DUALTIMER::TIMER2RIS_r> {
            public:
            /* Raw Timer Interrupt */
            mmio_device::reg_field<BASE_ADDR, 
                             mmio_param::DUALTIMER::TIMER2RIS_r,
                             mmio_param::DUALTIMER::TIMER2RIS::RIS_f> RIS;
        }; /* TIMER2RIS */
        /* Timer 2 Mask Interrupt Status Register */
        template<const std::uintptr_t BASE_ADDR> class TIMER2MIS 
            : public mmio_device::reg<BASE_ADDR, 
                                mmio_param::DUALTIMER::TIMER2MIS_r> {
            public:
            /* Masked Timer Interrupt */
            mmio_device::reg_field<BASE_ADDR, 
                             mmio_param::DUALTIMER::TIMER2MIS_r,
                             mmio_param::DUALTIMER::TIMER2MIS::MIS_f> MIS;
        }; /* TIMER2MIS */
        /* Timer 2 Background Load Register */
        template<const std::uintptr_t BASE_ADDR> class TIMER2BGLOAD 
            : public mmio_device::reg<BASE_ADDR, 
                                mmio_param::DUALTIMER::TIMER2BGLOAD_r> {
        }; /* TIMER2BGLOAD */
    } /* DUALTIMER */
} /* mmio_regs */

#endif // DUALTIMER_DEV_HPP