/*
   Register class and field definition for peripheral SCC.
   SPDX-License-Identifier: Unlicense
*/

#ifndef SCC_MMIO_REGS_HPP
#define SCC_MMIO_REGS_HPP

#include <cstdint>
#include "mmio_device.hpp"
#include "SCC_mmio_param.hpp"

namespace mmio_regs {
    /* Serial Communication Controller */
    namespace SCC {
        /* None */
        template<const std::uintptr_t BASE_ADDR> class CFG_REG0
            : public mmio_device::reg<BASE_ADDR,
                                mmio_param::SCC::CFG_REG0_r> {
            public:
            /* 1 = REMAP Block RAM to ZBT */
            mmio_device::reg_field<BASE_ADDR,
                             mmio_param::SCC::CFG_REG0_r,
                             mmio_param::SCC::CFG_REG0::REMAP_f> REMAP;
        }; /* CFG_REG0 */
        /* None */
        template<const std::uintptr_t BASE_ADDR> class CFG_REG1
            : public mmio_device::reg<BASE_ADDR,
                                mmio_param::SCC::CFG_REG1_r> {
            public:
            /* MCC LEDs: 0 = OFF 1 = ON */
            mmio_device::reg_field<BASE_ADDR,
                             mmio_param::SCC::CFG_REG1_r,
                             mmio_param::SCC::CFG_REG1::MCC_LED7_f> MCC_LED7;
            /* MCC LEDs: 0 = OFF 1 = ON */
            mmio_device::reg_field<BASE_ADDR,
                             mmio_param::SCC::CFG_REG1_r,
                             mmio_param::SCC::CFG_REG1::MCC_LED6_f> MCC_LED6;
            /* MCC LEDs: 0 = OFF 1 = ON */
            mmio_device::reg_field<BASE_ADDR,
                             mmio_param::SCC::CFG_REG1_r,
                             mmio_param::SCC::CFG_REG1::MCC_LED5_f> MCC_LED5;
            /* MCC LEDs: 0 = OFF 1 = ON */
            mmio_device::reg_field<BASE_ADDR,
                             mmio_param::SCC::CFG_REG1_r,
                             mmio_param::SCC::CFG_REG1::MCC_LED4_f> MCC_LED4;
            /* MCC LEDs: 0 = OFF 1 = ON */
            mmio_device::reg_field<BASE_ADDR,
                             mmio_param::SCC::CFG_REG1_r,
                             mmio_param::SCC::CFG_REG1::MCC_LED3_f> MCC_LED3;
            /* MCC LEDs: 0 = OFF 1 = ON */
            mmio_device::reg_field<BASE_ADDR,
                             mmio_param::SCC::CFG_REG1_r,
                             mmio_param::SCC::CFG_REG1::MCC_LED2_f> MCC_LED2;
            /* MCC LEDs: 0 = OFF 1 = ON */
            mmio_device::reg_field<BASE_ADDR,
                             mmio_param::SCC::CFG_REG1_r,
                             mmio_param::SCC::CFG_REG1::MCC_LED1_f> MCC_LED1;
            /* MCC LEDs: 0 = OFF 1 = ON */
            mmio_device::reg_field<BASE_ADDR,
                             mmio_param::SCC::CFG_REG1_r,
                             mmio_param::SCC::CFG_REG1::MCC_LED0_f> MCC_LED0;
        }; /* CFG_REG1 */
        /* None */
        template<const std::uintptr_t BASE_ADDR> class CFG_REG2
            : public mmio_device::reg<BASE_ADDR,
                                mmio_param::SCC::CFG_REG2_r> {
        }; /* CFG_REG2 */
        /* None */
        template<const std::uintptr_t BASE_ADDR> class CFG_REG3
            : public mmio_device::reg<BASE_ADDR,
                                mmio_param::SCC::CFG_REG3_r> {
            public:
            /* MCC SWITCHES: 0 = OFF 1 = ON */
            mmio_device::reg_field<BASE_ADDR,
                             mmio_param::SCC::CFG_REG3_r,
                             mmio_param::SCC::CFG_REG3::MCC_SWITCHE7_f> MCC_SWITCHE7;
            /* MCC SWITCHES: 0 = OFF 1 = ON */
            mmio_device::reg_field<BASE_ADDR,
                             mmio_param::SCC::CFG_REG3_r,
                             mmio_param::SCC::CFG_REG3::MCC_SWITCHE6_f> MCC_SWITCHE6;
            /* MCC SWITCHES: 0 = OFF 1 = ON */
            mmio_device::reg_field<BASE_ADDR,
                             mmio_param::SCC::CFG_REG3_r,
                             mmio_param::SCC::CFG_REG3::MCC_SWITCHE5_f> MCC_SWITCHE5;
            /* MCC SWITCHES: 0 = OFF 1 = ON */
            mmio_device::reg_field<BASE_ADDR,
                             mmio_param::SCC::CFG_REG3_r,
                             mmio_param::SCC::CFG_REG3::MCC_SWITCHE4_f> MCC_SWITCHE4;
            /* MCC SWITCHES: 0 = OFF 1 = ON */
            mmio_device::reg_field<BASE_ADDR,
                             mmio_param::SCC::CFG_REG3_r,
                             mmio_param::SCC::CFG_REG3::MCC_SWITCHE3_f> MCC_SWITCHE3;
            /* MCC SWITCHES: 0 = OFF 1 = ON */
            mmio_device::reg_field<BASE_ADDR,
                             mmio_param::SCC::CFG_REG3_r,
                             mmio_param::SCC::CFG_REG3::MCC_SWITCHE2_f> MCC_SWITCHE2;
            /* MCC SWITCHES: 0 = OFF 1 = ON */
            mmio_device::reg_field<BASE_ADDR,
                             mmio_param::SCC::CFG_REG3_r,
                             mmio_param::SCC::CFG_REG3::MCC_SWITCHE1_f> MCC_SWITCHE1;
            /* MCC SWITCHES: 0 = OFF 1 = ON */
            mmio_device::reg_field<BASE_ADDR,
                             mmio_param::SCC::CFG_REG3_r,
                             mmio_param::SCC::CFG_REG3::MCC_SWITCHE0_f> MCC_SWITCHE0;
        }; /* CFG_REG3 */
        /* None */
        template<const std::uintptr_t BASE_ADDR> class CFG_REG4
            : public mmio_device::reg<BASE_ADDR,
                                mmio_param::SCC::CFG_REG4_r> {
            public:
            /* Board Revision */
            mmio_device::reg_field<BASE_ADDR,
                             mmio_param::SCC::CFG_REG4_r,
                             mmio_param::SCC::CFG_REG4::BRDREV_f> BRDREV;
        }; /* CFG_REG4 */
        /* None */
        template<const std::uintptr_t BASE_ADDR> class CFG_REG5
            : public mmio_device::reg<BASE_ADDR,
                                mmio_param::SCC::CFG_REG5_r> {
            public:
            /* Debug: 0 = Serial Wire Debug 1 = JTAG */
            mmio_device::reg_field<BASE_ADDR,
                             mmio_param::SCC::CFG_REG5_r,
                             mmio_param::SCC::CFG_REG5::DEBUG_f> DEBUG;
        }; /* CFG_REG5 */
        /* None */
        template<const std::uintptr_t BASE_ADDR> class CFG_REG6
            : public mmio_device::reg<BASE_ADDR,
                                mmio_param::SCC::CFG_REG6_r> {
        }; /* CFG_REG6 */
        /* None */
        template<const std::uintptr_t BASE_ADDR> class CFG_REG7
            : public mmio_device::reg<BASE_ADDR,
                                mmio_param::SCC::CFG_REG7_r> {
        }; /* CFG_REG7 */
        /* None */
        template<const std::uintptr_t BASE_ADDR> class SYS_CFGDATA_RTN
            : public mmio_device::reg<BASE_ADDR,
                                mmio_param::SCC::SYS_CFGDATA_RTN_r> {
        }; /* SYS_CFGDATA_RTN */
        /* None */
        template<const std::uintptr_t BASE_ADDR> class SYS_CFGDATA_OUT
            : public mmio_device::reg<BASE_ADDR,
                                mmio_param::SCC::SYS_CFGDATA_OUT_r> {
        }; /* SYS_CFGDATA_OUT */
        /* None */
        template<const std::uintptr_t BASE_ADDR> class SYS_CFGCTRL
            : public mmio_device::reg<BASE_ADDR,
                                mmio_param::SCC::SYS_CFGCTRL_r> {
            public:
            /* Start: generates interrupt on write to this bit */
            mmio_device::reg_field<BASE_ADDR,
                             mmio_param::SCC::SYS_CFGCTRL_r,
                             mmio_param::SCC::SYS_CFGCTRL::START_f> START;
            /* Read/Write Access */
            mmio_device::reg_field<BASE_ADDR,
                             mmio_param::SCC::SYS_CFGCTRL_r,
                             mmio_param::SCC::SYS_CFGCTRL::RW_ACCESS_f> RW_ACCESS;
            /* Function Value */
            mmio_device::reg_field<BASE_ADDR,
                             mmio_param::SCC::SYS_CFGCTRL_r,
                             mmio_param::SCC::SYS_CFGCTRL::RFUNCVAL_f> RFUNCVAL;
            /* Device (value of 0/1/2 for supported clocks */
            mmio_device::reg_field<BASE_ADDR,
                             mmio_param::SCC::SYS_CFGCTRL_r,
                             mmio_param::SCC::SYS_CFGCTRL::DEVICE_f> DEVICE;
        }; /* SYS_CFGCTRL */
        /* None */
        template<const std::uintptr_t BASE_ADDR> class SYS_CFGSTAT
            : public mmio_device::reg<BASE_ADDR,
                                mmio_param::SCC::SYS_CFGSTAT_r> {
            public:
            /* Error Flag */
            mmio_device::reg_field<BASE_ADDR,
                             mmio_param::SCC::SYS_CFGSTAT_r,
                             mmio_param::SCC::SYS_CFGSTAT::ERROR_f> ERROR;
            /* Complete Flag */
            mmio_device::reg_field<BASE_ADDR,
                             mmio_param::SCC::SYS_CFGSTAT_r,
                             mmio_param::SCC::SYS_CFGSTAT::COMPLETE_f> COMPLETE;
        }; /* SYS_CFGSTAT */
        /* DLL Lock Register */
        template<const std::uintptr_t BASE_ADDR> class DLL
            : public mmio_device::reg<BASE_ADDR,
                                mmio_param::SCC::DLL_r> {
            public:
            /* Error Flag */
            mmio_device::reg_field<BASE_ADDR,
                             mmio_param::SCC::DLL_r,
                             mmio_param::SCC::DLL::LOCKED_MASKED_f> LOCKED_MASKED;
            /* Complete Flag */
            mmio_device::reg_field<BASE_ADDR,
                             mmio_param::SCC::DLL_r,
                             mmio_param::SCC::DLL::LOCK_UNLOCK_f> LOCK_UNLOCK;
            /* Complete Flag */
            mmio_device::reg_field<BASE_ADDR,
                             mmio_param::SCC::DLL_r,
                             mmio_param::SCC::DLL::LOCKED_f> LOCKED;
        }; /* DLL */
        /* None */
        template<const std::uintptr_t BASE_ADDR> class AID
            : public mmio_device::reg<BASE_ADDR,
                                mmio_param::SCC::AID_r> {
            public:
            /* FPGA Build Number */
            mmio_device::reg_field<BASE_ADDR,
                             mmio_param::SCC::AID_r,
                             mmio_param::SCC::AID::FPGA_BUILD_f> FPGA_BUILD;
            /* V2M-MPS2 target Board Revision (A=0,B=1,C=2) */
            mmio_device::reg_field<BASE_ADDR,
                             mmio_param::SCC::AID_r,
                             mmio_param::SCC::AID::MPS2_REV_f> MPS2_REV;
            /* Number of SCC configuration register */
            mmio_device::reg_field<BASE_ADDR,
                             mmio_param::SCC::AID_r,
                             mmio_param::SCC::AID::NUM_CFG_REG_f> NUM_CFG_REG;
        }; /* AID */
        /* None */
        template<const std::uintptr_t BASE_ADDR> class ID
            : public mmio_device::reg<BASE_ADDR,
                                mmio_param::SCC::ID_r> {
            public:
            /* Implementer ID: 0x41 = ARM */
            mmio_device::reg_field<BASE_ADDR,
                             mmio_param::SCC::ID_r,
                             mmio_param::SCC::ID::IMPLEMENTER_ID_f> IMPLEMENTER_ID;
            /* Application note IP variant number */
            mmio_device::reg_field<BASE_ADDR,
                             mmio_param::SCC::ID_r,
                             mmio_param::SCC::ID::APP_NOTE_VAR_f> APP_NOTE_VAR;
            /* IP Architecture: 0x4 = AHB */
            mmio_device::reg_field<BASE_ADDR,
                             mmio_param::SCC::ID_r,
                             mmio_param::SCC::ID::IP_ARCH_f> IP_ARCH;
            /* Primary Part Number: 383 = AN383 */
            mmio_device::reg_field<BASE_ADDR,
                             mmio_param::SCC::ID_r,
                             mmio_param::SCC::ID::PRI_NUM_f> PRI_NUM;
            /* Application note IP revision number */
            mmio_device::reg_field<BASE_ADDR,
                             mmio_param::SCC::ID_r,
                             mmio_param::SCC::ID::APP_REV_f> APP_REV;
        }; /* ID */
    } /* SCC */
} /* mmio_regs */

#endif // SCC_DEV_HPP
