/*
   Register structure definition of peripheral SPI.
   SPDX-License-Identifier: Unlicense
*/

#ifndef SPI_MMIO_DEV_HPP
#define SPI_MMIO_DEV_HPP

#include <cstdint>
#include "mmio_device.hpp"
#include "SPI_mmio_regs.hpp"

/*   SPI */
template<std::uintptr_t BASE_ADDR> class SPI_dev  {
public:
    /* SPI Status */
   mmio_regs::SPI::SPSTAT<BASE_ADDR> SPSTAT;
   
    /* SPI Data */
   mmio_regs::SPI::SPDAT<BASE_ADDR> SPDAT;
   
    /* SPI Clock Configuration */
   mmio_regs::SPI::SPCLK<BASE_ADDR> SPCLK;
   
    /* SPI Configuration */
   mmio_regs::SPI::SPCON<BASE_ADDR> SPCON;
   
}; /* SPI_dev  */

#endif // SPI_DEV_HPP