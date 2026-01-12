/*
   Register structure definition of peripheral UART3.
   SPDX-License-Identifier: Unlicense
*/

#ifndef UART3_MMIO_DEV_HPP
#define UART3_MMIO_DEV_HPP

#include <cstdint>
#include "mmio_device.hpp"
#include "UART3_mmio_regs.hpp"

/*   UART 0 */
template<std::uintptr_t BASE_ADDR> class UART3_dev  {
public:
    /* Recieve and Transmit Data Value */
   mmio_regs::UART3::DATA<BASE_ADDR> DATA;

    /* UART Status Register */
   mmio_regs::UART3::STATE<BASE_ADDR> STATE;

    /* UART Control Register */
   mmio_regs::UART3::CTRL<BASE_ADDR> CTRL;

    /* UART Interrupt Status Register */
   mmio_regs::UART3::INTSTATUS<BASE_ADDR> INTSTATUS;

    /* UART Interrupt CLEAR Register */
   mmio_regs::UART3::INTCLEAR<BASE_ADDR> INTCLEAR;

    /* Baudrate Divider */
   mmio_regs::UART3::BAUDDIV<BASE_ADDR> BAUDDIV;

}; /* UART3_dev  */

#endif // UART3_DEV_HPP
