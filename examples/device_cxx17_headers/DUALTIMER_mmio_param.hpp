/*
   Register and field offset and size definitions for peripheral DUALTIMER.
   SPDX-License-Identifier: Unlicense
*/

#ifndef DUALTIMER_MMIO_PARAMS_HPP
#define DUALTIMER_MMIO_PARAMS_HPP

#include <cstdint>

namespace mmio_param {
    /* Dual Timer */
    namespace DUALTIMER {
       /* Timer 1 Load Register */
       struct TIMER1LOAD_r {
           using datatype = std::uint32_t;
           static constexpr unsigned int offset = 0x0;
           static constexpr unsigned int bit_width = 32;
           static constexpr unsigned int field_count = 0;
       }; /* TIMER1LOAD_r */
       /* Timer 1 Value Register */
       struct TIMER1VALUE_r {
           using datatype = std::uint32_t;
           static constexpr unsigned int offset = 0x4;
           static constexpr unsigned int bit_width = 32;
           static constexpr unsigned int field_count = 0;
       }; /* TIMER1VALUE_r */
       /* Timer 1 Control Register */
       struct TIMER1CONTROL_r {
           using datatype = std::uint32_t;
           static constexpr unsigned int offset = 0x8;
           static constexpr unsigned int bit_width = 32;
           static constexpr unsigned int field_count = 6;
       }; /* TIMER1CONTROL_r */
       namespace TIMER1CONTROL {
          /* Selects one-shot or wrapping counter mode. */
          struct OneShotCount_f {
              using datatype = bool;
              static constexpr unsigned int bit_offset = 0;
              static constexpr unsigned int bit_width = 1;
              static constexpr unsigned int bit_mask = 0x1;
          };
          /* Selects 16-bit or 32- bit counter operation. */
          struct TimerSize_f {
              using datatype = bool;
              static constexpr unsigned int bit_offset = 1;
              static constexpr unsigned int bit_width = 1;
              static constexpr unsigned int bit_mask = 0x2;
          };
          /* Timer prescale bits. */
          struct TimerPre_f {
              using datatype = std::uint8_t;
              static constexpr unsigned int bit_offset = 2;
              static constexpr unsigned int bit_width = 2;
              static constexpr unsigned int bit_mask = 0xc;
          };
          /* Interrupt Enable bit. */
          struct InterruptEnable_f {
              using datatype = bool;
              static constexpr unsigned int bit_offset = 5;
              static constexpr unsigned int bit_width = 1;
              static constexpr unsigned int bit_mask = 0x20;
          };
          /* Timer Mode bit. */
          struct TimerMode_f {
              using datatype = bool;
              static constexpr unsigned int bit_offset = 6;
              static constexpr unsigned int bit_width = 1;
              static constexpr unsigned int bit_mask = 0x40;
          };
          /* Timer Enable Enable bit. */
          struct TimerEnable_f {
              using datatype = bool;
              static constexpr unsigned int bit_offset = 7;
              static constexpr unsigned int bit_width = 1;
              static constexpr unsigned int bit_mask = 0x80;
          };
       } /* TIMER1CONTROL */
       /* Timer 1 Interrupt Clear Register */
       struct TIMER1INTCLR_r {
           using datatype = std::uint32_t;
           static constexpr unsigned int offset = 0xc;
           static constexpr unsigned int bit_width = 32;
           static constexpr unsigned int field_count = 1;
       }; /* TIMER1INTCLR_r */
       namespace TIMER1INTCLR {
          /* Interrupt */
          struct INT_f {
              using datatype = bool;
              static constexpr unsigned int bit_offset = 0;
              static constexpr unsigned int bit_width = 1;
              static constexpr unsigned int bit_mask = 0x1;
          };
       } /* TIMER1INTCLR */
       /* Timer 1 Raw Interrupt Status Register */
       struct TIMER1RIS_r {
           using datatype = std::uint32_t;
           static constexpr unsigned int offset = 0x10;
           static constexpr unsigned int bit_width = 32;
           static constexpr unsigned int field_count = 1;
       }; /* TIMER1RIS_r */
       namespace TIMER1RIS {
          /* Raw Timer Interrupt */
          struct RIS_f {
              using datatype = bool;
              static constexpr unsigned int bit_offset = 0;
              static constexpr unsigned int bit_width = 1;
              static constexpr unsigned int bit_mask = 0x1;
          };
       } /* TIMER1RIS */
       /* Timer 1 Mask Interrupt Status Register */
       struct TIMER1MIS_r {
           using datatype = std::uint32_t;
           static constexpr unsigned int offset = 0x14;
           static constexpr unsigned int bit_width = 32;
           static constexpr unsigned int field_count = 1;
       }; /* TIMER1MIS_r */
       namespace TIMER1MIS {
          /* Masked Timer Interrupt */
          struct MIS_f {
              using datatype = bool;
              static constexpr unsigned int bit_offset = 0;
              static constexpr unsigned int bit_width = 1;
              static constexpr unsigned int bit_mask = 0x1;
          };
       } /* TIMER1MIS */
       /* Timer 1 Background Load Register */
       struct TIMER1BGLOAD_r {
           using datatype = std::uint32_t;
           static constexpr unsigned int offset = 0x18;
           static constexpr unsigned int bit_width = 32;
           static constexpr unsigned int field_count = 0;
       }; /* TIMER1BGLOAD_r */
       /* Timer 2 Load Register */
       struct TIMER2LOAD_r {
           using datatype = std::uint32_t;
           static constexpr unsigned int offset = 0x20;
           static constexpr unsigned int bit_width = 32;
           static constexpr unsigned int field_count = 0;
       }; /* TIMER2LOAD_r */
       /* Timer 2 Value Register */
       struct TIMER2VALUE_r {
           using datatype = std::uint32_t;
           static constexpr unsigned int offset = 0x24;
           static constexpr unsigned int bit_width = 32;
           static constexpr unsigned int field_count = 0;
       }; /* TIMER2VALUE_r */
       /* Timer 2 Control Register */
       struct TIMER2CONTROL_r {
           using datatype = std::uint32_t;
           static constexpr unsigned int offset = 0x28;
           static constexpr unsigned int bit_width = 32;
           static constexpr unsigned int field_count = 6;
       }; /* TIMER2CONTROL_r */
       namespace TIMER2CONTROL {
          /* Selects one-shot or wrapping counter mode. */
          struct OneShotCount_f {
              using datatype = bool;
              static constexpr unsigned int bit_offset = 0;
              static constexpr unsigned int bit_width = 1;
              static constexpr unsigned int bit_mask = 0x1;
          };
          /* Selects 16-bit or 32- bit counter operation. */
          struct TimerSize_f {
              using datatype = bool;
              static constexpr unsigned int bit_offset = 1;
              static constexpr unsigned int bit_width = 1;
              static constexpr unsigned int bit_mask = 0x2;
          };
          /* Timer prescale bits. */
          struct TimerPre_f {
              using datatype = std::uint8_t;
              static constexpr unsigned int bit_offset = 2;
              static constexpr unsigned int bit_width = 2;
              static constexpr unsigned int bit_mask = 0xc;
          };
          /* Interrupt Enable bit. */
          struct InterruptEnable_f {
              using datatype = bool;
              static constexpr unsigned int bit_offset = 5;
              static constexpr unsigned int bit_width = 1;
              static constexpr unsigned int bit_mask = 0x20;
          };
          /* Timer Mode bit. */
          struct TimerMode_f {
              using datatype = bool;
              static constexpr unsigned int bit_offset = 6;
              static constexpr unsigned int bit_width = 1;
              static constexpr unsigned int bit_mask = 0x40;
          };
          /* Timer Enable Enable bit. */
          struct TimerEnable_f {
              using datatype = bool;
              static constexpr unsigned int bit_offset = 7;
              static constexpr unsigned int bit_width = 1;
              static constexpr unsigned int bit_mask = 0x80;
          };
       } /* TIMER2CONTROL */
       /* Timer 2 Interrupt Clear Register */
       struct TIMER2INTCLR_r {
           using datatype = std::uint32_t;
           static constexpr unsigned int offset = 0x2c;
           static constexpr unsigned int bit_width = 32;
           static constexpr unsigned int field_count = 1;
       }; /* TIMER2INTCLR_r */
       namespace TIMER2INTCLR {
          /* Interrupt */
          struct INT_f {
              using datatype = bool;
              static constexpr unsigned int bit_offset = 0;
              static constexpr unsigned int bit_width = 1;
              static constexpr unsigned int bit_mask = 0x1;
          };
       } /* TIMER2INTCLR */
       /* Timer 2 Raw Interrupt Status Register */
       struct TIMER2RIS_r {
           using datatype = std::uint32_t;
           static constexpr unsigned int offset = 0x30;
           static constexpr unsigned int bit_width = 32;
           static constexpr unsigned int field_count = 1;
       }; /* TIMER2RIS_r */
       namespace TIMER2RIS {
          /* Raw Timer Interrupt */
          struct RIS_f {
              using datatype = bool;
              static constexpr unsigned int bit_offset = 0;
              static constexpr unsigned int bit_width = 1;
              static constexpr unsigned int bit_mask = 0x1;
          };
       } /* TIMER2RIS */
       /* Timer 2 Mask Interrupt Status Register */
       struct TIMER2MIS_r {
           using datatype = std::uint32_t;
           static constexpr unsigned int offset = 0x34;
           static constexpr unsigned int bit_width = 32;
           static constexpr unsigned int field_count = 1;
       }; /* TIMER2MIS_r */
       namespace TIMER2MIS {
          /* Masked Timer Interrupt */
          struct MIS_f {
              using datatype = bool;
              static constexpr unsigned int bit_offset = 0;
              static constexpr unsigned int bit_width = 1;
              static constexpr unsigned int bit_mask = 0x1;
          };
       } /* TIMER2MIS */
       /* Timer 2 Background Load Register */
       struct TIMER2BGLOAD_r {
           using datatype = std::uint32_t;
           static constexpr unsigned int offset = 0x38;
           static constexpr unsigned int bit_width = 32;
           static constexpr unsigned int field_count = 0;
       }; /* TIMER2BGLOAD_r */
    }
}

#endif // DUALTIMER_DEV_HPP