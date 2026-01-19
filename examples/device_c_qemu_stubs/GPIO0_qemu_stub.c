/*
 * QEMU device model stub for GPIO0.
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

#include "GPIO0_regs.h"

#define TYPE_GPIO0    "gpio0"
OBJECT_DECLARE_SIMPLE_TYPE(GPIO0State, GPIO0)

/*
 * GPIO0 device state
 * general-purpose I/O
 */
struct GPIO0State {
    /* Parent object */
    SysBusDevice parent_obj;

    /* Memory region for MMIO */
    MemoryRegion iomem;

    /* Interrupt output */
    qemu_irq irq;

    /* Register storage */
    uint32_t data;    /* Data Register */
    uint32_t dataout;    /* Data Output Register */
    uint32_t outenset;    /* Ouptut enable set Register */
    uint32_t outenclr;    /* Ouptut enable clear Register */
    uint32_t altfuncset;    /* Alternate function set Register */
    uint32_t altfuncclr;    /* Alternate function clear Register */
    uint32_t intenset;    /* Interrupt enable set Register */
    uint32_t intenclr;    /* Interrupt enable clear Register */
    uint32_t inttypeset;    /* Interrupt type set Register */
    uint32_t inttypeclr;    /* Interrupt type clear Register */
    uint32_t intpolset;    /* Polarity-level, edge interrupt... */
    uint32_t intpolclr;    /* Polarity-level, edge interrupt... */
    uint32_t intstatus;    /* Interrupt Status Register */
    uint32_t intclear;    /* Interrupt CLEAR Register */
};

/*
 * Register read handler
 */
static uint64_t gpio0_read(void *opaque, hwaddr offset, unsigned size)
{
    GPIO0State *s = GPIO0(opaque);
    uint64_t value = 0;
    (void)size;  /* Unused */

    switch (offset) {
    case GPIO0_DATA_OFFSET:
        value = s->data;
        break;
    case GPIO0_DATAOUT_OFFSET:
        value = s->dataout;
        break;
    case GPIO0_OUTENSET_OFFSET:
        value = s->outenset;
        break;
    case GPIO0_OUTENCLR_OFFSET:
        value = s->outenclr;
        break;
    case GPIO0_ALTFUNCSET_OFFSET:
        value = s->altfuncset;
        break;
    case GPIO0_ALTFUNCCLR_OFFSET:
        value = s->altfuncclr;
        break;
    case GPIO0_INTENSET_OFFSET:
        value = s->intenset;
        break;
    case GPIO0_INTENCLR_OFFSET:
        value = s->intenclr;
        break;
    case GPIO0_INTTYPESET_OFFSET:
        value = s->inttypeset;
        break;
    case GPIO0_INTTYPECLR_OFFSET:
        value = s->inttypeclr;
        break;
    case GPIO0_INTPOLSET_OFFSET:
        value = s->intpolset;
        break;
    case GPIO0_INTPOLCLR_OFFSET:
        value = s->intpolclr;
        break;
    case GPIO0_INTSTATUS_OFFSET:
        value = s->intstatus;
        break;
    default:
        qemu_log_mask(LOG_GUEST_ERROR,
                      "GPIO0: read from unknown register 0x%"HWADDR_PRIx"\n",
                      offset);
        break;
    }

    return value;
}

/*
 * Register write handler
 */
