/*
 * QEMU device model stub for FPGAIO.
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

#include "FPGAIO_regs.h"

#define TYPE_FPGAIO    "fpgaio"
OBJECT_DECLARE_SIMPLE_TYPE(FPGAIOState, FPGAIO)

/*
 * FPGAIO device state
 * FPGA System Control I/O
 */
struct FPGAIOState {
    /* Parent object */
    SysBusDevice parent_obj;

    /* Memory region for MMIO */
    MemoryRegion iomem;

    /* Interrupt output */
    qemu_irq irq;

    /* Register storage */
    uint32_t led;    /* LED Connections */
    uint32_t button;    /* Button Connections */
    uint32_t clk1hz;    /* 1Hz Up Counter */
    uint32_t clk100hz;    /* 100Hz Up Counter */
    uint32_t counter;    /* Cycle up counter */
    uint32_t prescaler;    /* Reload value for prescaler counter */
    uint32_t pscntr;    /* Prescale Counter */
    uint32_t misc;    /* Misc. Control */
};

/*
 * Register read handler
 */
static uint64_t fpgaio_read(void *opaque, hwaddr offset, unsigned size)
{
    FPGAIOState *s = FPGAIO(opaque);
    uint64_t value = 0;
    (void)size;  /* Unused */

    switch (offset) {
    case FPGAIO_LED_OFFSET:
        value = s->led;
        break;
    case FPGAIO_BUTTON_OFFSET:
        value = s->button;
        break;
    case FPGAIO_CLK1HZ_OFFSET:
        value = s->clk1hz;
        break;
    case FPGAIO_CLK100HZ_OFFSET:
        value = s->clk100hz;
        break;
    case FPGAIO_COUNTER_OFFSET:
        value = s->counter;
        break;
    case FPGAIO_PRESCALER_OFFSET:
        value = s->prescaler;
        break;
    case FPGAIO_PSCNTR_OFFSET:
        value = s->pscntr;
        break;
    case FPGAIO_MISC_OFFSET:
        value = s->misc;
        break;
    default:
        qemu_log_mask(LOG_GUEST_ERROR,
                      "FPGAIO: read from unknown register 0x%"HWADDR_PRIx"\n",
                      offset);
        break;
    }

    return value;
}

/*
 * Register write handler
 */
static void fpgaio_write(void *opaque, hwaddr offset,
                             uint64_t value, unsigned size)
{
    FPGAIOState *s = FPGAIO(opaque);
    (void)size;  /* Unused */

    switch (offset) {
    case FPGAIO_LED_OFFSET:
        s->led = value & FPGAIO_LED_MASK;
        break;
    case FPGAIO_BUTTON_OFFSET:
        s->button = value & FPGAIO_BUTTON_MASK;
        break;
    case FPGAIO_COUNTER_OFFSET:
        s->counter = value & FPGAIO_COUNTER_MASK;
        break;
    case FPGAIO_PRESCALER_OFFSET:
        s->prescaler = value & FPGAIO_PRESCALER_MASK;
        break;
    case FPGAIO_PSCNTR_OFFSET:
        s->pscntr = value & FPGAIO_PSCNTR_MASK;
        break;
    case FPGAIO_MISC_OFFSET:
        s->misc = value & FPGAIO_MISC_MASK;
        break;
    default:
        qemu_log_mask(LOG_GUEST_ERROR,
                      "FPGAIO: write to unknown register 0x%"HWADDR_PRIx"\n",
                      offset);
        break;
    }

    /* TODO: Add side-effect handling and interrupt logic here */
}

static const MemoryRegionOps fpgaio_ops = {
    .read = fpgaio_read,
    .write = fpgaio_write,
    .endianness = DEVICE_LITTLE_ENDIAN,
    .impl = {
        .min_access_size = 4,
        .max_access_size = 4,
    },
};

/*
 * Device reset
 */
static void fpgaio_reset(DeviceState *dev)
{
    FPGAIOState *s = FPGAIO(dev);

    /* Reset all registers to their default values */
    s->led = FPGAIO_LED_RESET;
    s->button = FPGAIO_BUTTON_RESET;
    s->clk1hz = FPGAIO_CLK1HZ_RESET;
    s->clk100hz = FPGAIO_CLK100HZ_RESET;
    s->counter = FPGAIO_COUNTER_RESET;
    s->prescaler = FPGAIO_PRESCALER_RESET;
    s->pscntr = FPGAIO_PSCNTR_RESET;
    s->misc = FPGAIO_MISC_RESET;
}

/*
 * Device realization
 */
static void fpgaio_realize(DeviceState *dev, Error **errp)
{
    FPGAIOState *s = FPGAIO(dev);
    SysBusDevice *sbd = SYS_BUS_DEVICE(dev);
    (void)errp;  /* Unused in stub */

    memory_region_init_io(&s->iomem, OBJECT(s), &fpgaio_ops, s,
                          TYPE_FPGAIO, 0x1000);
    sysbus_init_mmio(sbd, &s->iomem);

    sysbus_init_irq(sbd, &s->irq);
}

/*
 * Device class initialization
 */
static void fpgaio_class_init(ObjectClass *klass, void *data)
{
    DeviceClass *dc = DEVICE_CLASS(klass);
    (void)data;  /* Unused */

    dc->realize = fpgaio_realize;
    dc->reset = fpgaio_reset;
    dc->desc = "FPGA System Control I/O";
}

static const TypeInfo fpgaio_info = {
    .name          = TYPE_FPGAIO,
    .parent        = TYPE_SYS_BUS_DEVICE,
    .instance_size = sizeof(FPGAIOState),
    .class_init    = fpgaio_class_init,
};

static void fpgaio_register_types(void)
{
    type_register_static(&fpgaio_info);
}

type_init(fpgaio_register_types)