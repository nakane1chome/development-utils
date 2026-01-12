/*
   Register class and field definition for peripheral SPI.
   SPDX-License-Identifier: Unlicense
*/

#ifndef SPI_MMIO_REGS_HPP
#define SPI_MMIO_REGS_HPP

#include <cstdint>
#include "mmio_device.hpp"
#include "SPI_mmio_param.hpp"

namespace mmio_regs {
    /* SPI */
    namespace SPI {
        /* SPI Status */
        template<const std::uintptr_t BASE_ADDR> class SPSTAT
            : public mmio_device::reg<BASE_ADDR,
                                mmio_param::SPI::SPSTAT_r> {
        }; /* SPSTAT */
        /* SPI Data */
        template<const std::uintptr_t BASE_ADDR> class SPDAT
            : public mmio_device::reg<BASE_ADDR,
                                mmio_param::SPI::SPDAT_r> {
        }; /* SPDAT */
        /* SPI Clock Configuration */
        template<const std::uintptr_t BASE_ADDR> class SPCLK
            : public mmio_device::reg<BASE_ADDR,
                                mmio_param::SPI::SPCLK_r> {
        }; /* SPCLK */
        /* SPI Configuration */
        template<const std::uintptr_t BASE_ADDR> class SPCON
            : public mmio_device::reg<BASE_ADDR,
                                mmio_param::SPI::SPCON_r> {
            public:
            /* None */
            mmio_device::reg_field<BASE_ADDR,
                             mmio_param::SPI::SPCON_r,
                             mmio_param::SPI::SPCON::SPEN_f> SPEN;
            /* None */
            mmio_device::reg_field<BASE_ADDR,
                             mmio_param::SPI::SPCON_r,
                             mmio_param::SPI::SPCON::SSDIS_f> SSDIS;
            /* None */
            mmio_device::reg_field<BASE_ADDR,
                             mmio_param::SPI::SPCON_r,
                             mmio_param::SPI::SPCON::MSTRS_f> MSTRS;
            /* None */
            mmio_device::reg_field<BASE_ADDR,
                             mmio_param::SPI::SPCON_r,
                             mmio_param::SPI::SPCON::CPOL_f> CPOL;
            /* None */
            mmio_device::reg_field<BASE_ADDR,
                             mmio_param::SPI::SPCON_r,
                             mmio_param::SPI::SPCON::CPHA_f> CPHA;
            /* None */
            mmio_device::reg_field<BASE_ADDR,
                             mmio_param::SPI::SPCON_r,
                             mmio_param::SPI::SPCON::SPR1_f> SPR1;
            /* None */
            mmio_device::reg_field<BASE_ADDR,
                             mmio_param::SPI::SPCON_r,
                             mmio_param::SPI::SPCON::SPR0_f> SPR0;
        }; /* SPCON */
    } /* SPI */
} /* mmio_regs */

#endif // SPI_DEV_HPP
