/*
   Register structure definition of peripheral GPIO1.
   SPDX-License-Identifier: Unlicense
*/

#ifndef GPIO1_MMIO_DEV_HPP
#define GPIO1_MMIO_DEV_HPP

#include <cstdint>
#include "mmio_device.hpp"
#include "GPIO1_mmio_regs.hpp"

/*   general-purpose I/O */
template<std::uintptr_t BASE_ADDR> class GPIO1_dev  {
public:
    /* Data Register */
   mmio_regs::GPIO1::DATA<BASE_ADDR> DATA;
   
    /* Data Output Register */
   mmio_regs::GPIO1::DATAOUT<BASE_ADDR> DATAOUT;
   
    /* Ouptut enable set Register */
   mmio_regs::GPIO1::OUTENSET<BASE_ADDR> OUTENSET;
   
    /* Ouptut enable clear Register */
   mmio_regs::GPIO1::OUTENCLR<BASE_ADDR> OUTENCLR;
   
    /* Alternate function set Register */
   mmio_regs::GPIO1::ALTFUNCSET<BASE_ADDR> ALTFUNCSET;
   
    /* Alternate function clear Register */
   mmio_regs::GPIO1::ALTFUNCCLR<BASE_ADDR> ALTFUNCCLR;
   
    /* Interrupt enable set Register */
   mmio_regs::GPIO1::INTENSET<BASE_ADDR> INTENSET;
   
    /* Interrupt enable clear Register */
   mmio_regs::GPIO1::INTENCLR<BASE_ADDR> INTENCLR;
   
    /* Interrupt type set Register */
   mmio_regs::GPIO1::INTTYPESET<BASE_ADDR> INTTYPESET;
   
    /* Interrupt type clear Register */
   mmio_regs::GPIO1::INTTYPECLR<BASE_ADDR> INTTYPECLR;
   
    /* Polarity-level, edge interrupt configuration set Register */
   mmio_regs::GPIO1::INTPOLSET<BASE_ADDR> INTPOLSET;
   
    /* Polarity-level, edge interrupt configuration clear Register */
   mmio_regs::GPIO1::INTPOLCLR<BASE_ADDR> INTPOLCLR;
   
    /* Interrupt Status Register */
   mmio_regs::GPIO1::INTSTATUS<BASE_ADDR> INTSTATUS;
   
    /* Interrupt CLEAR Register */
   mmio_regs::GPIO1::INTCLEAR<BASE_ADDR> INTCLEAR;
   
}; /* GPIO1_dev  */

#endif // GPIO1_DEV_HPP