/*
   Register and field offset and size definitions for peripheral UART0.
   SPDX-License-Identifier: Unlicense
*/

#ifndef UART0_MMIO_PARAMS_HPP
#define UART0_MMIO_PARAMS_HPP

#include <cstdint>

namespace mmio_param {
    /* UART 0 */
    namespace UART0 {
       /* Recieve and Transmit Data Value */
       struct DATA_r {
           using datatype = std::uint32_t;
           static constexpr unsigned int offset = 0x0;
           static constexpr unsigned int bit_width = 32;
           static constexpr unsigned int field_count = 0;
       }; /* DATA_r */
       /* UART Status Register */
       struct STATE_r {
           using datatype = std::uint32_t;
           static constexpr unsigned int offset = 0x4;
           static constexpr unsigned int bit_width = 32;
           static constexpr unsigned int field_count = 4;
       }; /* STATE_r */
       namespace STATE {
          /* RX Buffer Overun (write 1 to clear) */
          struct RXOV_f {
              using datatype = bool;
              static constexpr unsigned int bit_offset = 3;
              static constexpr unsigned int bit_width = 1;
              static constexpr unsigned int bit_mask = 0x8;
          };
          /* TX Buffer Overun (write 1 to clear) */
          struct TXOV_f {
              using datatype = bool;
              static constexpr unsigned int bit_offset = 2;
              static constexpr unsigned int bit_width = 1;
              static constexpr unsigned int bit_mask = 0x4;
          };
          /* RX Buffer Full */
          struct RXBF_f {
              using datatype = bool;
              static constexpr unsigned int bit_offset = 1;
              static constexpr unsigned int bit_width = 1;
              static constexpr unsigned int bit_mask = 0x2;
          };
          /* TX Buffer Full */
          struct TXBF_f {
              using datatype = bool;
              static constexpr unsigned int bit_offset = 0;
              static constexpr unsigned int bit_width = 1;
              static constexpr unsigned int bit_mask = 0x1;
          };
       } /* STATE */
       /* UART Control Register */
       struct CTRL_r {
           using datatype = std::uint32_t;
           static constexpr unsigned int offset = 0x8;
           static constexpr unsigned int bit_width = 32;
           static constexpr unsigned int field_count = 7;
       }; /* CTRL_r */
       namespace CTRL {
          /* High Speed Test Mode for TX only */
          struct HSTX_f {
              using datatype = bool;
              static constexpr unsigned int bit_offset = 6;
              static constexpr unsigned int bit_width = 1;
              static constexpr unsigned int bit_mask = 0x40;
          };
          /* RX Overrun Interrupt Enable */
          struct RVOVINT_f {
              using datatype = bool;
              static constexpr unsigned int bit_offset = 5;
              static constexpr unsigned int bit_width = 1;
              static constexpr unsigned int bit_mask = 0x20;
          };
          /* TX Overrun Interrupt Enable */
          struct TXOVINT_f {
              using datatype = bool;
              static constexpr unsigned int bit_offset = 4;
              static constexpr unsigned int bit_width = 1;
              static constexpr unsigned int bit_mask = 0x10;
          };
          /* RX Interrupt Enable */
          struct RXINT_f {
              using datatype = bool;
              static constexpr unsigned int bit_offset = 3;
              static constexpr unsigned int bit_width = 1;
              static constexpr unsigned int bit_mask = 0x8;
          };
          /* TX Interrupt Enable */
          struct TXINT_f {
              using datatype = bool;
              static constexpr unsigned int bit_offset = 2;
              static constexpr unsigned int bit_width = 1;
              static constexpr unsigned int bit_mask = 0x4;
          };
          /* RX Enable */
          struct RXEN_f {
              using datatype = bool;
              static constexpr unsigned int bit_offset = 1;
              static constexpr unsigned int bit_width = 1;
              static constexpr unsigned int bit_mask = 0x2;
          };
          /* TX Enable */
          struct TXEN_f {
              using datatype = bool;
              static constexpr unsigned int bit_offset = 0;
              static constexpr unsigned int bit_width = 1;
              static constexpr unsigned int bit_mask = 0x1;
          };
       } /* CTRL */
       /* UART Interrupt Status Register */
       struct INTSTATUS_r {
           using datatype = std::uint32_t;
           static constexpr unsigned int offset = 0xc;
           static constexpr unsigned int bit_width = 32;
           static constexpr unsigned int field_count = 4;
       }; /* INTSTATUS_r */
       namespace INTSTATUS {
          /* RX Overrun Interrupt */
          struct RXOV_f {
              using datatype = bool;
              static constexpr unsigned int bit_offset = 3;
              static constexpr unsigned int bit_width = 1;
              static constexpr unsigned int bit_mask = 0x8;
          };
          /* TX Overrun Interrupt */
          struct TXOV_f {
              using datatype = bool;
              static constexpr unsigned int bit_offset = 2;
              static constexpr unsigned int bit_width = 1;
              static constexpr unsigned int bit_mask = 0x4;
          };
          /* RX Interrupt */
          struct RXINT_f {
              using datatype = bool;
              static constexpr unsigned int bit_offset = 1;
              static constexpr unsigned int bit_width = 1;
              static constexpr unsigned int bit_mask = 0x2;
          };
          /* TX Interrupt */
          struct TXINT_f {
              using datatype = bool;
              static constexpr unsigned int bit_offset = 0;
              static constexpr unsigned int bit_width = 1;
              static constexpr unsigned int bit_mask = 0x1;
          };
       } /* INTSTATUS */
       /* UART Interrupt CLEAR Register */
       struct INTCLEAR_r {
           using datatype = std::uint32_t;
           static constexpr unsigned int offset = 0xc;
           static constexpr unsigned int bit_width = 32;
           static constexpr unsigned int field_count = 4;
       }; /* INTCLEAR_r */
       namespace INTCLEAR {
          /* RX Overrun Interrupt */
          struct RXOV_f {
              using datatype = bool;
              static constexpr unsigned int bit_offset = 3;
              static constexpr unsigned int bit_width = 1;
              static constexpr unsigned int bit_mask = 0x8;
          };
          /* TX Overrun Interrupt */
          struct TXOV_f {
              using datatype = bool;
              static constexpr unsigned int bit_offset = 2;
              static constexpr unsigned int bit_width = 1;
              static constexpr unsigned int bit_mask = 0x4;
          };
          /* RX Interrupt */
          struct RXINT_f {
              using datatype = bool;
              static constexpr unsigned int bit_offset = 1;
              static constexpr unsigned int bit_width = 1;
              static constexpr unsigned int bit_mask = 0x2;
          };
          /* TX Interrupt */
          struct TXINT_f {
              using datatype = bool;
              static constexpr unsigned int bit_offset = 0;
              static constexpr unsigned int bit_width = 1;
              static constexpr unsigned int bit_mask = 0x1;
          };
       } /* INTCLEAR */
       /* Baudrate Divider */
       struct BAUDDIV_r {
           using datatype = std::uint32_t;
           static constexpr unsigned int offset = 0x10;
           static constexpr unsigned int bit_width = 32;
           static constexpr unsigned int field_count = 0;
       }; /* BAUDDIV_r */
    }
}

#endif // UART0_DEV_HPP
