A simple class library for interfacing to MMIO peripherals.

Loosely based on the register access methods and MCAL shown in "Real Time C++" by Christopher Kormanyos.
(https://www.amazon.com/Real-Time-Efficient-Object-Oriented-Microcontroller-Programming/dp/3662478099)

There are two parts.

 - Base classes used to implement registers accesses.
 - Generator templates used to define a device and each register/field.

The generators assume an CMSIS-SVD definition of the registers.

As the bulk of the class library is generated, the client code
does not need a lot of boilerplate. Access is as simple as the
structure method used by CMSIS device definitions. However, the base
address is a template parameter. This has advantages and
disadvantages.

Advantage:: With optimization code can be reduced to simply load
stores, no base pointer needs to be stored or passed as a parameter.

Disadvantage:: Every higher level class that uses these peripheral
classes will need to be a template class.

~~~
#include "CMSDK_CM3.hpp"
#include "DUALTIMER_mmio_dev.hpp"


    DUALTIMER_dev<base_addr::CMSDK_CM3::DUALTIMER> DUALTIMER_i;

    DUALTIMER_i.TIMER1LOAD.write(1);
    auto DUALTIMER_TIMER1LOAD_v = DUALTIMER_i.TIMER1LOAD.read();

~~~


TODO:
 - Add some read/write protection.
 - Make use of ARM Cortex-M bit banding region.
 - Make better use of operators.
