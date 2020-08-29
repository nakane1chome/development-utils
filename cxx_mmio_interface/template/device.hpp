/*
   Device base addresss and IRQ definitions for device {{device.name}}.
   Generated from SVD File: {{svd_name}}.
   SPDX-License-Identifier: Unlicense
*/
#ifndef {{device.name|upper}}_DEV_HPP
#define {{device.name|upper}}_DEV_HPP

#include <stdint.h>

namespace base_addr {

    namespace {{device.name}} {
{%- for p in device.peripherals %}
           static constexpr uintptr_t {{"%25s"|format(p.name)}} = {{"0x%08x"|format(p.base_address)}};
{%- endfor%}
    }

}

namespace irq {

    namespace {{device.name}} {
{%- for p in device.peripherals %}
{%- for i in p.interrupts %}
           static constexpr int {{"%25s"|format(p.name+"_"+i.name)}} = {{"0x%03x"|format(i.value)}};
{%-endfor%}
{%-endfor%}
    }
}

#endif // {{device.name|upper}}_DEV_HPP
