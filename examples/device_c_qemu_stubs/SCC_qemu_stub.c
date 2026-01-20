/*
 * QEMU device model stub for SCC.
 * Generated from SVD file: CMSDK_CM3.svd.
 * SPDX-License-Identifier: GPL-2.0-or-later
 *
 * This is a generated stub - implement the TODO sections for actual behavior.
 */

#include "qemu/osdep.h"
#include "qemu/log.h"
#include "qemu/module.h"
#include "hw/sysbus.h"
#include "hw/irq.h"
#include "hw/qdev-properties.h"

#include "SCC_regs.h"

#define TYPE_SCC    "scc"
OBJECT_DECLARE_SIMPLE_TYPE(SCCState, SCC)

/*
 * SCC device state
 * Serial Communication Controller
 */
struct SCCState {
    /* Parent object */
    SysBusDevice parent_obj;

    /* Memory region for MMIO */
    MemoryRegion iomem;

    /* Interrupt output */
    qemu_irq irq;

    /* Register storage */
    uint32_t cfg_reg0;    /*  */
    uint32_t cfg_reg1;    /*  */
    uint32_t cfg_reg2;    /*  */
    uint32_t cfg_reg3;    /*  */
    uint32_t cfg_reg4;    /*  */
    uint32_t cfg_reg5;    /*  */
    uint32_t cfg_reg6;    /*  */
    uint32_t cfg_reg7;    /*  */
    uint32_t sys_cfgdata_rtn;    /*  */
    uint32_t sys_cfgdata_out;    /*  */
    uint32_t sys_cfgctrl;    /*  */
    uint32_t sys_cfgstat;    /*  */
    uint32_t dll;    /* DLL Lock Register */
    uint32_t aid;    /*  */
    uint32_t id;    /*  */
};

/*
 * Register read handler
 */
static uint64_t scc_read(void *opaque, hwaddr offset, unsigned size)
{
    SCCState *s = SCC(opaque);
    uint64_t value = 0;
    (void)size;  /* Unused */

    switch (offset) {
    case SCC_CFG_REG0_OFFSET:
        value = s->cfg_reg0;
        break;
    case SCC_CFG_REG1_OFFSET:
        value = s->cfg_reg1;
        break;
    case SCC_CFG_REG2_OFFSET:
        value = s->cfg_reg2;
        break;
    case SCC_CFG_REG3_OFFSET:
        value = s->cfg_reg3;
        break;
    case SCC_CFG_REG4_OFFSET:
        value = s->cfg_reg4;
        break;
    case SCC_CFG_REG5_OFFSET:
        value = s->cfg_reg5;
        break;
    case SCC_CFG_REG6_OFFSET:
        value = s->cfg_reg6;
        break;
    case SCC_CFG_REG7_OFFSET:
        value = s->cfg_reg7;
        break;
    case SCC_SYS_CFGDATA_RTN_OFFSET:
        value = s->sys_cfgdata_rtn;
        break;
    case SCC_SYS_CFGDATA_OUT_OFFSET:
        value = s->sys_cfgdata_out;
        break;
    case SCC_SYS_CFGCTRL_OFFSET:
        value = s->sys_cfgctrl;
        break;
    case SCC_SYS_CFGSTAT_OFFSET:
        value = s->sys_cfgstat;
        break;
    case SCC_DLL_OFFSET:
        value = s->dll;
        break;
    case SCC_AID_OFFSET:
        value = s->aid;
        break;
    case SCC_ID_OFFSET:
        value = s->id;
        break;
    default:
        qemu_log_mask(LOG_GUEST_ERROR,
                      "SCC: read from unknown register 0x%"HWADDR_PRIx"\n",
                      offset);
        break;
    }

    return value;
}

/*
 * Register write handler
 */