static void gpio0_write(void *opaque, hwaddr offset,
                             uint64_t value, unsigned size)
{
    GPIO0State *s = GPIO0(opaque);
    (void)size;  /* Unused */

    switch (offset) {
    case GPIO0_DATA_OFFSET:
        s->data = value & GPIO0_DATA_MASK;
        break;
    case GPIO0_DATAOUT_OFFSET:
        s->dataout = value & GPIO0_DATAOUT_MASK;
        break;
    case GPIO0_OUTENSET_OFFSET:
        s->outenset = value & GPIO0_OUTENSET_MASK;
        break;
    case GPIO0_OUTENCLR_OFFSET:
        s->outenclr = value & GPIO0_OUTENCLR_MASK;
        break;
    case GPIO0_ALTFUNCSET_OFFSET:
        s->altfuncset = value & GPIO0_ALTFUNCSET_MASK;
        break;
    case GPIO0_ALTFUNCCLR_OFFSET:
        s->altfuncclr = value & GPIO0_ALTFUNCCLR_MASK;
        break;
    case GPIO0_INTENSET_OFFSET:
        s->intenset = value & GPIO0_INTENSET_MASK;
        break;
    case GPIO0_INTENCLR_OFFSET:
        s->intenclr = value & GPIO0_INTENCLR_MASK;
        break;
    case GPIO0_INTTYPESET_OFFSET:
        s->inttypeset = value & GPIO0_INTTYPESET_MASK;
        break;
    case GPIO0_INTTYPECLR_OFFSET:
        s->inttypeclr = value & GPIO0_INTTYPECLR_MASK;
        break;
    case GPIO0_INTPOLSET_OFFSET:
        s->intpolset = value & GPIO0_INTPOLSET_MASK;
        break;
    case GPIO0_INTPOLCLR_OFFSET:
        s->intpolclr = value & GPIO0_INTPOLCLR_MASK;
        break;
    case GPIO0_INTCLEAR_OFFSET:
        /* Write-1-to-clear: clear bits where value has 1s */
        s->intclear &= ~value;
        break;
    default:
        qemu_log_mask(LOG_GUEST_ERROR,
                      "GPIO0: write to unknown register 0x%"HWADDR_PRIx"\n",
                      offset);
        break;
    }

    /* TODO: Add side-effect handling and interrupt logic here */
}

static const MemoryRegionOps gpio0_ops = {
    .read = gpio0_read,
    .write = gpio0_write,
    .endianness = DEVICE_LITTLE_ENDIAN,
    .impl = {
        .min_access_size = 4,
        .max_access_size = 4,
    },
};

/*
 * Device reset
 */
static void gpio0_reset(DeviceState *dev)
{
    GPIO0State *s = GPIO0(dev);

    /* Reset all registers to their default values */
    s->data = GPIO0_DATA_RESET;
    s->dataout = GPIO0_DATAOUT_RESET;
    s->outenset = GPIO0_OUTENSET_RESET;
    s->outenclr = GPIO0_OUTENCLR_RESET;
    s->altfuncset = GPIO0_ALTFUNCSET_RESET;
    s->altfuncclr = GPIO0_ALTFUNCCLR_RESET;
    s->intenset = GPIO0_INTENSET_RESET;
    s->intenclr = GPIO0_INTENCLR_RESET;
    s->inttypeset = GPIO0_INTTYPESET_RESET;
    s->inttypeclr = GPIO0_INTTYPECLR_RESET;
    s->intpolset = GPIO0_INTPOLSET_RESET;
    s->intpolclr = GPIO0_INTPOLCLR_RESET;
    s->intstatus = GPIO0_INTSTATUS_RESET;
    s->intclear = GPIO0_INTCLEAR_RESET;
}

/*
 * Device realization
 */
static void gpio0_realize(DeviceState *dev, Error **errp)
{
    GPIO0State *s = GPIO0(dev);
    SysBusDevice *sbd = SYS_BUS_DEVICE(dev);
    (void)errp;  /* Unused in stub */

    memory_region_init_io(&s->iomem, OBJECT(s), &gpio0_ops, s,
                          TYPE_GPIO0, 0x1000);
    sysbus_init_mmio(sbd, &s->iomem);

    sysbus_init_irq(sbd, &s->irq);
}

/*
 * Device class initialization
 */
static void gpio0_class_init(ObjectClass *klass, void *data)
{
    DeviceClass *dc = DEVICE_CLASS(klass);
    (void)data;  /* Unused */

    dc->realize = gpio0_realize;
    dc->reset = gpio0_reset;
    dc->desc = "general-purpose I/O";
}

static const TypeInfo gpio0_info = {
    .name          = TYPE_GPIO0,
    .parent        = TYPE_SYS_BUS_DEVICE,
    .instance_size = sizeof(GPIO0State),
    .class_init    = gpio0_class_init,
};

static void gpio0_register_types(void)
{
    type_register_static(&gpio0_info);
}

type_init(gpio0_register_types)