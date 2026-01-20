/*
 * QEMU device model stub for UART1.
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

#include "UART1_regs.h"

#define TYPE_UART1    "uart1"
OBJECT_DECLARE_SIMPLE_TYPE(UART1State, UART1)

/*
 * UART1 device state
 * UART 0
 */
struct UART1State {
    /* Parent object */
    SysBusDevice parent_obj;

    /* Memory region for MMIO */
    MemoryRegion iomem;

    /* Interrupt output */
    qemu_irq irq;

    /* Register storage */
    uint8_t data;    /* Recieve and Transmit Data Value */
    uint32_t state;    /* UART Status Register */
    uint32_t ctrl;    /* UART Control Register */
    uint32_t intstatus;    /* UART Interrupt Status Register */
    uint32_t intclear;    /* UART Interrupt CLEAR Register */
    uint32_t bauddiv;    /* Baudrate Divider */
};

/*
 * Register read handler
 */
static uint64_t uart1_read(void *opaque, hwaddr offset, unsigned size)
{
    UART1State *s = UART1(opaque);
    uint64_t value = 0;
    (void)size;  /* Unused */

    switch (offset) {
    case UART1_DATA_OFFSET:
        value = s->data;
        break;
    case UART1_STATE_OFFSET:
        value = s->state;
        break;
    case UART1_CTRL_OFFSET:
        value = s->ctrl;
        break;
    case UART1_INTSTATUS_OFFSET:
        value = s->intstatus;
        break;
    case UART1_BAUDDIV_OFFSET:
        value = s->bauddiv;
        break;
    default:
        qemu_log_mask(LOG_GUEST_ERROR,
                      "UART1: read from unknown register 0x%"HWADDR_PRIx"\n",
                      offset);
        break;
    }

    return value;
}

/*
 * Register write handler
 */
static void uart1_write(void *opaque, hwaddr offset,
                             uint64_t value, unsigned size)
{
    UART1State *s = UART1(opaque);
    (void)size;  /* Unused */

    switch (offset) {
    case UART1_DATA_OFFSET:
        s->data = value & UART1_DATA_MASK;
        break;
    case UART1_STATE_OFFSET:
        s->state = value & UART1_STATE_MASK;
        break;
    case UART1_CTRL_OFFSET:
        s->ctrl = value & UART1_CTRL_MASK;
        break;
    case UART1_INTCLEAR_OFFSET:
        s->intclear = value & UART1_INTCLEAR_MASK;
        break;
    case UART1_BAUDDIV_OFFSET:
        s->bauddiv = value & UART1_BAUDDIV_MASK;
        break;
    default:
        qemu_log_mask(LOG_GUEST_ERROR,
                      "UART1: write to unknown register 0x%"HWADDR_PRIx"\n",
                      offset);
        break;
    }

    /* TODO: Add side-effect handling and interrupt logic here */
}

static const MemoryRegionOps uart1_ops = {
    .read = uart1_read,
    .write = uart1_write,
    .endianness = DEVICE_LITTLE_ENDIAN,
    .impl = {
        .min_access_size = 4,
        .max_access_size = 4,
    },
};

/*
 * Device reset
 */
static void uart1_reset(DeviceState *dev)
{
    UART1State *s = UART1(dev);

    /* Reset all registers to their default values */
    s->data = UART1_DATA_RESET;
    s->state = UART1_STATE_RESET;
    s->ctrl = UART1_CTRL_RESET;
    s->intstatus = UART1_INTSTATUS_RESET;
    s->intclear = UART1_INTCLEAR_RESET;
    s->bauddiv = UART1_BAUDDIV_RESET;
}

/*
 * Device realization
 */
static void uart1_realize(DeviceState *dev, Error **errp)
{
    UART1State *s = UART1(dev);
    SysBusDevice *sbd = SYS_BUS_DEVICE(dev);
    (void)errp;  /* Unused in stub */

    memory_region_init_io(&s->iomem, OBJECT(s), &uart1_ops, s,
                          TYPE_UART1, 0x1000);
    sysbus_init_mmio(sbd, &s->iomem);

    sysbus_init_irq(sbd, &s->irq);
}

/*
 * Device class initialization
 */
static void uart1_class_init(ObjectClass *klass, void *data)
{
    DeviceClass *dc = DEVICE_CLASS(klass);
    (void)data;  /* Unused */

    dc->realize = uart1_realize;
    dc->reset = uart1_reset;
    dc->desc = "UART 0";
}

static const TypeInfo uart1_info = {
    .name          = TYPE_UART1,
    .parent        = TYPE_SYS_BUS_DEVICE,
    .instance_size = sizeof(UART1State),
    .class_init    = uart1_class_init,
};

static void uart1_register_types(void)
{
    type_register_static(&uart1_info);
}

type_init(uart1_register_types)