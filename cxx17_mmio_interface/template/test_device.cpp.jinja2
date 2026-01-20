/*
   Simple test program to instanciate and access each device to test compilation.
   SPDX-License-Identifier: Unlicense
*/

#include "{{device.name}}.hpp"
{%- for p in device.peripherals %}
#include "{{p.name}}_mmio_dev.hpp"
{%- endfor%}


int main(void) {
    // Instanciate each peripheral class
{%- for p in device.peripherals %}
   {{p.name}}_dev<base_addr::{{device.name}}::{{p.name}}> {{p.name}}_i;
{%- endfor%}
    // Read and write one register from each peripheral.
{%- for p in device.peripherals %}

{%- set compressed_registers = p.registers | compress_register_array %}

    // Peripheral: {{p.name}}
{%- for r_info in compressed_registers %}
   {%- set r_name = r_info.0 %}
   {%- set r = r_info.1 %}
   {%- set count = r_info.2 %}
   // Register: {{r_name}}
   {%- if count %}
   {{p.name}}_i.{{r_name}}[0].write(1);
   auto {{p.name}}_{{r_name}}_v = {{p.name}}_i.{{r_name}}[0].read();
   {% else %}
   {{p.name}}_i.{{r_name}}.write(1);
   auto {{p.name}}_{{r_name}}_v = {{p.name}}_i.{{r_name}}.read();
   {% endif %}
   {%- for f in r.fields %}
   // Field : {{f.name}}
   {{p.name}}_i.{{r_name}}.{{f.name}}.write(1);
   auto {{p.name}}_{{r_name}}_{{f.name}}_v = {{p.name}}_i.{{r_name}}.{{f.name}}.read();
      {%- break %}
   {%- endfor%}
   {%- break %}
{%- endfor%}
{%- endfor%}

}
