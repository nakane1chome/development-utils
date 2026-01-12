# Some quick and dirty filters that are usefull for generating C/C++ code.

def format_mask(bit_offset, bit_width):
    """ Convert a bit offset and width into a mask.
    .e.g bit_offset5, bit_width=4 will convert to 0x1C0
    """
    return "0x%x" % (((1<<bit_width)-1)<<bit_offset)

def to_c_type(bit_width):
    """ Convert a bitwidth to the nearest <stdint.h> type that can hold it.
    """
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
    """ Convert an enumeration description to a literal. Not complete!
    """
    return desc.replace(" ","_").replace("/","_").replace("-","_").lower()

def compress_register_array(registers):
    """ Take and array and compress it by removing duplicates.
    Looks for duplicated names such as foo0, foo1, foo2 etc, and then checks the fields match.
    """
    # Return an array of [register name, register, None or count]
    ret = []
    current_reg = None
    current_reg_name = None
    current_idx = 0
    def split_reg_name(reg):
        try:
            parts = reg['name'].split("_")
            idx = int(parts[-1])
            return reg,"_".join(parts[0:-1]), idx
        except:
            return reg,reg['name'], None
    def format_reg_array(reg_name, reg, idx) :
        if idx == 0:
            # current register, not an array
            return (reg['name'], reg, None)
        else :
            return (reg_name, reg, idx+1)

    idx_registers = [split_reg_name(x) for x in registers]
    for reg, reg_name, idx in idx_registers:
        if idx is None :
            # Save old register
            if current_reg is not None:
                ret.append(format_reg_array(current_reg_name, current_reg, current_idx))
            # New register, not an array
            ret.append((reg['name'], reg, None))
            current_reg = None
        else :
            if (current_reg is None) or (idx==0):
                if current_reg is not None:
                    ret.append(format_reg_array(current_reg_name, current_reg, current_idx))
                # New array?
                current_reg = reg
                current_reg_name = reg_name
                current_idx = idx
            else :
                # Check array is continuing
                #print("%s == %s : %d -> %d" % (current_reg_name,reg_name, current_idx,idx))
                if (current_reg_name == reg_name) and ((current_idx+1)==idx):
                    # keep going
                    current_idx=idx
                else :
                    # Save old
                    ret.append(format_reg_array(current_reg_name, current_reg, current_idx))
                    if idx == 0:
                        # New array
                        current_reg = reg
                        current_reg_name = reg_name
                        current_idx = idx
                    else :
                        current_reg = None
                        # New register, not an array
                        ret.append((reg['name'], reg, None))
    if current_reg is not None:
        ret.append(format_reg_array(current_reg_name, current_reg, current_idx))
    return ret

def setup(env):
    """ Register the filters in this file to the Jinja environment.
    """
    env.filters['to_name'] = to_name
    env.filters['format_mask'] = format_mask
    env.filters['compress_register_array'] = compress_register_array
    env.filters['to_c_type'] = to_c_type
