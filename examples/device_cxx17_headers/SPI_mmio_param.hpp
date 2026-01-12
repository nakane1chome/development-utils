/*
   Register and field offset and size definitions for peripheral SPI.
   SPDX-License-Identifier: Unlicense
*/

#ifndef SPI_MMIO_PARAMS_HPP
#define SPI_MMIO_PARAMS_HPP

#include <cstdint>

namespace mmio_param {
    /* SPI */
    namespace SPI {
       /* SPI Status */
       struct SPSTAT_r {
           using datatype = std::uint32_t;
           static constexpr unsigned int offset = 0x0;
           static constexpr unsigned int bit_width = 32;
           static constexpr unsigned int field_count = 0;
       }; /* SPSTAT_r */
       /* SPI Data */
       struct SPDAT_r {
           using datatype = std::uint32_t;
           static constexpr unsigned int offset = 0x2;
           static constexpr unsigned int bit_width = 32;
           static constexpr unsigned int field_count = 0;
       }; /* SPDAT_r */
       /* SPI Clock Configuration */
       struct SPCLK_r {
           using datatype = std::uint32_t;
           static constexpr unsigned int offset = 0x4;
           static constexpr unsigned int bit_width = 32;
           static constexpr unsigned int field_count = 0;
       }; /* SPCLK_r */
       /* SPI Configuration */
       struct SPCON_r {
           using datatype = std::uint32_t;
           static constexpr unsigned int offset = 0x6;
           static constexpr unsigned int bit_width = 32;
           static constexpr unsigned int field_count = 7;
       }; /* SPCON_r */
       namespace SPCON {
          /* None */
          struct SPEN_f {
              using datatype = bool;
              static constexpr unsigned int bit_offset = 0;
              static constexpr unsigned int bit_width = 1;
              static constexpr unsigned int bit_mask = 0x1;
          };
          /* None */
          struct SSDIS_f {
              using datatype = bool;
              static constexpr unsigned int bit_offset = 1;
              static constexpr unsigned int bit_width = 1;
              static constexpr unsigned int bit_mask = 0x2;
          };
          /* None */
          struct MSTRS_f {
              using datatype = bool;
              static constexpr unsigned int bit_offset = 2;
              static constexpr unsigned int bit_width = 1;
              static constexpr unsigned int bit_mask = 0x4;
          };
          /* None */
          struct CPOL_f {
              using datatype = bool;
              static constexpr unsigned int bit_offset = 3;
              static constexpr unsigned int bit_width = 1;
              static constexpr unsigned int bit_mask = 0x8;
          };
          /* None */
          struct CPHA_f {
              using datatype = bool;
              static constexpr unsigned int bit_offset = 4;
              static constexpr unsigned int bit_width = 1;
              static constexpr unsigned int bit_mask = 0x10;
          };
          /* None */
          struct SPR1_f {
              using datatype = bool;
              static constexpr unsigned int bit_offset = 5;
              static constexpr unsigned int bit_width = 1;
              static constexpr unsigned int bit_mask = 0x20;
          };
          /* None */
          struct SPR0_f {
              using datatype = bool;
              static constexpr unsigned int bit_offset = 6;
              static constexpr unsigned int bit_width = 1;
              static constexpr unsigned int bit_mask = 0x40;
          };
       } /* SPCON */
    }
}

#endif // SPI_DEV_HPP
