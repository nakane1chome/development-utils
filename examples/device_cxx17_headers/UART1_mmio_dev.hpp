/*
   Register structure definition of peripheral UART1.
   SPDX-License-Identifier: Unlicense
*/

#ifndef UART1_MMIO_DEV_HPP
#define UART1_MMIO_DEV_HPP

#include <cstdint>
#include "mmio_device.hpp"
#include "UART1_mmio_regs.hpp"

/*   UART 0 */
template<std::uintptr_t BASE_ADDR> class UART1_dev  {
public:
    /* Recieve and Transmit Data Value */
   mmio_regs::UART1::DATA<BASE_ADDR> DATA;

    /* UART Status Register */
   mmio_regs::UART1::STATE<BASE_ADDR> STATE;

    /* UART Control Register */
   mmio_regs::UART1::CTRL<BASE_ADDR> CTRL;

    /* UART Interrupt Status Register */
   mmio_regs::UART1::INTSTATUS<BASE_ADDR> INTSTATUS;

    /* UART Interrupt CLEAR Register */
   mmio_regs::UART1::INTCLEAR<BASE_ADDR> INTCLEAR;

    /* Baudrate Divider */
   mmio_regs::UART1::BAUDDIV<BASE_ADDR> BAUDDIV;

}; /* UART1_dev  */

#endif // UART1_DEV_HPP
