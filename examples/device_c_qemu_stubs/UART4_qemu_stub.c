/*
 * QEMU device model stub for UART4.
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

#include "UART4_regs.h"

#define TYPE_UART4    "uart4"
OBJECT_DECLARE_SIMPLE_TYPE(UART4State, UART4)

/*
 * UART4 device state
 * UART 0
 */
struct UART4State {
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
static uint64_t uart4_read(void *opaque, hwaddr offset, unsigned size)
{
    UART4State *s = UART4(opaque);
    uint64_t value = 0;
    (void)size;  /* Unused */

    switch (offset) {
    case UART4_DATA_OFFSET:
        value = s->data;
        break;
    case UART4_STATE_OFFSET:
        value = s->state;
        break;
    case UART4_CTRL_OFFSET:
        value = s->ctrl;
        break;
    case UART4_INTSTATUS_OFFSET:
        value = s->intstatus;
        break;
    case UART4_BAUDDIV_OFFSET:
        value = s->bauddiv;
        break;
    default:
        qemu_log_mask(LOG_GUEST_ERROR,
                      "UART4: read from unknown register 0x%"HWADDR_PRIx"\n",
                      offset);
        break;
    }

    return value;
}

/*
 * Register write handler
 */
static void uart4_write(void *opaque, hwaddr offset,
                             uint64_t value, unsigned size)
{
    UART4State *s = UART4(opaque);
    (void)size;  /* Unused */

    switch (offset) {
    case UART4_DATA_OFFSET:
        s->data = value & UART4_DATA_MASK;
        break;
    case UART4_STATE_OFFSET:
        s->state = value & UART4_STATE_MASK;
        break;
    case UART4_CTRL_OFFSET:
        s->ctrl = value & UART4_CTRL_MASK;
        break;
    case UART4_INTCLEAR_OFFSET:
        s->intclear = value & UART4_INTCLEAR_MASK;
        break;
    case UART4_BAUDDIV_OFFSET:
        s->bauddiv = value & UART4_BAUDDIV_MASK;
        break;
    default:
        qemu_log_mask(LOG_GUEST_ERROR,
                      "UART4: write to unknown register 0x%"HWADDR_PRIx"\n",
                      offset);
        break;
    }

    /* TODO: Add side-effect handling and interrupt logic here */
}

static const MemoryRegionOps uart4_ops = {
    .read = uart4_read,
    .write = uart4_write,
    .endianness = DEVICE_LITTLE_ENDIAN,
    .impl = {
        .min_access_size = 4,
        .max_access_size = 4,
    },
};

/*
 * Device reset
 */
static void uart4_reset(DeviceState *dev)
{
    UART4State *s = UART4(dev);

    /* Reset all registers to their default values */
    s->data = UART4_DATA_RESET;
    s->state = UART4_STATE_RESET;
    s->ctrl = UART4_CTRL_RESET;
    s->intstatus = UART4_INTSTATUS_RESET;
    s->intclear = UART4_INTCLEAR_RESET;
    s->bauddiv = UART4_BAUDDIV_RESET;
}

/*
 * Device realization
 */
static void uart4_realize(DeviceState *dev, Error **errp)
{
    UART4State *s = UART4(dev);
    SysBusDevice *sbd = SYS_BUS_DEVICE(dev);
    (void)errp;  /* Unused in stub */

    memory_region_init_io(&s->iomem, OBJECT(s), &uart4_ops, s,
                          TYPE_UART4, 0x1000);
    sysbus_init_mmio(sbd, &s->iomem);

    sysbus_init_irq(sbd, &s->irq);
}

/*
 * Device class initialization
 */
static void uart4_class_init(ObjectClass *klass, void *data)
{
    DeviceClass *dc = DEVICE_CLASS(klass);
    (void)data;  /* Unused */

    dc->realize = uart4_realize;
    dc->reset = uart4_reset;
    dc->desc = "UART 0";
}

static const TypeInfo uart4_info = {
    .name          = TYPE_UART4,
    .parent        = TYPE_SYS_BUS_DEVICE,
    .instance_size = sizeof(UART4State),
    .class_init    = uart4_class_init,
};

static void uart4_register_types(void)
{
    type_register_static(&uart4_info);
}

type_init(uart4_register_types)