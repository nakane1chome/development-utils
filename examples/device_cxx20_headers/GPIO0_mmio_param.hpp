/*
   Register and field offset and size definitions for peripheral GPIO0.
   SPDX-License-Identifier: Unlicense
*/

#ifndef GPIO0_MMIO_PARAMS_HPP
#define GPIO0_MMIO_PARAMS_HPP

#include <cstdint>

namespace mmio_param {
    /* general-purpose I/O */
    namespace GPIO0 {
       /* Data Register */
       struct DATA_r {
           using datatype = std::uint32_t;
           static constexpr unsigned int offset = 0x0;
           static constexpr unsigned int bit_width = 32;
           static constexpr unsigned int field_count = 0;
       }; /* DATA_r */
       /* Data Output Register */
       struct DATAOUT_r {
           using datatype = std::uint32_t;
           static constexpr unsigned int offset = 0x4;
           static constexpr unsigned int bit_width = 32;
           static constexpr unsigned int field_count = 0;
       }; /* DATAOUT_r */
       /* Ouptut enable set Register */
       struct OUTENSET_r {
           using datatype = std::uint32_t;
           static constexpr unsigned int offset = 0x10;
           static constexpr unsigned int bit_width = 32;
           static constexpr unsigned int field_count = 0;
       }; /* OUTENSET_r */
       /* Ouptut enable clear Register */
       struct OUTENCLR_r {
           using datatype = std::uint32_t;
           static constexpr unsigned int offset = 0x14;
           static constexpr unsigned int bit_width = 32;
           static constexpr unsigned int field_count = 0;
       }; /* OUTENCLR_r */
       /* Alternate function set Register */
       struct ALTFUNCSET_r {
           using datatype = std::uint32_t;
           static constexpr unsigned int offset = 0x18;
           static constexpr unsigned int bit_width = 32;
           static constexpr unsigned int field_count = 0;
       }; /* ALTFUNCSET_r */
       /* Alternate function clear Register */
       struct ALTFUNCCLR_r {
           using datatype = std::uint32_t;
           static constexpr unsigned int offset = 0x1c;
           static constexpr unsigned int bit_width = 32;
           static constexpr unsigned int field_count = 0;
       }; /* ALTFUNCCLR_r */
       /* Interrupt enable set Register */
       struct INTENSET_r {
           using datatype = std::uint32_t;
           static constexpr unsigned int offset = 0x20;
           static constexpr unsigned int bit_width = 32;
           static constexpr unsigned int field_count = 0;
       }; /* INTENSET_r */
       /* Interrupt enable clear Register */
       struct INTENCLR_r {
           using datatype = std::uint32_t;
           static constexpr unsigned int offset = 0x24;
           static constexpr unsigned int bit_width = 32;
           static constexpr unsigned int field_count = 0;
       }; /* INTENCLR_r */
       /* Interrupt type set Register */
       struct INTTYPESET_r {
           using datatype = std::uint32_t;
           static constexpr unsigned int offset = 0x28;
           static constexpr unsigned int bit_width = 32;
           static constexpr unsigned int field_count = 0;
       }; /* INTTYPESET_r */
       /* Interrupt type clear Register */
       struct INTTYPECLR_r {
           using datatype = std::uint32_t;
           static constexpr unsigned int offset = 0x2c;
           static constexpr unsigned int bit_width = 32;
           static constexpr unsigned int field_count = 0;
       }; /* INTTYPECLR_r */
       /* Polarity-level, edge interrupt configuration set Register */
       struct INTPOLSET_r {
           using datatype = std::uint32_t;
           static constexpr unsigned int offset = 0x30;
           static constexpr unsigned int bit_width = 32;
           static constexpr unsigned int field_count = 0;
       }; /* INTPOLSET_r */
       /* Polarity-level, edge interrupt configuration clear Register */
       struct INTPOLCLR_r {
           using datatype = std::uint32_t;
           static constexpr unsigned int offset = 0x34;
           static constexpr unsigned int bit_width = 32;
           static constexpr unsigned int field_count = 0;
       }; /* INTPOLCLR_r */
       /* Interrupt Status Register */
       struct INTSTATUS_r {
           using datatype = std::uint32_t;
           static constexpr unsigned int offset = 0x38;
           static constexpr unsigned int bit_width = 32;
           static constexpr unsigned int field_count = 0;
       }; /* INTSTATUS_r */
       /* Interrupt CLEAR Register */
       struct INTCLEAR_r {
           using datatype = std::uint32_t;
           static constexpr unsigned int offset = 0x38;
           static constexpr unsigned int bit_width = 32;
           static constexpr unsigned int field_count = 0;
       }; /* INTCLEAR_r */
    }
}

#endif // GPIO0_DEV_HPP
