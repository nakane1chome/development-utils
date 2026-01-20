/*
   Register class and field definition for peripheral WDT.
   SPDX-License-Identifier: Unlicense
*/

#ifndef WDT_MMIO_REGS_HPP
#define WDT_MMIO_REGS_HPP

#include <cstdint>
#include "mmio_device.hpp"
#include "WDT_mmio_param.hpp"

namespace mmio_regs {
    /* Watchdog Timer */
    namespace WDT {
        /* Watchdog Load Register */
        template<const std::uintptr_t BASE_ADDR> class WDOGLOAD
            : public mmio_device::reg<BASE_ADDR,
                                mmio_param::WDT::WDOGLOAD_r> {
        }; /* WDOGLOAD */
        /* Watchdog Value Register */
        template<const std::uintptr_t BASE_ADDR> class WDOGVALUE
            : public mmio_device::reg<BASE_ADDR,
                                mmio_param::WDT::WDOGVALUE_r> {
        }; /* WDOGVALUE */
        /* Watchdog Control Register */
        template<const std::uintptr_t BASE_ADDR> class WDOGCONTROL
            : public mmio_device::reg<BASE_ADDR,
                                mmio_param::WDT::WDOGCONTROL_r> {
            public:
            /* Enable the interrupt event */
            mmio_device::reg_field<BASE_ADDR,
                             mmio_param::WDT::WDOGCONTROL_r,
                             mmio_param::WDT::WDOGCONTROL::INTEN_f> INTEN;
            /* Enable watchdog reset output */
            mmio_device::reg_field<BASE_ADDR,
                             mmio_param::WDT::WDOGCONTROL_r,
                             mmio_param::WDT::WDOGCONTROL::RESEN_f> RESEN;
        }; /* WDOGCONTROL */
        /* Watchdog Interrupt Clear Register */
        template<const std::uintptr_t BASE_ADDR> class WDOGINTCLR
            : public mmio_device::reg<BASE_ADDR,
                                mmio_param::WDT::WDOGINTCLR_r> {
            public:
            /* Interrupt */
            mmio_device::reg_field<BASE_ADDR,
                             mmio_param::WDT::WDOGINTCLR_r,
                             mmio_param::WDT::WDOGINTCLR::INT_f> INT;
        }; /* WDOGINTCLR */
        /* Watchdog Raw Interrupt Status Register */
        template<const std::uintptr_t BASE_ADDR> class WDOGRIS
            : public mmio_device::reg<BASE_ADDR,
                                mmio_param::WDT::WDOGRIS_r> {
            public:
            /* Raw watchdog Interrupt */
            mmio_device::reg_field<BASE_ADDR,
                             mmio_param::WDT::WDOGRIS_r,
                             mmio_param::WDT::WDOGRIS::RIS_f> RIS;
        }; /* WDOGRIS */
        /* Watchdog Mask Interrupt Status Register */
        template<const std::uintptr_t BASE_ADDR> class WDOGMIS
            : public mmio_device::reg<BASE_ADDR,
                                mmio_param::WDT::WDOGMIS_r> {
            public:
            /* Masked Watchdog Interrupt */
            mmio_device::reg_field<BASE_ADDR,
                             mmio_param::WDT::WDOGMIS_r,
                             mmio_param::WDT::WDOGMIS::MIS_f> MIS;
        }; /* WDOGMIS */
        /* Watchdog Lock Register */
        template<const std::uintptr_t BASE_ADDR> class WDOGLOCK
            : public mmio_device::reg<BASE_ADDR,
                                mmio_param::WDT::WDOGLOCK_r> {
        }; /* WDOGLOCK */
    } /* WDT */
} /* mmio_regs */

#endif // WDT_DEV_HPP