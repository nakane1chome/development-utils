/*
   Register and field offset and size definitions for peripheral {{peripheral.name}}.
   SPDX-License-Identifier: Unlicense
*/

#ifndef {{peripheral.name|upper}}_MMIO_PARAMS_HPP
#define {{peripheral.name|upper}}_MMIO_PARAMS_HPP

#include <cstdint>

{%- set compressed_registers = peripheral.registers | compress_register_array %}

namespace mmio_param {
    /* {{peripheral.description}} */
    namespace {{peripheral.name}} {
{%- for r_info in compressed_registers %}
   {%- set r_name = r_info.0 %}
   {%- set r = r_info.1 %}
   {%- set count = r_info.2 %}
       /* {{r.description}} */
       struct {{r_name}}_r {
           using datatype = {{device.width|to_c_type}};
           static constexpr unsigned int offset = {{'0x%x' % r.address_offset}};
           static constexpr unsigned int bit_width = 32;
           static constexpr unsigned int field_count = {{r.fields|length}};
       }; /* {{r_name}}_r */
   {%- if r.fields %}
       namespace {{r_name}} {
   {%- for f in  r.fields %}
          /* {{f.description}} */
          struct {{f.name}}_f {
              using datatype = {{f.bit_width|to_c_type}};
              static constexpr unsigned int bit_offset = {{f.bit_offset}};
              static constexpr unsigned int bit_width = {{f.bit_width}};
              static constexpr unsigned int bit_mask = {{f.bit_offset|format_mask(f.bit_width)}};
          };
    {%- endfor %}
       } /* {{r_name}} */
    {%- endif %}
{%- endfor %}
    }
}

#endif // {{peripheral.name|upper}}_DEV_HPP
