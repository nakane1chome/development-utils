/*
   Register structure definition of peripheral UART0.
   SPDX-License-Identifier: Unlicense
*/

#ifndef UART0_MMIO_DEV_HPP
#define UART0_MMIO_DEV_HPP

#include <cstdint>
#include "mmio_device.hpp"
#include "UART0_mmio_regs.hpp"

/*   UART 0 */
template<std::uintptr_t BASE_ADDR> class UART0_dev  {
public:
    /* Recieve and Transmit Data Value */
   mmio_regs::UART0::DATA<BASE_ADDR> DATA;

    /* UART Status Register */
   mmio_regs::UART0::STATE<BASE_ADDR> STATE;

    /* UART Control Register */
   mmio_regs::UART0::CTRL<BASE_ADDR> CTRL;

    /* UART Interrupt Status Register */
   mmio_regs::UART0::INTSTATUS<BASE_ADDR> INTSTATUS;

    /* UART Interrupt CLEAR Register */
   mmio_regs::UART0::INTCLEAR<BASE_ADDR> INTCLEAR;

    /* Baudrate Divider */
   mmio_regs::UART0::BAUDDIV<BASE_ADDR> BAUDDIV;

}; /* UART0_dev  */

#endif // UART0_DEV_HPP
