/*
   Register structure definition of peripheral DUALTIMER.
   SPDX-License-Identifier: Unlicense
*/

#ifndef DUALTIMER_MMIO_DEV_HPP
#define DUALTIMER_MMIO_DEV_HPP

#include <cstdint>
#include "mmio_device.hpp"
#include "DUALTIMER_mmio_regs.hpp"

/*   Dual Timer */
template<std::uintptr_t BASE_ADDR> class DUALTIMER_dev  {
public:
    /* Timer 1 Load Register */
   mmio_regs::DUALTIMER::TIMER1LOAD<BASE_ADDR> TIMER1LOAD;
   
    /* Timer 1 Value Register */
   mmio_regs::DUALTIMER::TIMER1VALUE<BASE_ADDR> TIMER1VALUE;
   
    /* Timer 1 Control Register */
   mmio_regs::DUALTIMER::TIMER1CONTROL<BASE_ADDR> TIMER1CONTROL;
   
    /* Timer 1 Interrupt Clear Register */
   mmio_regs::DUALTIMER::TIMER1INTCLR<BASE_ADDR> TIMER1INTCLR;
   
    /* Timer 1 Raw Interrupt Status Register */
   mmio_regs::DUALTIMER::TIMER1RIS<BASE_ADDR> TIMER1RIS;
   
    /* Timer 1 Mask Interrupt Status Register */
   mmio_regs::DUALTIMER::TIMER1MIS<BASE_ADDR> TIMER1MIS;
   
    /* Timer 1 Background Load Register */
   mmio_regs::DUALTIMER::TIMER1BGLOAD<BASE_ADDR> TIMER1BGLOAD;
   
    /* Timer 2 Load Register */
   mmio_regs::DUALTIMER::TIMER2LOAD<BASE_ADDR> TIMER2LOAD;
   
    /* Timer 2 Value Register */
   mmio_regs::DUALTIMER::TIMER2VALUE<BASE_ADDR> TIMER2VALUE;
   
    /* Timer 2 Control Register */
   mmio_regs::DUALTIMER::TIMER2CONTROL<BASE_ADDR> TIMER2CONTROL;
   
    /* Timer 2 Interrupt Clear Register */
   mmio_regs::DUALTIMER::TIMER2INTCLR<BASE_ADDR> TIMER2INTCLR;
   
    /* Timer 2 Raw Interrupt Status Register */
   mmio_regs::DUALTIMER::TIMER2RIS<BASE_ADDR> TIMER2RIS;
   
    /* Timer 2 Mask Interrupt Status Register */
   mmio_regs::DUALTIMER::TIMER2MIS<BASE_ADDR> TIMER2MIS;
   
    /* Timer 2 Background Load Register */
   mmio_regs::DUALTIMER::TIMER2BGLOAD<BASE_ADDR> TIMER2BGLOAD;
   
}; /* DUALTIMER_dev  */

#endif // DUALTIMER_DEV_HPP