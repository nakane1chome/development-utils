# Some quick and dirty filters that are usefull for generating C/C++ code.

# C reserved keywords that need to be escaped in generated code
C_KEYWORDS = frozenset([
    'auto', 'break', 'case', 'char', 'const', 'continue', 'default', 'do',
    'double', 'else', 'enum', 'extern', 'float', 'for', 'goto', 'if', 'int',
    'long', 'register', 'return', 'short', 'signed', 'sizeof', 'static',
    'struct', 'switch', 'typedef', 'union', 'unsigned', 'void', 'volatile',
    'while', 'inline', 'restrict', '_Bool', '_Complex', '_Imaginary',
    # C++ keywords for safety
    'class', 'public', 'private', 'protected', 'virtual', 'override',
    'template', 'typename', 'namespace', 'using', 'new', 'delete',
    'true', 'false', 'nullptr', 'this', 'throw', 'try', 'catch'
])


def safe_c_name(name):
    """Escape C/C++ reserved keywords by appending '_reg' suffix.

    This filter ensures that SVD register names that conflict with C keywords
    (e.g., 'INT', 'SWITCH') are renamed to be valid C identifiers.
    """
    if name.lower() in C_KEYWORDS:
        return name + '_reg'
    return name


def format_mask(bit_offset, bit_width):
    """Convert a bit offset and width into a mask.
    .e.g bit_offset5, bit_width=4 will convert to 0x1C0
    """
    return "0x%x" % (((1 << bit_width) - 1) << bit_offset)


def to_c_type(bit_width):
    """Convert a bitwidth to the nearest <stdint.h> type that can hold it."""
    if bit_width > 32:
        return "std::uint64_t"
    if bit_width > 16:
        return "std::uint32_t"
    if bit_width > 8:
        return "std::uint16_t"
    if bit_width > 1:
        return "std::uint8_t"
    return "bool"


def to_name(desc):
    """Convert an enumeration description to a literal. Not complete!"""
    return desc.replace(" ", "_").replace("/", "_").replace("-", "_").lower()


def compress_register_array(registers):
    """Take an array and compress it by removing duplicates.
    Looks for duplicated names such as foo_0, foo_1, foo_2 etc, and compresses to foo[3].
    Only forms arrays when indices start from 0 to avoid issues with registers like PFD_480.
    """
    # Filter out registers without names
    registers = [r for r in registers if r.get("name")]

    # Return an array of [register name, register, None or count]
    ret = []
    current_reg = None
    current_reg_name = None
    current_idx = 0

    def split_reg_name(reg):
        """Split register name into base name and index.
        Returns (reg, base_name, index) where index is None if not an array element.
        Only returns an index if it could be part of a zero-based array (0-999).
        """
        try:
            parts = reg["name"].split("_")
            idx = int(parts[-1])
            # Only consider small indices (0-999) as potential array indices
            # Large numbers like 480, 528 are likely part of the register name
            if idx < 1000:
                return reg, "_".join(parts[0:-1]), idx
            else:
                return reg, reg["name"], None
        except Exception:
            return reg, reg["name"], None

    def format_reg_array(reg_name, reg, idx, start_idx):
        """Format a register or array entry.
        Only creates an array if we started from index 0.
        """
        if start_idx != 0:
            # Non-zero start index means this isn't really an array
            return (reg["name"], reg, None)
        if idx == 0:
            # Single register at index 0, not an array
            return (reg["name"], reg, None)
        else:
            return (reg_name, reg, idx + 1)

    idx_registers = [split_reg_name(x) for x in registers]
    start_idx = 0  # Track where the current potential array started

    for reg, reg_name, idx in idx_registers:
        if idx is None:
            # Save old register
            if current_reg is not None:
                ret.append(format_reg_array(current_reg_name, current_reg, current_idx, start_idx))
            # New register, not an array
            ret.append((reg["name"], reg, None))
            current_reg = None
        else:
            if (current_reg is None) or (idx == 0):
                if current_reg is not None:
                    ret.append(format_reg_array(current_reg_name, current_reg, current_idx, start_idx))
                # New array?
                current_reg = reg
                current_reg_name = reg_name
                current_idx = idx
                start_idx = idx  # Remember where this potential array started
            else:
                # Check array is continuing
                if (current_reg_name == reg_name) and ((current_idx + 1) == idx):
                    # keep going
                    current_idx = idx
                else:
                    # Save old
                    ret.append(format_reg_array(current_reg_name, current_reg, current_idx, start_idx))
                    if idx == 0:
                        # New array
                        current_reg = reg
                        current_reg_name = reg_name
                        current_idx = idx
                        start_idx = idx
                    else:
                        current_reg = None
                        # New register, not an array
                        ret.append((reg["name"], reg, None))
    if current_reg is not None:
        ret.append(format_reg_array(current_reg_name, current_reg, current_idx, start_idx))
    return ret


def setup(env):
    """Register the filters in this file to the Jinja environment."""
    env.filters["to_name"] = to_name
    env.filters["format_mask"] = format_mask
    env.filters["compress_register_array"] = compress_register_array
    env.filters["to_c_type"] = to_c_type
    env.filters["safe_c_name"] = safe_c_name