static void scc_write(void *opaque, hwaddr offset,
                             uint64_t value, unsigned size)
{
    SCCState *s = SCC(opaque);
    (void)size;  /* Unused */

    switch (offset) {
    case SCC_CFG_REG0_OFFSET:
        s->cfg_reg0 = value & SCC_CFG_REG0_MASK;
        break;
    case SCC_CFG_REG1_OFFSET:
        s->cfg_reg1 = value & SCC_CFG_REG1_MASK;
        break;
    case SCC_CFG_REG5_OFFSET:
        s->cfg_reg5 = value & SCC_CFG_REG5_MASK;
        break;
    case SCC_SYS_CFGDATA_RTN_OFFSET:
        s->sys_cfgdata_rtn = value & SCC_SYS_CFGDATA_RTN_MASK;
        break;
    case SCC_SYS_CFGDATA_OUT_OFFSET:
        s->sys_cfgdata_out = value & SCC_SYS_CFGDATA_OUT_MASK;
        break;
    case SCC_SYS_CFGCTRL_OFFSET:
        s->sys_cfgctrl = value & SCC_SYS_CFGCTRL_MASK;
        break;
    case SCC_SYS_CFGSTAT_OFFSET:
        s->sys_cfgstat = value & SCC_SYS_CFGSTAT_MASK;
        break;
    case SCC_DLL_OFFSET:
        s->dll = value & SCC_DLL_MASK;
        break;
    default:
        qemu_log_mask(LOG_GUEST_ERROR,
                      "SCC: write to unknown register 0x%"HWADDR_PRIx"\n",
                      offset);
        break;
    }

    /* TODO: Add side-effect handling and interrupt logic here */
}

static const MemoryRegionOps scc_ops = {
    .read = scc_read,
    .write = scc_write,
    .endianness = DEVICE_LITTLE_ENDIAN,
    .impl = {
        .min_access_size = 4,
        .max_access_size = 4,
    },
};

/*
 * Device reset
 */
static void scc_reset(DeviceState *dev)
{
    SCCState *s = SCC(dev);

    /* Reset all registers to their default values */
    s->cfg_reg0 = SCC_CFG_REG0_RESET;
    s->cfg_reg1 = SCC_CFG_REG1_RESET;
    s->cfg_reg2 = SCC_CFG_REG2_RESET;
    s->cfg_reg3 = SCC_CFG_REG3_RESET;
    s->cfg_reg4 = SCC_CFG_REG4_RESET;
    s->cfg_reg5 = SCC_CFG_REG5_RESET;
    s->cfg_reg6 = SCC_CFG_REG6_RESET;
    s->cfg_reg7 = SCC_CFG_REG7_RESET;
    s->sys_cfgdata_rtn = SCC_SYS_CFGDATA_RTN_RESET;
    s->sys_cfgdata_out = SCC_SYS_CFGDATA_OUT_RESET;
    s->sys_cfgctrl = SCC_SYS_CFGCTRL_RESET;
    s->sys_cfgstat = SCC_SYS_CFGSTAT_RESET;
    s->dll = SCC_DLL_RESET;
    s->aid = SCC_AID_RESET;
    s->id = SCC_ID_RESET;
}

/*
 * Device realization
 */
static void scc_realize(DeviceState *dev, Error **errp)
{
    SCCState *s = SCC(dev);
    SysBusDevice *sbd = SYS_BUS_DEVICE(dev);
    (void)errp;  /* Unused in stub */

    memory_region_init_io(&s->iomem, OBJECT(s), &scc_ops, s,
                          TYPE_SCC, 0x1000);
    sysbus_init_mmio(sbd, &s->iomem);

    sysbus_init_irq(sbd, &s->irq);
}

/*
 * Device class initialization
 */
static void scc_class_init(ObjectClass *klass, void *data)
{
    DeviceClass *dc = DEVICE_CLASS(klass);
    (void)data;  /* Unused */

    dc->realize = scc_realize;
    dc->reset = scc_reset;
    dc->desc = "Serial Communication Controller";
}

static const TypeInfo scc_info = {
    .name          = TYPE_SCC,
    .parent        = TYPE_SYS_BUS_DEVICE,
    .instance_size = sizeof(SCCState),
    .class_init    = scc_class_init,
};

static void scc_register_types(void)
{
    type_register_static(&scc_info);
}

type_init(scc_register_types)