/*
   Register structure definition of peripheral {{peripheral.name}}.
   SPDX-License-Identifier: Unlicense
*/

#ifndef {{peripheral.name|upper}}_MMIO_DEV_HPP
#define {{peripheral.name|upper}}_MMIO_DEV_HPP

#include <cstdint>
#include "mmio_device.hpp"
#include "{{peripheral.name}}_mmio_regs.hpp"

{%- set compressed_registers = peripheral.registers | compress_register_array %}

/*   {{peripheral.description}} */
template<std::uintptr_t BASE_ADDR> class {{peripheral.name}}_dev  {
public:
{%- for r_info in compressed_registers %}
   {%- set r_name = r_info.0 %}
   {%- set r = r_info.1 %}
   {%- set count = r_info.2 %}
    /* {{r.description}} */
   {%- if count %}
   mmio_regs::{{peripheral.name}}::{{r_name}}<BASE_ADDR> {{r_name}}[{{count}}];
   {% else %}
   mmio_regs::{{peripheral.name}}::{{r_name}}<BASE_ADDR> {{r_name}};
   {% endif %}
{%- endfor %}
}; /* {{peripheral.name}}_dev  */

#endif // {{peripheral.name|upper}}_DEV_HPP
