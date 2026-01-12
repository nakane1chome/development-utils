/*
   Register and field offset and size definitions for peripheral TIMER1.
   SPDX-License-Identifier: Unlicense
*/

#ifndef TIMER1_MMIO_PARAMS_HPP
#define TIMER1_MMIO_PARAMS_HPP

#include <cstdint>

namespace mmio_param {
    /* Timer 0 */
    namespace TIMER1 {
       /* Control Register */
       struct CTRL_r {
           using datatype = std::uint32_t;
           static constexpr unsigned int offset = 0x0;
           static constexpr unsigned int bit_width = 32;
           static constexpr unsigned int field_count = 4;
       }; /* CTRL_r */
       namespace CTRL {
          /* Enable */
          struct ENABLE_f {
              using datatype = bool;
              static constexpr unsigned int bit_offset = 0;
              static constexpr unsigned int bit_width = 1;
              static constexpr unsigned int bit_mask = 0x1;
          };
          /* External Input as Enable */
          struct EXTIN_f {
              using datatype = bool;
              static constexpr unsigned int bit_offset = 1;
              static constexpr unsigned int bit_width = 1;
              static constexpr unsigned int bit_mask = 0x2;
          };
          /* External Clock Enable */
          struct EXTCLK_f {
              using datatype = bool;
              static constexpr unsigned int bit_offset = 2;
              static constexpr unsigned int bit_width = 1;
              static constexpr unsigned int bit_mask = 0x4;
          };
          /* Interrupt Enable */
          struct INTEN_f {
              using datatype = bool;
              static constexpr unsigned int bit_offset = 3;
              static constexpr unsigned int bit_width = 1;
              static constexpr unsigned int bit_mask = 0x8;
          };
       } /* CTRL */
       /* Current Timer Counter Value */
       struct VALUE_r {
           using datatype = std::uint32_t;
           static constexpr unsigned int offset = 0x4;
           static constexpr unsigned int bit_width = 32;
           static constexpr unsigned int field_count = 0;
       }; /* VALUE_r */
       /* Counter Reload Value */
       struct RELOAD_r {
           using datatype = std::uint32_t;
           static constexpr unsigned int offset = 0x8;
           static constexpr unsigned int bit_width = 32;
           static constexpr unsigned int field_count = 0;
       }; /* RELOAD_r */
       /* Timer Interrupt status register */
       struct INTSTATUS_r {
           using datatype = std::uint32_t;
           static constexpr unsigned int offset = 0xc;
           static constexpr unsigned int bit_width = 32;
           static constexpr unsigned int field_count = 0;
       }; /* INTSTATUS_r */
       /* Timer Interrupt clear register */
       struct INTCLEAR_r {
           using datatype = std::uint32_t;
           static constexpr unsigned int offset = 0xc;
           static constexpr unsigned int bit_width = 32;
           static constexpr unsigned int field_count = 0;
       }; /* INTCLEAR_r */
    }
}

#endif // TIMER1_DEV_HPP
