/*
   Register class and field definition for peripheral GPIO1.
   SPDX-License-Identifier: Unlicense
*/

#ifndef GPIO1_MMIO_REGS_HPP
#define GPIO1_MMIO_REGS_HPP

#include <cstdint>
#include "mmio_device.hpp"
#include "GPIO1_mmio_param.hpp"

namespace mmio_regs {
    /* general-purpose I/O */
    namespace GPIO1 {
        /* Data Register */
        template<const std::uintptr_t BASE_ADDR> class DATA 
            : public mmio_device::reg<BASE_ADDR, 
                                mmio_param::GPIO1::DATA_r> {
        }; /* DATA */
        /* Data Output Register */
        template<const std::uintptr_t BASE_ADDR> class DATAOUT 
            : public mmio_device::reg<BASE_ADDR, 
                                mmio_param::GPIO1::DATAOUT_r> {
        }; /* DATAOUT */
        /* Ouptut enable set Register */
        template<const std::uintptr_t BASE_ADDR> class OUTENSET 
            : public mmio_device::reg<BASE_ADDR, 
                                mmio_param::GPIO1::OUTENSET_r> {
        }; /* OUTENSET */
        /* Ouptut enable clear Register */
        template<const std::uintptr_t BASE_ADDR> class OUTENCLR 
            : public mmio_device::reg<BASE_ADDR, 
                                mmio_param::GPIO1::OUTENCLR_r> {
        }; /* OUTENCLR */
        /* Alternate function set Register */
        template<const std::uintptr_t BASE_ADDR> class ALTFUNCSET 
            : public mmio_device::reg<BASE_ADDR, 
                                mmio_param::GPIO1::ALTFUNCSET_r> {
        }; /* ALTFUNCSET */
        /* Alternate function clear Register */
        template<const std::uintptr_t BASE_ADDR> class ALTFUNCCLR 
            : public mmio_device::reg<BASE_ADDR, 
                                mmio_param::GPIO1::ALTFUNCCLR_r> {
        }; /* ALTFUNCCLR */
        /* Interrupt enable set Register */
        template<const std::uintptr_t BASE_ADDR> class INTENSET 
            : public mmio_device::reg<BASE_ADDR, 
                                mmio_param::GPIO1::INTENSET_r> {
        }; /* INTENSET */
        /* Interrupt enable clear Register */
        template<const std::uintptr_t BASE_ADDR> class INTENCLR 
            : public mmio_device::reg<BASE_ADDR, 
                                mmio_param::GPIO1::INTENCLR_r> {
        }; /* INTENCLR */
        /* Interrupt type set Register */
        template<const std::uintptr_t BASE_ADDR> class INTTYPESET 
            : public mmio_device::reg<BASE_ADDR, 
                                mmio_param::GPIO1::INTTYPESET_r> {
        }; /* INTTYPESET */
        /* Interrupt type clear Register */
        template<const std::uintptr_t BASE_ADDR> class INTTYPECLR 
            : public mmio_device::reg<BASE_ADDR, 
                                mmio_param::GPIO1::INTTYPECLR_r> {
        }; /* INTTYPECLR */
        /* Polarity-level, edge interrupt configuration set Register */
        template<const std::uintptr_t BASE_ADDR> class INTPOLSET 
            : public mmio_device::reg<BASE_ADDR, 
                                mmio_param::GPIO1::INTPOLSET_r> {
        }; /* INTPOLSET */
        /* Polarity-level, edge interrupt configuration clear Register */
        template<const std::uintptr_t BASE_ADDR> class INTPOLCLR 
            : public mmio_device::reg<BASE_ADDR, 
                                mmio_param::GPIO1::INTPOLCLR_r> {
        }; /* INTPOLCLR */
        /* Interrupt Status Register */
        template<const std::uintptr_t BASE_ADDR> class INTSTATUS 
            : public mmio_device::reg<BASE_ADDR, 
                                mmio_param::GPIO1::INTSTATUS_r> {
        }; /* INTSTATUS */
        /* Interrupt CLEAR Register */
        template<const std::uintptr_t BASE_ADDR> class INTCLEAR 
            : public mmio_device::reg<BASE_ADDR, 
                                mmio_param::GPIO1::INTCLEAR_r> {
        }; /* INTCLEAR */
    } /* GPIO1 */
} /* mmio_regs */

#endif // GPIO1_DEV_HPP