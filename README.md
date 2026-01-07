# development-utils

Code generation tools for embedded development that use flexible user defined templates to generate from device and interface definition formats or reverse compiling formats.

## Supported Input Formats

- **[SVD (CMSIS System View Description)](https://www.keil.com/pack/doc/CMSIS/SVD/html/index.html)** - XML-based device descriptions from ARM Cortex-M and RISC-V devices
- **[RDL (SystemRDL Register Description)](https://github.com/SystemRDL/systemrdl-compiler)** - Register and address map descriptions for hardware design  
- **[IDL (Interface Definition Language)](https://www.omg.org/spec/IDL/)** - Interface definitions for distributed systems (supports IDL parsed by the [OpenSplice idlpp tool](https://download.zettascale.online/www/docs/OpenSplice/v7/html/ospl/IDLPreProcGuide/commandline.html) and [Bridle parser](https://github.com/iguessthislldo/bridle))
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
- **YAML Processing**: Process device tree and configuration YAML files
- **Objdump Parsing**: Generate documentation from disassembly listings

## Examples

### C++ MMIO Register Access Classes

The project also includes C++ templates for generating MMIO register access classes:

- C++17 MMIO interface in `cxx17_mmio_interface/`
- C++20 MMIO interface in `cxx20_mmio_interface/`

See:
- https://www.shincbm.com/embedded/2020/08/30/cxx-reg-access.html
- https://www.shincbm.com/embedded/2020/08/21/svd-jinja.html

### RISC-V CSR Register Access Classes

Based on this tooling, generation of C, C++ and Rust register access code:

- https://www.five-embeddev.com/code/2020/11/18/csr-access/
- https://github.com/five-embeddev/riscv-csr-access

## Development

Install development dependencies:
```bash
pip install -e ".[dev]"
```

Run tests:
```bash
pytest
```

