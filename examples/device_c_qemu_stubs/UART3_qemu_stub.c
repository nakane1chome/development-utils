/*
 * QEMU device model stub for UART3.
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

#include "UART3_regs.h"

#define TYPE_UART3    "uart3"
OBJECT_DECLARE_SIMPLE_TYPE(UART3State, UART3)

/*
 * UART3 device state
 * UART 0
 */
struct UART3State {
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
static uint64_t uart3_read(void *opaque, hwaddr offset, unsigned size)
{
    UART3State *s = UART3(opaque);
    uint64_t value = 0;
    (void)size;  /* Unused */

    switch (offset) {
    case UART3_DATA_OFFSET:
        value = s->data;
        break;
    case UART3_STATE_OFFSET:
        value = s->state;
        break;
    case UART3_CTRL_OFFSET:
        value = s->ctrl;
        break;
    case UART3_INTSTATUS_OFFSET:
        value = s->intstatus;
        break;
    case UART3_BAUDDIV_OFFSET:
        value = s->bauddiv;
        break;
    default:
        qemu_log_mask(LOG_GUEST_ERROR,
                      "UART3: read from unknown register 0x%"HWADDR_PRIx"\n",
                      offset);
        break;
    }

    return value;
}

/*
 * Register write handler
 */
static void uart3_write(void *opaque, hwaddr offset,
                             uint64_t value, unsigned size)
{
    UART3State *s = UART3(opaque);
    (void)size;  /* Unused */

    switch (offset) {
    case UART3_DATA_OFFSET:
        s->data = value & UART3_DATA_MASK;
        break;
    case UART3_STATE_OFFSET:
        s->state = value & UART3_STATE_MASK;
        break;
    case UART3_CTRL_OFFSET:
        s->ctrl = value & UART3_CTRL_MASK;
        break;
    case UART3_INTCLEAR_OFFSET:
        s->intclear = value & UART3_INTCLEAR_MASK;
        break;
    case UART3_BAUDDIV_OFFSET:
        s->bauddiv = value & UART3_BAUDDIV_MASK;
        break;
    default:
        qemu_log_mask(LOG_GUEST_ERROR,
                      "UART3: write to unknown register 0x%"HWADDR_PRIx"\n",
                      offset);
        break;
    }

    /* TODO: Add side-effect handling and interrupt logic here */
}

static const MemoryRegionOps uart3_ops = {
    .read = uart3_read,
    .write = uart3_write,
    .endianness = DEVICE_LITTLE_ENDIAN,
    .impl = {
        .min_access_size = 4,
        .max_access_size = 4,
    },
};

/*
 * Device reset
 */
static void uart3_reset(DeviceState *dev)
{
    UART3State *s = UART3(dev);

    /* Reset all registers to their default values */
    s->data = UART3_DATA_RESET;
    s->state = UART3_STATE_RESET;
    s->ctrl = UART3_CTRL_RESET;
    s->intstatus = UART3_INTSTATUS_RESET;
    s->intclear = UART3_INTCLEAR_RESET;
    s->bauddiv = UART3_BAUDDIV_RESET;
}

/*
 * Device realization
 */
static void uart3_realize(DeviceState *dev, Error **errp)
{
    UART3State *s = UART3(dev);
    SysBusDevice *sbd = SYS_BUS_DEVICE(dev);
    (void)errp;  /* Unused in stub */

    memory_region_init_io(&s->iomem, OBJECT(s), &uart3_ops, s,
                          TYPE_UART3, 0x1000);
    sysbus_init_mmio(sbd, &s->iomem);

    sysbus_init_irq(sbd, &s->irq);
}

/*
 * Device class initialization
 */
static void uart3_class_init(ObjectClass *klass, void *data)
{
    DeviceClass *dc = DEVICE_CLASS(klass);
    (void)data;  /* Unused */

    dc->realize = uart3_realize;
    dc->reset = uart3_reset;
    dc->desc = "UART 0";
}

static const TypeInfo uart3_info = {
    .name          = TYPE_UART3,
    .parent        = TYPE_SYS_BUS_DEVICE,
    .instance_size = sizeof(UART3State),
    .class_init    = uart3_class_init,
};

static void uart3_register_types(void)
{
    type_register_static(&uart3_info);
}

type_init(uart3_register_types)