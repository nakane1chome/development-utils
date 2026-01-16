# development-utils

Code generation tools for embedded development that use flexible user defined templates to generate from device and interface definition formats or reverse compiling formats.

## Supported Input Formats

- **[SVD (CMSIS System View Description)](https://www.keil.com/pack/doc/CMSIS/SVD/html/index.html)** - XML-based device descriptions from ARM Cortex-M and RISC-V devices
- **[RDL (SystemRDL Register Description)](https://github.com/SystemRDL/systemrdl-compiler)** - Register and address map descriptions for hardware design
- **[IDL (Interface Definition Language)](https://www.omg.org/spec/IDL/)** - Interface definitions for distributed systems (supports IDL parsed by the [OpenSplice idlpp tool](https://download.zettascale.online/www/docs/OpenSplice/v7/html/ospl/IDLPreProcGuide/commandline.html) and [Bridle parser](https://github.com/iguessthislldo/bridle))
- **[DBML (Database Markup Language)](https://dbml.dbdiagram.io/)** - Database schema definitions for generating ORM models, documentation, and migrations
- **[Device Tree (DTS)](https://www.devicetree.org/)** - Hardware description format used in Linux and embedded systems (converted to YAML with dts2yaml)
- **YAML Device Tree** - YAML-based device tree files and configuration data. Example of how to indirectly support Device Tree (DTS) via [YAML](https://www.konsulko.com/yaml-and-device-tree)
- **Objdump Disassembly** - [GNU objdump](https://man7.org/linux/man-pages/man1/objdump.1.html) output for code analysis and documentation generation

## Installation

### From source
```bash
git clone https://github.com/nakane1chome/development-utils.git
cd development-utils
pip install -e .
```

### Install dependencies only
```bash
pip install -r requirements.txt
```

## Tools

This package provides command-line tools for generating code from various embedded development formats:

### SVD (CMSIS System View Description)
```bash
svd-jinja device.svd --templates templates/ --device device_template.html --out-path output/
```

### RDL (SystemRDL Register Description)
```bash
rdl-jinja design.rdl --templates templates/ --component component_template.html --out-path output/
```

### IDL (Interface Definition Language)
```bash
idl-jinja interface.idl --template template.j2 --out output.txt --templates templates/
idl-jinja-bridle interface.idl --template template.j2 --out output.txt --templates templates/
```

### DBML (Database Markup Language)
```bash
dbml-jinja schema.dbml templates/ output/
```

### Device Tree (DTS)
```bash
dts2yaml device.dts -o device.yaml  # Convert DTS to YAML
yaml-jinja device.yaml --template template.j2 --out output.txt --templates templates/
```

### Objdump Disassembly
```bash
objdump-jinja disassembly.txt --template template.j2 --out output.html --templates templates/
```

## Features

- **SVD Templates**: Generate code/documentation from CMSIS-SVD files
- **RDL Templates**: Generate HTML maps and documentation from SystemRDL files
- **IDL Processing**: Parse and generate code from Interface Definition Language files
- **DBML Templates**: Generate SQLAlchemy models, Pydantic schemas, and documentation from database schemas
- **YAML Processing**: Process device tree and configuration YAML files
- **Objdump Parsing**: Generate documentation from disassembly listings

## Template Files

Template files use the **Jinja2 templating engine** and should have the `.jinja2` extension to clearly identify them as templates. For example:

- `device_template.html.jinja2` - Template that generates HTML output
- `peripheral_mmio_regs.hpp.jinja2` - Template that generates C++ header files
- `component_map.html.jinja2` - Template for RDL component maps

When generating output files, the `.jinja2` extension is automatically stripped from the filename. The output filename is derived from the template filename by:
1. Replacing placeholder text (e.g., `device`, `peripheral`, `component`) with actual names
2. Removing the `.jinja2` suffix

**Example:** Template `peripheral_mmio_regs.hpp.jinja2` generates `TIMER0_mmio_regs.hpp`, `UART0_mmio_regs.hpp`, etc.

This convention makes it easy to identify template files while ensuring generated files have the correct extensions for their content type.

## Examples

### Database Schema Code Generation (DBML)

Generate SQLAlchemy models, Pydantic schemas, and documentation from DBML schemas:

```bash
# Generate SQLAlchemy models
dbml-jinja schema.dbml templates/dbml_jinja/sqlalchemy output/models/

# Generate documentation
dbml-jinja schema.dbml templates/dbml_jinja/docs output/docs/
```

Example DBML schema:
```dbml
Table users {
  id varchar [pk]
  username varchar [not null]
  email varchar [unique, not null]
  created_at datetime [not null]
}

Table posts {
  id varchar [pk]
  title varchar [not null]
  user_id varchar [ref: > users.id]
}
```

See `examples/dbml_jinja.sh` and `templates/dbml_jinja/` for complete examples.

### C++ MMIO Register Access Classes

Install `g++-arm-linux-gnueabi` to compile the generated examples and create dissasembly.

~~~
sudo apt-get install `g++-arm-linux-gnueabi`
~~~

The project also includes C++ templates for generating MMIO register access classes:

- C++17 MMIO interface in `cxx17_mmio_interface/`
- C++20 MMIO interface in `cxx20_mmio_interface/`
- C QEMU device stubs in `c_qemu_svd_stubs/`

See:
- https://www.shincbm.com/embedded/2020/08/30/cxx-reg-access.html
- https://www.shincbm.com/embedded/2020/08/21/svd-jinja.html

### RISC-V CSR Register Access Classes

Based on this tooling, generation of C, C++ and Rust register access code:

- https://www.five-embeddev.com/code/2020/11/18/csr-access/
- https://github.com/five-embeddev/riscv-csr-access

### C QEMU Device Model Stubs

Generate plain C code for QEMU device model implementations from SVD files:

```bash
svd-jinja device.svd \
    --templates c_qemu_svd_stubs/template/ \
    --device device.h.jinja2 \
    --peripheral peripheral_regs.h.jinja2 \
    --peripheral peripheral_qemu_stub.c.jinja2 \
    --peripheral peripheral_qemu_stub.h.jinja2 \
    --out-path output/
```

Generated files include:
- `<device>.h` - Device base addresses and IRQ numbers
- `<peripheral>_regs.h` - Register offsets, field masks, and accessor macros
- `<peripheral>_qemu_stub.c` - QEMU device model with read/write handlers
- `<peripheral>_qemu_stub.h` - QEMU device header

The templates use C preprocessor macros instead of C++ constexpr/templates, making them suitable for QEMU's C codebase. See `examples/svd_c_qemu_stubs.sh` for a complete example.

## Development

Install development dependencies:
```bash
pip install -e ".[dev]"
```

Run tests:
```bash
pytest
```
