/*
 * QEMU device model stub for GPIO1.
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

#include "GPIO1_regs.h"

#define TYPE_GPIO1    "gpio1"
OBJECT_DECLARE_SIMPLE_TYPE(GPIO1State, GPIO1)

/*
 * GPIO1 device state
 * general-purpose I/O
 */
struct GPIO1State {
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
static uint64_t gpio1_read(void *opaque, hwaddr offset, unsigned size)
{
    GPIO1State *s = GPIO1(opaque);
    uint64_t value = 0;
    (void)size;  /* Unused */

    switch (offset) {
    case GPIO1_DATA_OFFSET:
        value = s->data;
        break;
    case GPIO1_DATAOUT_OFFSET:
        value = s->dataout;
        break;
    case GPIO1_OUTENSET_OFFSET:
        value = s->outenset;
        break;
    case GPIO1_OUTENCLR_OFFSET:
        value = s->outenclr;
        break;
    case GPIO1_ALTFUNCSET_OFFSET:
        value = s->altfuncset;
        break;
    case GPIO1_ALTFUNCCLR_OFFSET:
        value = s->altfuncclr;
        break;
    case GPIO1_INTENSET_OFFSET:
        value = s->intenset;
        break;
    case GPIO1_INTENCLR_OFFSET:
        value = s->intenclr;
        break;
    case GPIO1_INTTYPESET_OFFSET:
        value = s->inttypeset;
        break;
    case GPIO1_INTTYPECLR_OFFSET:
        value = s->inttypeclr;
        break;
    case GPIO1_INTPOLSET_OFFSET:
        value = s->intpolset;
        break;
    case GPIO1_INTPOLCLR_OFFSET:
        value = s->intpolclr;
        break;
    case GPIO1_INTSTATUS_OFFSET:
        value = s->intstatus;
        break;
    default:
        qemu_log_mask(LOG_GUEST_ERROR,
                      "GPIO1: read from unknown register 0x%"HWADDR_PRIx"\n",
                      offset);
        break;
    }

    return value;
}

/*
 * Register write handler
 */
static void gpio1_write(void *opaque, hwaddr offset,
                             uint64_t value, unsigned size)
{
    GPIO1State *s = GPIO1(opaque);
    (void)size;  /* Unused */

    switch (offset) {
    case GPIO1_DATA_OFFSET:
        s->data = value & GPIO1_DATA_MASK;
        break;
    case GPIO1_DATAOUT_OFFSET:
        s->dataout = value & GPIO1_DATAOUT_MASK;
        break;
    case GPIO1_OUTENSET_OFFSET:
        s->outenset = value & GPIO1_OUTENSET_MASK;
        break;
    case GPIO1_OUTENCLR_OFFSET:
        s->outenclr = value & GPIO1_OUTENCLR_MASK;
        break;
    case GPIO1_ALTFUNCSET_OFFSET:
        s->altfuncset = value & GPIO1_ALTFUNCSET_MASK;
        break;
    case GPIO1_ALTFUNCCLR_OFFSET:
        s->altfuncclr = value & GPIO1_ALTFUNCCLR_MASK;
        break;
    case GPIO1_INTENSET_OFFSET:
        s->intenset = value & GPIO1_INTENSET_MASK;
        break;
    case GPIO1_INTENCLR_OFFSET:
        s->intenclr = value & GPIO1_INTENCLR_MASK;
        break;
    case GPIO1_INTTYPESET_OFFSET:
        s->inttypeset = value & GPIO1_INTTYPESET_MASK;
        break;
    case GPIO1_INTTYPECLR_OFFSET:
        s->inttypeclr = value & GPIO1_INTTYPECLR_MASK;
        break;
    case GPIO1_INTPOLSET_OFFSET:
        s->intpolset = value & GPIO1_INTPOLSET_MASK;
        break;
    case GPIO1_INTPOLCLR_OFFSET:
        s->intpolclr = value & GPIO1_INTPOLCLR_MASK;
        break;
    case GPIO1_INTCLEAR_OFFSET:
        /* Write-1-to-clear: clear bits where value has 1s */
        s->intclear &= ~value;
        break;
    default:
        qemu_log_mask(LOG_GUEST_ERROR,
                      "GPIO1: write to unknown register 0x%"HWADDR_PRIx"\n",
                      offset);
        break;
    }

    /* TODO: Add side-effect handling and interrupt logic here */
}

static const MemoryRegionOps gpio1_ops = {
    .read = gpio1_read,
    .write = gpio1_write,
    .endianness = DEVICE_LITTLE_ENDIAN,
    .impl = {
        .min_access_size = 4,
        .max_access_size = 4,
    },
};

/*
 * Device reset
 */
static void gpio1_reset(DeviceState *dev)
{
    GPIO1State *s = GPIO1(dev);

    /* Reset all registers to their default values */
    s->data = GPIO1_DATA_RESET;
    s->dataout = GPIO1_DATAOUT_RESET;
    s->outenset = GPIO1_OUTENSET_RESET;
    s->outenclr = GPIO1_OUTENCLR_RESET;
    s->altfuncset = GPIO1_ALTFUNCSET_RESET;
    s->altfuncclr = GPIO1_ALTFUNCCLR_RESET;
    s->intenset = GPIO1_INTENSET_RESET;
    s->intenclr = GPIO1_INTENCLR_RESET;
    s->inttypeset = GPIO1_INTTYPESET_RESET;
    s->inttypeclr = GPIO1_INTTYPECLR_RESET;
    s->intpolset = GPIO1_INTPOLSET_RESET;
    s->intpolclr = GPIO1_INTPOLCLR_RESET;
    s->intstatus = GPIO1_INTSTATUS_RESET;
    s->intclear = GPIO1_INTCLEAR_RESET;
}

/*
 * Device realization
 */
static void gpio1_realize(DeviceState *dev, Error **errp)
{
    GPIO1State *s = GPIO1(dev);
    SysBusDevice *sbd = SYS_BUS_DEVICE(dev);
    (void)errp;  /* Unused in stub */

    memory_region_init_io(&s->iomem, OBJECT(s), &gpio1_ops, s,
                          TYPE_GPIO1, 0x1000);
    sysbus_init_mmio(sbd, &s->iomem);

    sysbus_init_irq(sbd, &s->irq);
}

/*
 * Device class initialization
 */
static void gpio1_class_init(ObjectClass *klass, void *data)
{
    DeviceClass *dc = DEVICE_CLASS(klass);
    (void)data;  /* Unused */

    dc->realize = gpio1_realize;
    dc->reset = gpio1_reset;
    dc->desc = "general-purpose I/O";
}

static const TypeInfo gpio1_info = {
    .name          = TYPE_GPIO1,
    .parent        = TYPE_SYS_BUS_DEVICE,
    .instance_size = sizeof(GPIO1State),
    .class_init    = gpio1_class_init,
};

static void gpio1_register_types(void)
{
    type_register_static(&gpio1_info);
}

type_init(gpio1_register_types)