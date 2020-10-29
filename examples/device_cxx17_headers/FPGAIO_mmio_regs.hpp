/*
   Register class and field definition for peripheral FPGAIO.
   SPDX-License-Identifier: Unlicense
*/

#ifndef FPGAIO_MMIO_REGS_HPP
#define FPGAIO_MMIO_REGS_HPP

#include <cstdint>
#include "mmio_device.hpp"
#include "FPGAIO_mmio_param.hpp"

namespace mmio_regs {
    /* FPGA System Control I/O */
    namespace FPGAIO {
        /* LED Connections */
        template<const std::uintptr_t BASE_ADDR> class LED 
            : public mmio_device::reg<BASE_ADDR, 
                                mmio_param::FPGAIO::LED_r> {
            public:
            /* None */
            mmio_device::reg_field<BASE_ADDR, 
                             mmio_param::FPGAIO::LED_r,
                             mmio_param::FPGAIO::LED::LED0_f> LED0;
            /* None */
            mmio_device::reg_field<BASE_ADDR, 
                             mmio_param::FPGAIO::LED_r,
                             mmio_param::FPGAIO::LED::LED1_f> LED1;
        }; /* LED */
        /* Button Connections */
        template<const std::uintptr_t BASE_ADDR> class BUTTON 
            : public mmio_device::reg<BASE_ADDR, 
                                mmio_param::FPGAIO::BUTTON_r> {
            public:
            /* None */
            mmio_device::reg_field<BASE_ADDR, 
                             mmio_param::FPGAIO::BUTTON_r,
                             mmio_param::FPGAIO::BUTTON::BUTTON0_f> BUTTON0;
            /* None */
            mmio_device::reg_field<BASE_ADDR, 
                             mmio_param::FPGAIO::BUTTON_r,
                             mmio_param::FPGAIO::BUTTON::BUTTON1_f> BUTTON1;
        }; /* BUTTON */
        /* 1Hz Up Counter */
        template<const std::uintptr_t BASE_ADDR> class CLK1HZ 
            : public mmio_device::reg<BASE_ADDR, 
                                mmio_param::FPGAIO::CLK1HZ_r> {
        }; /* CLK1HZ */
        /* 100Hz Up Counter */
        template<const std::uintptr_t BASE_ADDR> class CLK100HZ 
            : public mmio_device::reg<BASE_ADDR, 
                                mmio_param::FPGAIO::CLK100HZ_r> {
        }; /* CLK100HZ */
        /* Cycle up counter */
        template<const std::uintptr_t BASE_ADDR> class COUNTER 
            : public mmio_device::reg<BASE_ADDR, 
                                mmio_param::FPGAIO::COUNTER_r> {
        }; /* COUNTER */
        /* Reload value for prescaler counter */
        template<const std::uintptr_t BASE_ADDR> class PRESCALER 
            : public mmio_device::reg<BASE_ADDR, 
                                mmio_param::FPGAIO::PRESCALER_r> {
        }; /* PRESCALER */
        /* Prescale Counter */
        template<const std::uintptr_t BASE_ADDR> class PSCNTR 
            : public mmio_device::reg<BASE_ADDR, 
                                mmio_param::FPGAIO::PSCNTR_r> {
        }; /* PSCNTR */
        /* Misc. Control */
        template<const std::uintptr_t BASE_ADDR> class MISC 
            : public mmio_device::reg<BASE_ADDR, 
                                mmio_param::FPGAIO::MISC_r> {
            public:
            /* None */
            mmio_device::reg_field<BASE_ADDR, 
                             mmio_param::FPGAIO::MISC_r,
                             mmio_param::FPGAIO::MISC::SHIELD1_SPI_nCS_f> SHIELD1_SPI_nCS;
            /* None */
            mmio_device::reg_field<BASE_ADDR, 
                             mmio_param::FPGAIO::MISC_r,
                             mmio_param::FPGAIO::MISC::SHIELD0_SPI_nCS_f> SHIELD0_SPI_nCS;
            /* None */
            mmio_device::reg_field<BASE_ADDR, 
                             mmio_param::FPGAIO::MISC_r,
                             mmio_param::FPGAIO::MISC::ADC_SPI_nCS_f> ADC_SPI_nCS;
            /* None */
            mmio_device::reg_field<BASE_ADDR, 
                             mmio_param::FPGAIO::MISC_r,
                             mmio_param::FPGAIO::MISC::CLCD_BL_CTRL_f> CLCD_BL_CTRL;
            /* None */
            mmio_device::reg_field<BASE_ADDR, 
                             mmio_param::FPGAIO::MISC_r,
                             mmio_param::FPGAIO::MISC::CLCD_RD_f> CLCD_RD;
            /* None */
            mmio_device::reg_field<BASE_ADDR, 
                             mmio_param::FPGAIO::MISC_r,
                             mmio_param::FPGAIO::MISC::CLCD_RS_f> CLCD_RS;
            /* None */
            mmio_device::reg_field<BASE_ADDR, 
                             mmio_param::FPGAIO::MISC_r,
                             mmio_param::FPGAIO::MISC::CLCD_RESET_f> CLCD_RESET;
            /* None */
            mmio_device::reg_field<BASE_ADDR, 
                             mmio_param::FPGAIO::MISC_r,
                             mmio_param::FPGAIO::MISC::SPI_nSS_f> SPI_nSS;
            /* None */
            mmio_device::reg_field<BASE_ADDR, 
                             mmio_param::FPGAIO::MISC_r,
                             mmio_param::FPGAIO::MISC::CLCD_CS_f> CLCD_CS;
        }; /* MISC */
    } /* FPGAIO */
} /* mmio_regs */

#endif // FPGAIO_DEV_HPP