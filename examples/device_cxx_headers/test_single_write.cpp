/*
   Simple test program to instanciate and access each device to test compilation.
   SPDX-License-Identifier: Unlicense
*/

#include "CMSDK_CM3.hpp"
#include "FPGAIO_mmio_dev.hpp"

int main(void) {
    // Instanciate each peripheral class
   FPGAIO_dev<base_addr::CMSDK_CM3::FPGAIO> FPGAIO_i;
    // Peripheral: FPGAIO
    // Register: LED
    // Field : LED0
    FPGAIO_i.LED.LED0.write(1);

}
