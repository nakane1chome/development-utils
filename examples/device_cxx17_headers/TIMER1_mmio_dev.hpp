/*
   Register structure definition of peripheral TIMER1.
   SPDX-License-Identifier: Unlicense
*/

#ifndef TIMER1_MMIO_DEV_HPP
#define TIMER1_MMIO_DEV_HPP

#include <cstdint>
#include "mmio_device.hpp"
#include "TIMER1_mmio_regs.hpp"

/*   Timer 0 */
template<std::uintptr_t BASE_ADDR> class TIMER1_dev  {
public:
    /* Control Register */
   mmio_regs::TIMER1::CTRL<BASE_ADDR> CTRL;
   
    /* Current Timer Counter Value */
   mmio_regs::TIMER1::VALUE<BASE_ADDR> VALUE;
   
    /* Counter Reload Value */
   mmio_regs::TIMER1::RELOAD<BASE_ADDR> RELOAD;
   
    /* Timer Interrupt status register */
   mmio_regs::TIMER1::INTSTATUS<BASE_ADDR> INTSTATUS;
   
    /* Timer Interrupt clear register */
   mmio_regs::TIMER1::INTCLEAR<BASE_ADDR> INTCLEAR;
   
}; /* TIMER1_dev  */

#endif // TIMER1_DEV_HPP