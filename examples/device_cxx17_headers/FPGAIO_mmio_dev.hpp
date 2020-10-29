/*
   Register structure definition of peripheral FPGAIO.
   SPDX-License-Identifier: Unlicense
*/

#ifndef FPGAIO_MMIO_DEV_HPP
#define FPGAIO_MMIO_DEV_HPP

#include <cstdint>
#include "mmio_device.hpp"
#include "FPGAIO_mmio_regs.hpp"

/*   FPGA System Control I/O */
template<std::uintptr_t BASE_ADDR> class FPGAIO_dev  {
public:
    /* LED Connections */
   mmio_regs::FPGAIO::LED<BASE_ADDR> LED;
   
    /* Button Connections */
   mmio_regs::FPGAIO::BUTTON<BASE_ADDR> BUTTON;
   
    /* 1Hz Up Counter */
   mmio_regs::FPGAIO::CLK1HZ<BASE_ADDR> CLK1HZ;
   
    /* 100Hz Up Counter */
   mmio_regs::FPGAIO::CLK100HZ<BASE_ADDR> CLK100HZ;
   
    /* Cycle up counter */
   mmio_regs::FPGAIO::COUNTER<BASE_ADDR> COUNTER;
   
    /* Reload value for prescaler counter */
   mmio_regs::FPGAIO::PRESCALER<BASE_ADDR> PRESCALER;
   
    /* Prescale Counter */
   mmio_regs::FPGAIO::PSCNTR<BASE_ADDR> PSCNTR;
   
    /* Misc. Control */
   mmio_regs::FPGAIO::MISC<BASE_ADDR> MISC;
   
}; /* FPGAIO_dev  */

#endif // FPGAIO_DEV_HPP