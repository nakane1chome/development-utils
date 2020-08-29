/*
   Register and field offset and size definitions for peripheral WDT.
   SPDX-License-Identifier: Unlicense
*/

#ifndef WDT_MMIO_PARAMS_HPP
#define WDT_MMIO_PARAMS_HPP

#include <cstdint>

namespace mmio_param {
    /* Watchdog Timer */
    namespace WDT {
       /* Watchdog Load Register */
       struct WDOGLOAD_r {
           using datatype = std::uint32_t;
           static constexpr unsigned int offset = 0x0;
           static constexpr unsigned int bit_width = 32;
           static constexpr unsigned int field_count = 0;
       }; /* WDOGLOAD_r */
       /* Watchdog Value Register */
       struct WDOGVALUE_r {
           using datatype = std::uint32_t;
           static constexpr unsigned int offset = 0x4;
           static constexpr unsigned int bit_width = 32;
           static constexpr unsigned int field_count = 0;
       }; /* WDOGVALUE_r */
       /* Watchdog Control Register */
       struct WDOGCONTROL_r {
           using datatype = std::uint32_t;
           static constexpr unsigned int offset = 0x8;
           static constexpr unsigned int bit_width = 32;
           static constexpr unsigned int field_count = 2;
       }; /* WDOGCONTROL_r */
       namespace WDOGCONTROL {
          /* Enable the interrupt event */
          struct INTEN_f {
              using datatype = bool;
              static constexpr unsigned int bit_offset = 0;
              static constexpr unsigned int bit_width = 1;
              static constexpr unsigned int bit_mask = 0x1;
          };
          /* Enable watchdog reset output */
          struct RESEN_f {
              using datatype = bool;
              static constexpr unsigned int bit_offset = 1;
              static constexpr unsigned int bit_width = 1;
              static constexpr unsigned int bit_mask = 0x2;
          };
       } /* WDOGCONTROL */
       /* Watchdog Interrupt Clear Register */
       struct WDOGINTCLR_r {
           using datatype = std::uint32_t;
           static constexpr unsigned int offset = 0xc;
           static constexpr unsigned int bit_width = 32;
           static constexpr unsigned int field_count = 1;
       }; /* WDOGINTCLR_r */
       namespace WDOGINTCLR {
          /* Interrupt */
          struct INT_f {
              using datatype = bool;
              static constexpr unsigned int bit_offset = 0;
              static constexpr unsigned int bit_width = 1;
              static constexpr unsigned int bit_mask = 0x1;
          };
       } /* WDOGINTCLR */
       /* Watchdog Raw Interrupt Status Register */
       struct WDOGRIS_r {
           using datatype = std::uint32_t;
           static constexpr unsigned int offset = 0x10;
           static constexpr unsigned int bit_width = 32;
           static constexpr unsigned int field_count = 1;
       }; /* WDOGRIS_r */
       namespace WDOGRIS {
          /* Raw watchdog Interrupt */
          struct RIS_f {
              using datatype = bool;
              static constexpr unsigned int bit_offset = 0;
              static constexpr unsigned int bit_width = 1;
              static constexpr unsigned int bit_mask = 0x1;
          };
       } /* WDOGRIS */
       /* Watchdog Mask Interrupt Status Register */
       struct WDOGMIS_r {
           using datatype = std::uint32_t;
           static constexpr unsigned int offset = 0x14;
           static constexpr unsigned int bit_width = 32;
           static constexpr unsigned int field_count = 1;
       }; /* WDOGMIS_r */
       namespace WDOGMIS {
          /* Masked Watchdog Interrupt */
          struct MIS_f {
              using datatype = bool;
              static constexpr unsigned int bit_offset = 0;
              static constexpr unsigned int bit_width = 1;
              static constexpr unsigned int bit_mask = 0x1;
          };
       } /* WDOGMIS */
       /* Watchdog Lock Register */
       struct WDOGLOCK_r {
           using datatype = std::uint32_t;
           static constexpr unsigned int offset = 0xc00;
           static constexpr unsigned int bit_width = 32;
           static constexpr unsigned int field_count = 0;
       }; /* WDOGLOCK_r */
    }
}

#endif // WDT_DEV_HPP