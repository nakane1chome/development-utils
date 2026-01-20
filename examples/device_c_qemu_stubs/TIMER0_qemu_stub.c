/*
 * QEMU device model stub for TIMER0.
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

#include "TIMER0_regs.h"

#define TYPE_TIMER0    "timer0"
OBJECT_DECLARE_SIMPLE_TYPE(TIMER0State, TIMER0)

/*
 * TIMER0 device state
 * Timer 0
 */
struct TIMER0State {
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
static uint64_t timer0_read(void *opaque, hwaddr offset, unsigned size)
{
    TIMER0State *s = TIMER0(opaque);
    uint64_t value = 0;
    (void)size;  /* Unused */

    switch (offset) {
    case TIMER0_CTRL_OFFSET:
        value = s->ctrl;
        break;
    case TIMER0_VALUE_OFFSET:
        value = s->value;
        break;
    case TIMER0_RELOAD_OFFSET:
        value = s->reload;
        break;
    case TIMER0_INTSTATUS_OFFSET:
        value = s->intstatus;
        break;
    default:
        qemu_log_mask(LOG_GUEST_ERROR,
                      "TIMER0: read from unknown register 0x%"HWADDR_PRIx"\n",
                      offset);
        break;
    }

    return value;
}

/*
 * Register write handler
 */
static void timer0_write(void *opaque, hwaddr offset,
                             uint64_t value, unsigned size)
{
    TIMER0State *s = TIMER0(opaque);
    (void)size;  /* Unused */

    switch (offset) {
    case TIMER0_CTRL_OFFSET:
        s->ctrl = value & TIMER0_CTRL_MASK;
        break;
    case TIMER0_VALUE_OFFSET:
        s->value = value & TIMER0_VALUE_MASK;
        break;
    case TIMER0_RELOAD_OFFSET:
        s->reload = value & TIMER0_RELOAD_MASK;
        break;
    case TIMER0_INTCLEAR_OFFSET:
        /* Write-1-to-clear: clear bits where value has 1s */
        s->intclear &= ~value;
        break;
    default:
        qemu_log_mask(LOG_GUEST_ERROR,
                      "TIMER0: write to unknown register 0x%"HWADDR_PRIx"\n",
                      offset);
        break;
    }

    /* TODO: Add side-effect handling and interrupt logic here */
}

static const MemoryRegionOps timer0_ops = {
    .read = timer0_read,
    .write = timer0_write,
    .endianness = DEVICE_LITTLE_ENDIAN,
    .impl = {
        .min_access_size = 4,
        .max_access_size = 4,
    },
};

/*
 * Device reset
 */
static void timer0_reset(DeviceState *dev)
{
    TIMER0State *s = TIMER0(dev);

    /* Reset all registers to their default values */
    s->ctrl = TIMER0_CTRL_RESET;
    s->value = TIMER0_VALUE_RESET;
    s->reload = TIMER0_RELOAD_RESET;
    s->intstatus = TIMER0_INTSTATUS_RESET;
    s->intclear = TIMER0_INTCLEAR_RESET;
}

/*
 * Device realization
 */
static void timer0_realize(DeviceState *dev, Error **errp)
{
    TIMER0State *s = TIMER0(dev);
    SysBusDevice *sbd = SYS_BUS_DEVICE(dev);
    (void)errp;  /* Unused in stub */

    memory_region_init_io(&s->iomem, OBJECT(s), &timer0_ops, s,
                          TYPE_TIMER0, 0x1000);
    sysbus_init_mmio(sbd, &s->iomem);

    sysbus_init_irq(sbd, &s->irq);
}

/*
 * Device class initialization
 */
static void timer0_class_init(ObjectClass *klass, void *data)
{
    DeviceClass *dc = DEVICE_CLASS(klass);
    (void)data;  /* Unused */

    dc->realize = timer0_realize;
    dc->reset = timer0_reset;
    dc->desc = "Timer 0";
}

static const TypeInfo timer0_info = {
    .name          = TYPE_TIMER0,
    .parent        = TYPE_SYS_BUS_DEVICE,
    .instance_size = sizeof(TIMER0State),
    .class_init    = timer0_class_init,
};

static void timer0_register_types(void)
{
    type_register_static(&timer0_info);
}

type_init(timer0_register_types)