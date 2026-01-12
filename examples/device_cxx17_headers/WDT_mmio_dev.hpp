/*
   Register structure definition of peripheral WDT.
   SPDX-License-Identifier: Unlicense
*/

#ifndef WDT_MMIO_DEV_HPP
#define WDT_MMIO_DEV_HPP

#include <cstdint>
#include "mmio_device.hpp"
#include "WDT_mmio_regs.hpp"

/*   Watchdog Timer */
template<std::uintptr_t BASE_ADDR> class WDT_dev  {
public:
    /* Watchdog Load Register */
   mmio_regs::WDT::WDOGLOAD<BASE_ADDR> WDOGLOAD;

    /* Watchdog Value Register */
   mmio_regs::WDT::WDOGVALUE<BASE_ADDR> WDOGVALUE;

    /* Watchdog Control Register */
   mmio_regs::WDT::WDOGCONTROL<BASE_ADDR> WDOGCONTROL;

    /* Watchdog Interrupt Clear Register */
   mmio_regs::WDT::WDOGINTCLR<BASE_ADDR> WDOGINTCLR;

    /* Watchdog Raw Interrupt Status Register */
   mmio_regs::WDT::WDOGRIS<BASE_ADDR> WDOGRIS;

    /* Watchdog Mask Interrupt Status Register */
   mmio_regs::WDT::WDOGMIS<BASE_ADDR> WDOGMIS;

    /* Watchdog Lock Register */
   mmio_regs::WDT::WDOGLOCK<BASE_ADDR> WDOGLOCK;

}; /* WDT_dev  */

#endif // WDT_DEV_HPP
