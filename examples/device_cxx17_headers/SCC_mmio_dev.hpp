/*
   Register structure definition of peripheral SCC.
   SPDX-License-Identifier: Unlicense
*/

#ifndef SCC_MMIO_DEV_HPP
#define SCC_MMIO_DEV_HPP

#include <cstdint>
#include "mmio_device.hpp"
#include "SCC_mmio_regs.hpp"

/*   Serial Communication Controller */
template<std::uintptr_t BASE_ADDR> class SCC_dev  {
public:
    /* None */
   mmio_regs::SCC::CFG_REG0<BASE_ADDR> CFG_REG0;

    /* None */
   mmio_regs::SCC::CFG_REG1<BASE_ADDR> CFG_REG1;

    /* None */
   mmio_regs::SCC::CFG_REG2<BASE_ADDR> CFG_REG2;

    /* None */
   mmio_regs::SCC::CFG_REG3<BASE_ADDR> CFG_REG3;

    /* None */
   mmio_regs::SCC::CFG_REG4<BASE_ADDR> CFG_REG4;

    /* None */
   mmio_regs::SCC::CFG_REG5<BASE_ADDR> CFG_REG5;

    /* None */
   mmio_regs::SCC::CFG_REG6<BASE_ADDR> CFG_REG6;

    /* None */
   mmio_regs::SCC::CFG_REG7<BASE_ADDR> CFG_REG7;

    /* None */
   mmio_regs::SCC::SYS_CFGDATA_RTN<BASE_ADDR> SYS_CFGDATA_RTN;

    /* None */
   mmio_regs::SCC::SYS_CFGDATA_OUT<BASE_ADDR> SYS_CFGDATA_OUT;

    /* None */
   mmio_regs::SCC::SYS_CFGCTRL<BASE_ADDR> SYS_CFGCTRL;

    /* None */
   mmio_regs::SCC::SYS_CFGSTAT<BASE_ADDR> SYS_CFGSTAT;

    /* DLL Lock Register */
   mmio_regs::SCC::DLL<BASE_ADDR> DLL;

    /* None */
   mmio_regs::SCC::AID<BASE_ADDR> AID;

    /* None */
   mmio_regs::SCC::ID<BASE_ADDR> ID;

}; /* SCC_dev  */

#endif // SCC_DEV_HPP
