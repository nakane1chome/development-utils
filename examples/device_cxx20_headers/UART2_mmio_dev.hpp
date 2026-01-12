/*
   Register structure definition of peripheral UART2.
   SPDX-License-Identifier: Unlicense
*/

#ifndef UART2_MMIO_DEV_HPP
#define UART2_MMIO_DEV_HPP

#include <cstdint>
#include "mmio_device.hpp"
#include "UART2_mmio_regs.hpp"

/*   UART 0 */
template<std::uintptr_t BASE_ADDR> class UART2_dev  {
public:
    /* Recieve and Transmit Data Value */
   mmio_regs::UART2::DATA<BASE_ADDR> DATA;

    /* UART Status Register */
   mmio_regs::UART2::STATE<BASE_ADDR> STATE;

    /* UART Control Register */
   mmio_regs::UART2::CTRL<BASE_ADDR> CTRL;

    /* UART Interrupt Status Register */
   mmio_regs::UART2::INTSTATUS<BASE_ADDR> INTSTATUS;

    /* UART Interrupt CLEAR Register */
   mmio_regs::UART2::INTCLEAR<BASE_ADDR> INTCLEAR;

    /* Baudrate Divider */
   mmio_regs::UART2::BAUDDIV<BASE_ADDR> BAUDDIV;

}; /* UART2_dev  */

#endif // UART2_DEV_HPP
