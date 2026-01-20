/*
   Register structure definition of peripheral TIMER0.
   SPDX-License-Identifier: Unlicense
*/

#ifndef TIMER0_MMIO_DEV_HPP
#define TIMER0_MMIO_DEV_HPP

#include <cstdint>
#include "mmio_device.hpp"
#include "TIMER0_mmio_regs.hpp"

/*   Timer 0 */
template<std::uintptr_t BASE_ADDR> class TIMER0_dev  {
public:
    /* Control Register */
   mmio_regs::TIMER0::CTRL<BASE_ADDR> CTRL;
   
    /* Current Timer Counter Value */
   mmio_regs::TIMER0::VALUE<BASE_ADDR> VALUE;
   
    /* Counter Reload Value */
   mmio_regs::TIMER0::RELOAD<BASE_ADDR> RELOAD;
   
    /* Timer Interrupt status register */
   mmio_regs::TIMER0::INTSTATUS<BASE_ADDR> INTSTATUS;
   
    /* Timer Interrupt clear register */
   mmio_regs::TIMER0::INTCLEAR<BASE_ADDR> INTCLEAR;
   
}; /* TIMER0_dev  */

#endif // TIMER0_DEV_HPP