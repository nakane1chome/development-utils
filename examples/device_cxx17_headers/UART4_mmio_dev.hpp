/*
   Register structure definition of peripheral UART4.
   SPDX-License-Identifier: Unlicense
*/

#ifndef UART4_MMIO_DEV_HPP
#define UART4_MMIO_DEV_HPP

#include <cstdint>
#include "mmio_device.hpp"
#include "UART4_mmio_regs.hpp"

/*   UART 0 */
template<std::uintptr_t BASE_ADDR> class UART4_dev  {
public:
    /* Recieve and Transmit Data Value */
   mmio_regs::UART4::DATA<BASE_ADDR> DATA;

    /* UART Status Register */
   mmio_regs::UART4::STATE<BASE_ADDR> STATE;

    /* UART Control Register */
   mmio_regs::UART4::CTRL<BASE_ADDR> CTRL;

    /* UART Interrupt Status Register */
   mmio_regs::UART4::INTSTATUS<BASE_ADDR> INTSTATUS;

    /* UART Interrupt CLEAR Register */
   mmio_regs::UART4::INTCLEAR<BASE_ADDR> INTCLEAR;

    /* Baudrate Divider */
   mmio_regs::UART4::BAUDDIV<BASE_ADDR> BAUDDIV;

}; /* UART4_dev  */

#endif // UART4_DEV_HPP
