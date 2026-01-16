# C QEMU SVD Stubs

Generate C code stubs for QEMU device models from CMSIS-SVD definitions.

## Overview

This provides Jinja2 templates to generate C code suitable for QEMU device model
implementations from CMSIS-SVD peripheral descriptions.

The generated code uses C preprocessor macros instead of C++ constexpr/templates,
making it suitable for integration with QEMU's C codebase.

## Directory Structure

- `include/` - Runtime support headers with register access macros
- `template/` - Jinja2 templates for code generation

## Generated Files

For each SVD file, the templates generate:

- `<device>.h` - Device base addresses and IRQ numbers
- `<peripheral>_regs.h` - Register offsets, field masks, and access macros
- `<peripheral>_qemu.c` - QEMU device model stub with read/write callbacks

## Usage

```bash
python -m generators.svd_jinja \
    --template-path c_qemu_svd_stubs/template \
    --include-path c_qemu_svd_stubs/include \
    input.svd output_dir/
```

## Example

Given an SVD file defining a UART peripheral:

```c
#include "uart_regs.h"

// Register offsets
uint32_t val = UART_DR_OFFSET;        // 0x00
uint32_t flags = UART_FR_OFFSET;      // 0x18

// Field access
uint32_t data = UART_DR_DATA_GET(reg_value);
reg_value = UART_DR_DATA_SET(reg_value, new_data);

// Reset values
uint32_t dr_reset = UART_DR_RESET;
```

## Macro Naming Convention

- `<PERIPH>_<REG>_OFFSET` - Register offset from peripheral base
- `<PERIPH>_<REG>_RESET` - Register reset value
- `<PERIPH>_<REG>_MASK` - Register defined bits mask
- `<PERIPH>_<REG>_<FIELD>_SHIFT` - Field bit offset
- `<PERIPH>_<REG>_<FIELD>_WIDTH` - Field bit width
- `<PERIPH>_<REG>_<FIELD>_MASK` - Field mask (shifted)
- `<PERIPH>_<REG>_<FIELD>_GET(val)` - Extract field from register value
- `<PERIPH>_<REG>_<FIELD>_SET(val, field)` - Insert field into register value
