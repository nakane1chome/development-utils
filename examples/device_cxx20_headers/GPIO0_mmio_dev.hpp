/*
   Register structure definition of peripheral GPIO0.
   SPDX-License-Identifier: Unlicense
*/

#ifndef GPIO0_MMIO_DEV_HPP
#define GPIO0_MMIO_DEV_HPP

#include <cstdint>
#include "mmio_device.hpp"
#include "GPIO0_mmio_regs.hpp"

/*   general-purpose I/O */
template<std::uintptr_t BASE_ADDR> class GPIO0_dev  {
public:
    /* Data Register */
   mmio_regs::GPIO0::DATA<BASE_ADDR> DATA;

    /* Data Output Register */
   mmio_regs::GPIO0::DATAOUT<BASE_ADDR> DATAOUT;

    /* Ouptut enable set Register */
   mmio_regs::GPIO0::OUTENSET<BASE_ADDR> OUTENSET;

    /* Ouptut enable clear Register */
   mmio_regs::GPIO0::OUTENCLR<BASE_ADDR> OUTENCLR;

    /* Alternate function set Register */
   mmio_regs::GPIO0::ALTFUNCSET<BASE_ADDR> ALTFUNCSET;

    /* Alternate function clear Register */
   mmio_regs::GPIO0::ALTFUNCCLR<BASE_ADDR> ALTFUNCCLR;

    /* Interrupt enable set Register */
   mmio_regs::GPIO0::INTENSET<BASE_ADDR> INTENSET;

    /* Interrupt enable clear Register */
   mmio_regs::GPIO0::INTENCLR<BASE_ADDR> INTENCLR;

    /* Interrupt type set Register */
   mmio_regs::GPIO0::INTTYPESET<BASE_ADDR> INTTYPESET;

    /* Interrupt type clear Register */
   mmio_regs::GPIO0::INTTYPECLR<BASE_ADDR> INTTYPECLR;

    /* Polarity-level, edge interrupt configuration set Register */
   mmio_regs::GPIO0::INTPOLSET<BASE_ADDR> INTPOLSET;

    /* Polarity-level, edge interrupt configuration clear Register */
   mmio_regs::GPIO0::INTPOLCLR<BASE_ADDR> INTPOLCLR;

    /* Interrupt Status Register */
   mmio_regs::GPIO0::INTSTATUS<BASE_ADDR> INTSTATUS;

    /* Interrupt CLEAR Register */
   mmio_regs::GPIO0::INTCLEAR<BASE_ADDR> INTCLEAR;

}; /* GPIO0_dev  */

#endif // GPIO0_DEV_HPP
