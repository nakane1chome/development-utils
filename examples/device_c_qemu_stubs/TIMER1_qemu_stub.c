/*
 * QEMU device model stub for TIMER1.
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

#include "TIMER1_regs.h"

#define TYPE_TIMER1    "timer1"
OBJECT_DECLARE_SIMPLE_TYPE(TIMER1State, TIMER1)

/*
 * TIMER1 device state
 * Timer 0
 */
struct TIMER1State {
    /* Parent object */
    SysBusDevice parent_obj;

    /* Memory region for MMIO */
    MemoryRegion iomem;

    /* Interrupt output */
    qemu_irq irq;

    /* Register storage */
    uint32_t ctrl;    /* Control Register */
    uint32_t value;    /* Current Timer Counter Value */
    uint32_t reload;    /* Counter Reload Value */
    uint32_t intstatus;    /* Timer Interrupt status register */
    uint32_t intclear;    /* Timer Interrupt clear register */
};

/*
 * Register read handler
 */
static uint64_t timer1_read(void *opaque, hwaddr offset, unsigned size)
{
    TIMER1State *s = TIMER1(opaque);
    uint64_t value = 0;
    (void)size;  /* Unused */

    switch (offset) {
    case TIMER1_CTRL_OFFSET:
        value = s->ctrl;
        break;
    case TIMER1_VALUE_OFFSET:
        value = s->value;
        break;
    case TIMER1_RELOAD_OFFSET:
        value = s->reload;
        break;
    case TIMER1_INTSTATUS_OFFSET:
        value = s->intstatus;
        break;
    default:
        qemu_log_mask(LOG_GUEST_ERROR,
                      "TIMER1: read from unknown register 0x%"HWADDR_PRIx"\n",
                      offset);
        break;
    }

    return value;
}

/*
 * Register write handler
 */
static void timer1_write(void *opaque, hwaddr offset,
                             uint64_t value, unsigned size)
{
    TIMER1State *s = TIMER1(opaque);
    (void)size;  /* Unused */

    switch (offset) {
    case TIMER1_CTRL_OFFSET:
        s->ctrl = value & TIMER1_CTRL_MASK;
        break;
    case TIMER1_VALUE_OFFSET:
        s->value = value & TIMER1_VALUE_MASK;
        break;
    case TIMER1_RELOAD_OFFSET:
        s->reload = value & TIMER1_RELOAD_MASK;
        break;
    case TIMER1_INTCLEAR_OFFSET:
        /* Write-1-to-clear: clear bits where value has 1s */
        s->intclear &= ~value;
        break;
    default:
        qemu_log_mask(LOG_GUEST_ERROR,
                      "TIMER1: write to unknown register 0x%"HWADDR_PRIx"\n",
                      offset);
        break;
    }

    /* TODO: Add side-effect handling and interrupt logic here */
}

static const MemoryRegionOps timer1_ops = {
    .read = timer1_read,
    .write = timer1_write,
    .endianness = DEVICE_LITTLE_ENDIAN,
    .impl = {
        .min_access_size = 4,
        .max_access_size = 4,
    },
};

/*
 * Device reset
 */
static void timer1_reset(DeviceState *dev)
{
    TIMER1State *s = TIMER1(dev);

    /* Reset all registers to their default values */
    s->ctrl = TIMER1_CTRL_RESET;
    s->value = TIMER1_VALUE_RESET;
    s->reload = TIMER1_RELOAD_RESET;
    s->intstatus = TIMER1_INTSTATUS_RESET;
    s->intclear = TIMER1_INTCLEAR_RESET;
}

/*
 * Device realization
 */
static void timer1_realize(DeviceState *dev, Error **errp)
{
    TIMER1State *s = TIMER1(dev);
    SysBusDevice *sbd = SYS_BUS_DEVICE(dev);
    (void)errp;  /* Unused in stub */

    memory_region_init_io(&s->iomem, OBJECT(s), &timer1_ops, s,
                          TYPE_TIMER1, 0x1000);
    sysbus_init_mmio(sbd, &s->iomem);

    sysbus_init_irq(sbd, &s->irq);
}

/*
 * Device class initialization
 */
static void timer1_class_init(ObjectClass *klass, void *data)
{
    DeviceClass *dc = DEVICE_CLASS(klass);
    (void)data;  /* Unused */

    dc->realize = timer1_realize;
    dc->reset = timer1_reset;
    dc->desc = "Timer 0";
}

static const TypeInfo timer1_info = {
    .name          = TYPE_TIMER1,
    .parent        = TYPE_SYS_BUS_DEVICE,
    .instance_size = sizeof(TIMER1State),
    .class_init    = timer1_class_init,
};

static void timer1_register_types(void)
{
    type_register_static(&timer1_info);
}

type_init(timer1_register_types)