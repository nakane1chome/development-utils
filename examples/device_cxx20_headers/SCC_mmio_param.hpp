/*
   Register and field offset and size definitions for peripheral SCC.
   SPDX-License-Identifier: Unlicense
*/

#ifndef SCC_MMIO_PARAMS_HPP
#define SCC_MMIO_PARAMS_HPP

#include <cstdint>

namespace mmio_param {
    /* Serial Communication Controller */
    namespace SCC {
       /* None */
       struct CFG_REG0_r {
           using datatype = std::uint32_t;
           static constexpr unsigned int offset = 0x0;
           static constexpr unsigned int bit_width = 32;
           static constexpr unsigned int field_count = 1;
       }; /* CFG_REG0_r */
       namespace CFG_REG0 {
          /* 1 = REMAP Block RAM to ZBT */
          struct REMAP_f {
              using datatype = bool;
              static constexpr unsigned int bit_offset = 0;
              static constexpr unsigned int bit_width = 1;
              static constexpr unsigned int bit_mask = 0x1;
          };
       } /* CFG_REG0 */
       /* None */
       struct CFG_REG1_r {
           using datatype = std::uint32_t;
           static constexpr unsigned int offset = 0x4;
           static constexpr unsigned int bit_width = 32;
           static constexpr unsigned int field_count = 8;
       }; /* CFG_REG1_r */
       namespace CFG_REG1 {
          /* MCC LEDs: 0 = OFF 1 = ON */
          struct MCC_LED7_f {
              using datatype = bool;
              static constexpr unsigned int bit_offset = 7;
              static constexpr unsigned int bit_width = 1;
              static constexpr unsigned int bit_mask = 0x80;
          };
          /* MCC LEDs: 0 = OFF 1 = ON */
          struct MCC_LED6_f {
              using datatype = bool;
              static constexpr unsigned int bit_offset = 6;
              static constexpr unsigned int bit_width = 1;
              static constexpr unsigned int bit_mask = 0x40;
          };
          /* MCC LEDs: 0 = OFF 1 = ON */
          struct MCC_LED5_f {
              using datatype = bool;
              static constexpr unsigned int bit_offset = 5;
              static constexpr unsigned int bit_width = 1;
              static constexpr unsigned int bit_mask = 0x20;
          };
          /* MCC LEDs: 0 = OFF 1 = ON */
          struct MCC_LED4_f {
              using datatype = bool;
              static constexpr unsigned int bit_offset = 4;
              static constexpr unsigned int bit_width = 1;
              static constexpr unsigned int bit_mask = 0x10;
          };
          /* MCC LEDs: 0 = OFF 1 = ON */
          struct MCC_LED3_f {
              using datatype = bool;
              static constexpr unsigned int bit_offset = 3;
              static constexpr unsigned int bit_width = 1;
              static constexpr unsigned int bit_mask = 0x8;
          };
          /* MCC LEDs: 0 = OFF 1 = ON */
          struct MCC_LED2_f {
              using datatype = bool;
              static constexpr unsigned int bit_offset = 2;
              static constexpr unsigned int bit_width = 1;
              static constexpr unsigned int bit_mask = 0x4;
          };
          /* MCC LEDs: 0 = OFF 1 = ON */
          struct MCC_LED1_f {
              using datatype = bool;
              static constexpr unsigned int bit_offset = 1;
              static constexpr unsigned int bit_width = 1;
              static constexpr unsigned int bit_mask = 0x2;
          };
          /* MCC LEDs: 0 = OFF 1 = ON */
          struct MCC_LED0_f {
              using datatype = bool;
              static constexpr unsigned int bit_offset = 0;
              static constexpr unsigned int bit_width = 1;
              static constexpr unsigned int bit_mask = 0x1;
          };
       } /* CFG_REG1 */
       /* None */
       struct CFG_REG2_r {
           using datatype = std::uint32_t;
           static constexpr unsigned int offset = 0x8;
           static constexpr unsigned int bit_width = 32;
           static constexpr unsigned int field_count = 0;
       }; /* CFG_REG2_r */
       /* None */
       struct CFG_REG3_r {
           using datatype = std::uint32_t;
           static constexpr unsigned int offset = 0xc;
           static constexpr unsigned int bit_width = 32;
           static constexpr unsigned int field_count = 8;
       }; /* CFG_REG3_r */
       namespace CFG_REG3 {
          /* MCC SWITCHES: 0 = OFF 1 = ON */
          struct MCC_SWITCHE7_f {
              using datatype = bool;
              static constexpr unsigned int bit_offset = 7;
              static constexpr unsigned int bit_width = 1;
              static constexpr unsigned int bit_mask = 0x80;
          };
          /* MCC SWITCHES: 0 = OFF 1 = ON */
          struct MCC_SWITCHE6_f {
              using datatype = bool;
              static constexpr unsigned int bit_offset = 6;
              static constexpr unsigned int bit_width = 1;
              static constexpr unsigned int bit_mask = 0x40;
          };
          /* MCC SWITCHES: 0 = OFF 1 = ON */
          struct MCC_SWITCHE5_f {
              using datatype = bool;
              static constexpr unsigned int bit_offset = 5;
              static constexpr unsigned int bit_width = 1;
              static constexpr unsigned int bit_mask = 0x20;
          };
          /* MCC SWITCHES: 0 = OFF 1 = ON */
          struct MCC_SWITCHE4_f {
              using datatype = bool;
              static constexpr unsigned int bit_offset = 4;
              static constexpr unsigned int bit_width = 1;
              static constexpr unsigned int bit_mask = 0x10;
          };
          /* MCC SWITCHES: 0 = OFF 1 = ON */
          struct MCC_SWITCHE3_f {
              using datatype = bool;
              static constexpr unsigned int bit_offset = 3;
              static constexpr unsigned int bit_width = 1;
              static constexpr unsigned int bit_mask = 0x8;
          };
          /* MCC SWITCHES: 0 = OFF 1 = ON */
          struct MCC_SWITCHE2_f {
              using datatype = bool;
              static constexpr unsigned int bit_offset = 2;
              static constexpr unsigned int bit_width = 1;
              static constexpr unsigned int bit_mask = 0x4;
          };
          /* MCC SWITCHES: 0 = OFF 1 = ON */
          struct MCC_SWITCHE1_f {
              using datatype = bool;
              static constexpr unsigned int bit_offset = 1;
              static constexpr unsigned int bit_width = 1;
              static constexpr unsigned int bit_mask = 0x2;
          };
          /* MCC SWITCHES: 0 = OFF 1 = ON */
          struct MCC_SWITCHE0_f {
              using datatype = bool;
              static constexpr unsigned int bit_offset = 0;
              static constexpr unsigned int bit_width = 1;
              static constexpr unsigned int bit_mask = 0x1;
          };
       } /* CFG_REG3 */
       /* None */
       struct CFG_REG4_r {
           using datatype = std::uint32_t;
           static constexpr unsigned int offset = 0x10;
           static constexpr unsigned int bit_width = 32;
           static constexpr unsigned int field_count = 1;
       }; /* CFG_REG4_r */
       namespace CFG_REG4 {
          /* Board Revision */
          struct BRDREV_f {
              using datatype = std::uint8_t;
              static constexpr unsigned int bit_offset = 0;
              static constexpr unsigned int bit_width = 4;
              static constexpr unsigned int bit_mask = 0xf;
          };
       } /* CFG_REG4 */
       /* None */
       struct CFG_REG5_r {
           using datatype = std::uint32_t;
           static constexpr unsigned int offset = 0x14;
           static constexpr unsigned int bit_width = 32;
           static constexpr unsigned int field_count = 1;
       }; /* CFG_REG5_r */
       namespace CFG_REG5 {
          /* Debug: 0 = Serial Wire Debug 1 = JTAG */
          struct DEBUG_f {
              using datatype = bool;
              static constexpr unsigned int bit_offset = 5;
              static constexpr unsigned int bit_width = 1;
              static constexpr unsigned int bit_mask = 0x20;
          };
       } /* CFG_REG5 */
       /* None */
       struct CFG_REG6_r {
           using datatype = std::uint32_t;
           static constexpr unsigned int offset = 0x18;
           static constexpr unsigned int bit_width = 32;
           static constexpr unsigned int field_count = 0;
       }; /* CFG_REG6_r */
       /* None */
       struct CFG_REG7_r {
           using datatype = std::uint32_t;
           static constexpr unsigned int offset = 0x1c;
           static constexpr unsigned int bit_width = 32;
           static constexpr unsigned int field_count = 0;
       }; /* CFG_REG7_r */
       /* None */
       struct SYS_CFGDATA_RTN_r {
           using datatype = std::uint32_t;
           static constexpr unsigned int offset = 0xa0;
           static constexpr unsigned int bit_width = 32;
           static constexpr unsigned int field_count = 0;
       }; /* SYS_CFGDATA_RTN_r */
       /* None */
       struct SYS_CFGDATA_OUT_r {
           using datatype = std::uint32_t;
           static constexpr unsigned int offset = 0xa4;
           static constexpr unsigned int bit_width = 32;
           static constexpr unsigned int field_count = 0;
       }; /* SYS_CFGDATA_OUT_r */
       /* None */
       struct SYS_CFGCTRL_r {
           using datatype = std::uint32_t;
           static constexpr unsigned int offset = 0xa8;
           static constexpr unsigned int bit_width = 32;
           static constexpr unsigned int field_count = 4;
       }; /* SYS_CFGCTRL_r */
       namespace SYS_CFGCTRL {
          /* Start: generates interrupt on write to this bit */
          struct START_f {
              using datatype = bool;
              static constexpr unsigned int bit_offset = 31;
              static constexpr unsigned int bit_width = 1;
              static constexpr unsigned int bit_mask = 0x80000000;
          };
          /* Read/Write Access */
          struct RW_ACCESS_f {
              using datatype = bool;
              static constexpr unsigned int bit_offset = 30;
              static constexpr unsigned int bit_width = 1;
              static constexpr unsigned int bit_mask = 0x40000000;
          };
          /* Function Value */
          struct RFUNCVAL_f {
              using datatype = std::uint8_t;
              static constexpr unsigned int bit_offset = 20;
              static constexpr unsigned int bit_width = 6;
              static constexpr unsigned int bit_mask = 0x3f00000;
          };
          /* Device (value of 0/1/2 for supported clocks */
          struct DEVICE_f {
              using datatype = std::uint16_t;
              static constexpr unsigned int bit_offset = 0;
              static constexpr unsigned int bit_width = 12;
              static constexpr unsigned int bit_mask = 0xfff;
          };
       } /* SYS_CFGCTRL */
       /* None */
       struct SYS_CFGSTAT_r {
           using datatype = std::uint32_t;
           static constexpr unsigned int offset = 0xac;
           static constexpr unsigned int bit_width = 32;
           static constexpr unsigned int field_count = 2;
       }; /* SYS_CFGSTAT_r */
       namespace SYS_CFGSTAT {
          /* Error Flag */
          struct ERROR_f {
              using datatype = bool;
              static constexpr unsigned int bit_offset = 1;
              static constexpr unsigned int bit_width = 1;
              static constexpr unsigned int bit_mask = 0x2;
          };
          /* Complete Flag */
          struct COMPLETE_f {
              using datatype = bool;
              static constexpr unsigned int bit_offset = 0;
              static constexpr unsigned int bit_width = 1;
              static constexpr unsigned int bit_mask = 0x1;
          };
       } /* SYS_CFGSTAT */
       /* DLL Lock Register */
       struct DLL_r {
           using datatype = std::uint32_t;
           static constexpr unsigned int offset = 0x100;
           static constexpr unsigned int bit_width = 32;
           static constexpr unsigned int field_count = 3;
       }; /* DLL_r */
       namespace DLL {
          /* Error Flag */
          struct LOCKED_MASKED_f {
              using datatype = std::uint8_t;
              static constexpr unsigned int bit_offset = 24;
              static constexpr unsigned int bit_width = 8;
              static constexpr unsigned int bit_mask = 0xff000000;
          };
          /* Complete Flag */
          struct LOCK_UNLOCK_f {
              using datatype = std::uint8_t;
              static constexpr unsigned int bit_offset = 16;
              static constexpr unsigned int bit_width = 8;
              static constexpr unsigned int bit_mask = 0xff0000;
          };
          /* Complete Flag */
          struct LOCKED_f {
              using datatype = bool;
              static constexpr unsigned int bit_offset = 0;
              static constexpr unsigned int bit_width = 1;
              static constexpr unsigned int bit_mask = 0x1;
          };
       } /* DLL */
       /* None */
       struct AID_r {
           using datatype = std::uint32_t;
           static constexpr unsigned int offset = 0xff8;
           static constexpr unsigned int bit_width = 32;
           static constexpr unsigned int field_count = 3;
       }; /* AID_r */
       namespace AID {
          /* FPGA Build Number */
          struct FPGA_BUILD_f {
              using datatype = std::uint8_t;
              static constexpr unsigned int bit_offset = 24;
              static constexpr unsigned int bit_width = 8;
              static constexpr unsigned int bit_mask = 0xff000000;
          };
          /* V2M-MPS2 target Board Revision (A=0,B=1,C=2) */
          struct MPS2_REV_f {
              using datatype = std::uint8_t;
              static constexpr unsigned int bit_offset = 20;
              static constexpr unsigned int bit_width = 4;
              static constexpr unsigned int bit_mask = 0xf00000;
          };
          /* Number of SCC configuration register */
          struct NUM_CFG_REG_f {
              using datatype = std::uint8_t;
              static constexpr unsigned int bit_offset = 0;
              static constexpr unsigned int bit_width = 8;
              static constexpr unsigned int bit_mask = 0xff;
          };
       } /* AID */
       /* None */
       struct ID_r {
           using datatype = std::uint32_t;
           static constexpr unsigned int offset = 0xffc;
           static constexpr unsigned int bit_width = 32;
           static constexpr unsigned int field_count = 5;
       }; /* ID_r */
       namespace ID {
          /* Implementer ID: 0x41 = ARM */
          struct IMPLEMENTER_ID_f {
              using datatype = std::uint8_t;
              static constexpr unsigned int bit_offset = 24;
              static constexpr unsigned int bit_width = 8;
              static constexpr unsigned int bit_mask = 0xff000000;
          };
          /* Application note IP variant number */
          struct APP_NOTE_VAR_f {
              using datatype = std::uint8_t;
              static constexpr unsigned int bit_offset = 20;
              static constexpr unsigned int bit_width = 4;
              static constexpr unsigned int bit_mask = 0xf00000;
          };
          /* IP Architecture: 0x4 = AHB */
          struct IP_ARCH_f {
              using datatype = std::uint8_t;
              static constexpr unsigned int bit_offset = 16;
              static constexpr unsigned int bit_width = 4;
              static constexpr unsigned int bit_mask = 0xf0000;
          };
          /* Primary Part Number: 383 = AN383 */
          struct PRI_NUM_f {
              using datatype = std::uint8_t;
              static constexpr unsigned int bit_offset = 4;
              static constexpr unsigned int bit_width = 8;
              static constexpr unsigned int bit_mask = 0xff0;
          };
          /* Application note IP revision number */
          struct APP_REV_f {
              using datatype = std::uint8_t;
              static constexpr unsigned int bit_offset = 0;
              static constexpr unsigned int bit_width = 4;
              static constexpr unsigned int bit_mask = 0xf;
          };
       } /* ID */
    }
}

#endif // SCC_DEV_HPP