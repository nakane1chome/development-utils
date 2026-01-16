# Filters specific to c_qemu_svd_stubs templates


def to_c_type(bit_width):
    """Convert a bitwidth to the nearest <stdint.h> type that can hold it.

    Uses plain C types (uint32_t) instead of C++ (std::uint32_t).
    """
    if bit_width > 32:
        return "uint64_t"
    if bit_width > 16:
        return "uint32_t"
    if bit_width > 8:
        return "uint16_t"
    if bit_width > 1:
        return "uint8_t"
    return "uint8_t"  # Use uint8_t for bool in C


def get_compressed_registers(peripheral):
    """
    Extract registers from peripheral, filtering out any without names.

    Returns a list of registers ready for compress_register_array filter.

    Usage in templates:
        {%- set compressed_registers = peripheral | get_compressed_registers | compress_register_array %}
    """
    if not peripheral.get('registers'):
        return []

    # Filter registers with defined names
    return [r for r in peripheral['registers'] if r.get('name')]


def setup(env):
    """Register the filters in this file to the Jinja environment."""
    env.filters['to_c_type'] = to_c_type  # Override global C++ version with plain C
    env.filters['get_compressed_registers'] = get_compressed_registers
