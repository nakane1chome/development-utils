/*
 * QEMU device model stub for UART2.
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

#include "UART2_regs.h"

#define TYPE_UART2    "uart2"
OBJECT_DECLARE_SIMPLE_TYPE(UART2State, UART2)

/*
 * UART2 device state
 * UART 0
 */
struct UART2State {
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
static uint64_t uart2_read(void *opaque, hwaddr offset, unsigned size)
{
    UART2State *s = UART2(opaque);
    uint64_t value = 0;
    (void)size;  /* Unused */

    switch (offset) {
    case UART2_DATA_OFFSET:
        value = s->data;
        break;
    case UART2_STATE_OFFSET:
        value = s->state;
        break;
    case UART2_CTRL_OFFSET:
        value = s->ctrl;
        break;
    case UART2_INTSTATUS_OFFSET:
        value = s->intstatus;
        break;
    case UART2_BAUDDIV_OFFSET:
        value = s->bauddiv;
        break;
    default:
        qemu_log_mask(LOG_GUEST_ERROR,
                      "UART2: read from unknown register 0x%"HWADDR_PRIx"\n",
                      offset);
        break;
    }

    return value;
}

/*
 * Register write handler
 */
static void uart2_write(void *opaque, hwaddr offset,
                             uint64_t value, unsigned size)
{
    UART2State *s = UART2(opaque);
    (void)size;  /* Unused */

    switch (offset) {
    case UART2_DATA_OFFSET:
        s->data = value & UART2_DATA_MASK;
        break;
    case UART2_STATE_OFFSET:
        s->state = value & UART2_STATE_MASK;
        break;
    case UART2_CTRL_OFFSET:
        s->ctrl = value & UART2_CTRL_MASK;
        break;
    case UART2_INTCLEAR_OFFSET:
        s->intclear = value & UART2_INTCLEAR_MASK;
        break;
    case UART2_BAUDDIV_OFFSET:
        s->bauddiv = value & UART2_BAUDDIV_MASK;
        break;
    default:
        qemu_log_mask(LOG_GUEST_ERROR,
                      "UART2: write to unknown register 0x%"HWADDR_PRIx"\n",
                      offset);
        break;
    }

    /* TODO: Add side-effect handling and interrupt logic here */
}

static const MemoryRegionOps uart2_ops = {
    .read = uart2_read,
    .write = uart2_write,
    .endianness = DEVICE_LITTLE_ENDIAN,
    .impl = {
        .min_access_size = 4,
        .max_access_size = 4,
    },
};

/*
 * Device reset
 */
static void uart2_reset(DeviceState *dev)
{
    UART2State *s = UART2(dev);

    /* Reset all registers to their default values */
    s->data = UART2_DATA_RESET;
    s->state = UART2_STATE_RESET;
    s->ctrl = UART2_CTRL_RESET;
    s->intstatus = UART2_INTSTATUS_RESET;
    s->intclear = UART2_INTCLEAR_RESET;
    s->bauddiv = UART2_BAUDDIV_RESET;
}

/*
 * Device realization
 */
static void uart2_realize(DeviceState *dev, Error **errp)
{
    UART2State *s = UART2(dev);
    SysBusDevice *sbd = SYS_BUS_DEVICE(dev);
    (void)errp;  /* Unused in stub */

    memory_region_init_io(&s->iomem, OBJECT(s), &uart2_ops, s,
                          TYPE_UART2, 0x1000);
    sysbus_init_mmio(sbd, &s->iomem);

    sysbus_init_irq(sbd, &s->irq);
}

/*
 * Device class initialization
 */
static void uart2_class_init(ObjectClass *klass, void *data)
{
    DeviceClass *dc = DEVICE_CLASS(klass);
    (void)data;  /* Unused */

    dc->realize = uart2_realize;
    dc->reset = uart2_reset;
    dc->desc = "UART 0";
}

static const TypeInfo uart2_info = {
    .name          = TYPE_UART2,
    .parent        = TYPE_SYS_BUS_DEVICE,
    .instance_size = sizeof(UART2State),
    .class_init    = uart2_class_init,
};

static void uart2_register_types(void)
{
    type_register_static(&uart2_info);
}

type_init(uart2_register_types)