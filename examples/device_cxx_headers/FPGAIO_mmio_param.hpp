/*
   Register and field offset and size definitions for peripheral FPGAIO.
   SPDX-License-Identifier: Unlicense
*/

#ifndef FPGAIO_MMIO_PARAMS_HPP
#define FPGAIO_MMIO_PARAMS_HPP

#include <cstdint>

namespace mmio_param {
    /* FPGA System Control I/O */
    namespace FPGAIO {
       /* LED Connections */
       struct LED_r {
           using datatype = std::uint32_t;
           static constexpr unsigned int offset = 0x0;
           static constexpr unsigned int bit_width = 32;
           static constexpr unsigned int field_count = 2;
       }; /* LED_r */
       namespace LED {
          /* None */
          struct LED0_f {
              using datatype = bool;
              static constexpr unsigned int bit_offset = 0;
              static constexpr unsigned int bit_width = 1;
              static constexpr unsigned int bit_mask = 0x1;
          };
          /* None */
          struct LED1_f {
              using datatype = bool;
              static constexpr unsigned int bit_offset = 1;
              static constexpr unsigned int bit_width = 1;
              static constexpr unsigned int bit_mask = 0x2;
          };
       } /* LED */
       /* Button Connections */
       struct BUTTON_r {
           using datatype = std::uint32_t;
           static constexpr unsigned int offset = 0x8;
           static constexpr unsigned int bit_width = 32;
           static constexpr unsigned int field_count = 2;
       }; /* BUTTON_r */
       namespace BUTTON {
          /* None */
          struct BUTTON0_f {
              using datatype = bool;
              static constexpr unsigned int bit_offset = 0;
              static constexpr unsigned int bit_width = 1;
              static constexpr unsigned int bit_mask = 0x1;
          };
          /* None */
          struct BUTTON1_f {
              using datatype = bool;
              static constexpr unsigned int bit_offset = 1;
              static constexpr unsigned int bit_width = 1;
              static constexpr unsigned int bit_mask = 0x2;
          };
       } /* BUTTON */
       /* 1Hz Up Counter */
       struct CLK1HZ_r {
           using datatype = std::uint32_t;
           static constexpr unsigned int offset = 0x10;
           static constexpr unsigned int bit_width = 32;
           static constexpr unsigned int field_count = 0;
       }; /* CLK1HZ_r */
       /* 100Hz Up Counter */
       struct CLK100HZ_r {
           using datatype = std::uint32_t;
           static constexpr unsigned int offset = 0x14;
           static constexpr unsigned int bit_width = 32;
           static constexpr unsigned int field_count = 0;
       }; /* CLK100HZ_r */
       /* Cycle up counter */
       struct COUNTER_r {
           using datatype = std::uint32_t;
           static constexpr unsigned int offset = 0x18;
           static constexpr unsigned int bit_width = 32;
           static constexpr unsigned int field_count = 0;
       }; /* COUNTER_r */
       /* Reload value for prescaler counter */
       struct PRESCALER_r {
           using datatype = std::uint32_t;
           static constexpr unsigned int offset = 0x1c;
           static constexpr unsigned int bit_width = 32;
           static constexpr unsigned int field_count = 0;
       }; /* PRESCALER_r */
       /* Prescale Counter */
       struct PSCNTR_r {
           using datatype = std::uint32_t;
           static constexpr unsigned int offset = 0x20;
           static constexpr unsigned int bit_width = 32;
           static constexpr unsigned int field_count = 0;
       }; /* PSCNTR_r */
       /* Misc. Control */
       struct MISC_r {
           using datatype = std::uint32_t;
           static constexpr unsigned int offset = 0x4c;
           static constexpr unsigned int bit_width = 32;
           static constexpr unsigned int field_count = 9;
       }; /* MISC_r */
       namespace MISC {
          /* None */
          struct SHIELD1_SPI_nCS_f {
              using datatype = bool;
              static constexpr unsigned int bit_offset = 9;
              static constexpr unsigned int bit_width = 1;
              static constexpr unsigned int bit_mask = 0x200;
          };
          /* None */
          struct SHIELD0_SPI_nCS_f {
              using datatype = bool;
              static constexpr unsigned int bit_offset = 8;
              static constexpr unsigned int bit_width = 1;
              static constexpr unsigned int bit_mask = 0x100;
          };
          /* None */
          struct ADC_SPI_nCS_f {
              using datatype = bool;
              static constexpr unsigned int bit_offset = 7;
              static constexpr unsigned int bit_width = 1;
              static constexpr unsigned int bit_mask = 0x80;
          };
          /* None */
          struct CLCD_BL_CTRL_f {
              using datatype = bool;
              static constexpr unsigned int bit_offset = 6;
              static constexpr unsigned int bit_width = 1;
              static constexpr unsigned int bit_mask = 0x40;
          };
          /* None */
          struct CLCD_RD_f {
              using datatype = bool;
              static constexpr unsigned int bit_offset = 5;
              static constexpr unsigned int bit_width = 1;
              static constexpr unsigned int bit_mask = 0x20;
          };
          /* None */
          struct CLCD_RS_f {
              using datatype = bool;
              static constexpr unsigned int bit_offset = 4;
              static constexpr unsigned int bit_width = 1;
              static constexpr unsigned int bit_mask = 0x10;
          };
          /* None */
          struct CLCD_RESET_f {
              using datatype = bool;
              static constexpr unsigned int bit_offset = 3;
              static constexpr unsigned int bit_width = 1;
              static constexpr unsigned int bit_mask = 0x8;
          };
          /* None */
          struct SPI_nSS_f {
              using datatype = bool;
              static constexpr unsigned int bit_offset = 1;
              static constexpr unsigned int bit_width = 1;
              static constexpr unsigned int bit_mask = 0x2;
          };
          /* None */
          struct CLCD_CS_f {
              using datatype = bool;
              static constexpr unsigned int bit_offset = 0;
              static constexpr unsigned int bit_width = 1;
              static constexpr unsigned int bit_mask = 0x1;
          };
       } /* MISC */
    }
}

#endif // FPGAIO_DEV_HPP