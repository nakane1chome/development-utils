/*
   Simple test program to instanciate and access each device to test compilation.
   SPDX-License-Identifier: Unlicense
*/

#include "CMSDK_CM3.hpp"
#include "TIMER0_mmio_dev.hpp"
#include "TIMER1_mmio_dev.hpp"
#include "DUALTIMER_mmio_dev.hpp"
#include "UART0_mmio_dev.hpp"
#include "UART1_mmio_dev.hpp"
#include "UART2_mmio_dev.hpp"
#include "UART3_mmio_dev.hpp"
#include "UART4_mmio_dev.hpp"
#include "GPIO0_mmio_dev.hpp"
#include "GPIO1_mmio_dev.hpp"
#include "SPI_mmio_dev.hpp"
#include "WDT_mmio_dev.hpp"
#include "FPGAIO_mmio_dev.hpp"
#include "SCC_mmio_dev.hpp"


int main(void) {
    // Instanciate each peripheral class
   TIMER0_dev<base_addr::CMSDK_CM3::TIMER0> TIMER0_i;
   TIMER1_dev<base_addr::CMSDK_CM3::TIMER1> TIMER1_i;
   DUALTIMER_dev<base_addr::CMSDK_CM3::DUALTIMER> DUALTIMER_i;
   UART0_dev<base_addr::CMSDK_CM3::UART0> UART0_i;
   UART1_dev<base_addr::CMSDK_CM3::UART1> UART1_i;
   UART2_dev<base_addr::CMSDK_CM3::UART2> UART2_i;
   UART3_dev<base_addr::CMSDK_CM3::UART3> UART3_i;
   UART4_dev<base_addr::CMSDK_CM3::UART4> UART4_i;
   GPIO0_dev<base_addr::CMSDK_CM3::GPIO0> GPIO0_i;
   GPIO1_dev<base_addr::CMSDK_CM3::GPIO1> GPIO1_i;
   SPI_dev<base_addr::CMSDK_CM3::SPI> SPI_i;
   WDT_dev<base_addr::CMSDK_CM3::WDT> WDT_i;
   FPGAIO_dev<base_addr::CMSDK_CM3::FPGAIO> FPGAIO_i;
   SCC_dev<base_addr::CMSDK_CM3::SCC> SCC_i;
    // Read and write one register from each peripheral.

    // Peripheral: TIMER0
   // Register: CTRL
   TIMER0_i.CTRL.write(1);
   auto TIMER0_CTRL_v = TIMER0_i.CTRL.read();
   
   // Field : ENABLE
   TIMER0_i.CTRL.ENABLE.write(1);
   auto TIMER0_CTRL_ENABLE_v = TIMER0_i.CTRL.ENABLE.read();

    // Peripheral: TIMER1
   // Register: CTRL
   TIMER1_i.CTRL.write(1);
   auto TIMER1_CTRL_v = TIMER1_i.CTRL.read();
   
   // Field : ENABLE
   TIMER1_i.CTRL.ENABLE.write(1);
   auto TIMER1_CTRL_ENABLE_v = TIMER1_i.CTRL.ENABLE.read();

    // Peripheral: DUALTIMER
   // Register: TIMER1LOAD
   DUALTIMER_i.TIMER1LOAD.write(1);
   auto DUALTIMER_TIMER1LOAD_v = DUALTIMER_i.TIMER1LOAD.read();
   

    // Peripheral: UART0
   // Register: DATA
   UART0_i.DATA.write(1);
   auto UART0_DATA_v = UART0_i.DATA.read();
   

    // Peripheral: UART1
   // Register: DATA
   UART1_i.DATA.write(1);
   auto UART1_DATA_v = UART1_i.DATA.read();
   

    // Peripheral: UART2
   // Register: DATA
   UART2_i.DATA.write(1);
   auto UART2_DATA_v = UART2_i.DATA.read();
   

    // Peripheral: UART3
   // Register: DATA
   UART3_i.DATA.write(1);
   auto UART3_DATA_v = UART3_i.DATA.read();
   

    // Peripheral: UART4
   // Register: DATA
   UART4_i.DATA.write(1);
   auto UART4_DATA_v = UART4_i.DATA.read();
   

    // Peripheral: GPIO0
   // Register: DATA
   GPIO0_i.DATA.write(1);
   auto GPIO0_DATA_v = GPIO0_i.DATA.read();
   

    // Peripheral: GPIO1
   // Register: DATA
   GPIO1_i.DATA.write(1);
   auto GPIO1_DATA_v = GPIO1_i.DATA.read();
   

    // Peripheral: SPI
   // Register: SPSTAT
   SPI_i.SPSTAT.write(1);
   auto SPI_SPSTAT_v = SPI_i.SPSTAT.read();
   

    // Peripheral: WDT
   // Register: WDOGLOAD
   WDT_i.WDOGLOAD.write(1);
   auto WDT_WDOGLOAD_v = WDT_i.WDOGLOAD.read();
   

    // Peripheral: FPGAIO
   // Register: LED
   FPGAIO_i.LED.write(1);
   auto FPGAIO_LED_v = FPGAIO_i.LED.read();
   
   // Field : LED0
   FPGAIO_i.LED.LED0.write(1);
   auto FPGAIO_LED_LED0_v = FPGAIO_i.LED.LED0.read();

    // Peripheral: SCC
   // Register: CFG_REG0
   SCC_i.CFG_REG0.write(1);
   auto SCC_CFG_REG0_v = SCC_i.CFG_REG0.read();
   
   // Field : REMAP
   SCC_i.CFG_REG0.REMAP.write(1);
   auto SCC_CFG_REG0_REMAP_v = SCC_i.CFG_REG0.REMAP.read();

}