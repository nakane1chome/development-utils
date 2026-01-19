/*
 * QEMU device model stub for UART0.
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

#include "UART0_regs.h"

#define TYPE_UART0    "uart0"
OBJECT_DECLARE_SIMPLE_TYPE(UART0State, UART0)

/*
 * UART0 device state
 * UART 0
 */
struct UART0State {
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
static uint64_t uart0_read(void *opaque, hwaddr offset, unsigned size)
{
    UART0State *s = UART0(opaque);
    uint64_t value = 0;
    (void)size;  /* Unused */

    switch (offset) {
    case UART0_DATA_OFFSET:
        value = s->data;
        break;
    case UART0_STATE_OFFSET:
        value = s->state;
        break;
    case UART0_CTRL_OFFSET:
        value = s->ctrl;
        break;
    case UART0_INTSTATUS_OFFSET:
        value = s->intstatus;
        break;
    case UART0_BAUDDIV_OFFSET:
        value = s->bauddiv;
        break;
    default:
        qemu_log_mask(LOG_GUEST_ERROR,
                      "UART0: read from unknown register 0x%"HWADDR_PRIx"\n",
                      offset);
        break;
    }

    return value;
}

/*
 * Register write handler
 */
static void uart0_write(void *opaque, hwaddr offset,
                             uint64_t value, unsigned size)
{
    UART0State *s = UART0(opaque);
    (void)size;  /* Unused */

    switch (offset) {
    case UART0_DATA_OFFSET:
        s->data = value & UART0_DATA_MASK;
        break;
    case UART0_STATE_OFFSET:
        s->state = value & UART0_STATE_MASK;
        break;
    case UART0_CTRL_OFFSET:
        s->ctrl = value & UART0_CTRL_MASK;
        break;
    case UART0_INTCLEAR_OFFSET:
        s->intclear = value & UART0_INTCLEAR_MASK;
        break;
    case UART0_BAUDDIV_OFFSET:
        s->bauddiv = value & UART0_BAUDDIV_MASK;
        break;
    default:
        qemu_log_mask(LOG_GUEST_ERROR,
                      "UART0: write to unknown register 0x%"HWADDR_PRIx"\n",
                      offset);
        break;
    }

    /* TODO: Add side-effect handling and interrupt logic here */
}

static const MemoryRegionOps uart0_ops = {
    .read = uart0_read,
    .write = uart0_write,
    .endianness = DEVICE_LITTLE_ENDIAN,
    .impl = {
        .min_access_size = 4,
        .max_access_size = 4,
    },
};

/*
 * Device reset
 */
static void uart0_reset(DeviceState *dev)
{
    UART0State *s = UART0(dev);

    /* Reset all registers to their default values */
    s->data = UART0_DATA_RESET;
    s->state = UART0_STATE_RESET;
    s->ctrl = UART0_CTRL_RESET;
    s->intstatus = UART0_INTSTATUS_RESET;
    s->intclear = UART0_INTCLEAR_RESET;
    s->bauddiv = UART0_BAUDDIV_RESET;
}

/*
 * Device realization
 */
static void uart0_realize(DeviceState *dev, Error **errp)
{
    UART0State *s = UART0(dev);
    SysBusDevice *sbd = SYS_BUS_DEVICE(dev);
    (void)errp;  /* Unused in stub */

    memory_region_init_io(&s->iomem, OBJECT(s), &uart0_ops, s,
                          TYPE_UART0, 0x1000);
    sysbus_init_mmio(sbd, &s->iomem);

    sysbus_init_irq(sbd, &s->irq);
}

/*
 * Device class initialization
 */
static void uart0_class_init(ObjectClass *klass, void *data)
{
    DeviceClass *dc = DEVICE_CLASS(klass);
    (void)data;  /* Unused */

    dc->realize = uart0_realize;
    dc->reset = uart0_reset;
    dc->desc = "UART 0";
}

static const TypeInfo uart0_info = {
    .name          = TYPE_UART0,
    .parent        = TYPE_SYS_BUS_DEVICE,
    .instance_size = sizeof(UART0State),
    .class_init    = uart0_class_init,
};

static void uart0_register_types(void)
{
    type_register_static(&uart0_info);
}

type_init(uart0_register_types)