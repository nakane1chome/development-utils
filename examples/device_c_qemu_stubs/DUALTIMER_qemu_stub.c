/*
 * QEMU device model stub for DUALTIMER.
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

#include "DUALTIMER_regs.h"

#define TYPE_DUALTIMER    "dualtimer"
OBJECT_DECLARE_SIMPLE_TYPE(DUALTIMERState, DUALTIMER)

/*
 * DUALTIMER device state
 * Dual Timer
 */
struct DUALTIMERState {
    /* Parent object */
    SysBusDevice parent_obj;

    /* Memory region for MMIO */
    MemoryRegion iomem;

    /* Interrupt output */
    qemu_irq irq;

    /* Register storage */
    uint32_t timer1load;    /* Timer 1 Load Register */
    uint32_t timer1value;    /* Timer 1 Value Register */
    uint32_t timer1control;    /* Timer 1 Control Register */
    uint32_t timer1intclr;    /* Timer 1 Interrupt Clear Register */
    uint32_t timer1ris;    /* Timer 1 Raw Interrupt Status Register */
    uint32_t timer1mis;    /* Timer 1 Mask Interrupt Status Register */
    uint32_t timer1bgload;    /* Timer 1 Background Load Register */
    uint32_t timer2load;    /* Timer 2 Load Register */
    uint32_t timer2value;    /* Timer 2 Value Register */
    uint32_t timer2control;    /* Timer 2 Control Register */
    uint32_t timer2intclr;    /* Timer 2 Interrupt Clear Register */
    uint32_t timer2ris;    /* Timer 2 Raw Interrupt Status Register */
    uint32_t timer2mis;    /* Timer 2 Mask Interrupt Status Register */
    uint32_t timer2bgload;    /* Timer 2 Background Load Register */
};

/*
 * Register read handler
 */
static uint64_t dualtimer_read(void *opaque, hwaddr offset, unsigned size)
{
    DUALTIMERState *s = DUALTIMER(opaque);
    uint64_t value = 0;
    (void)size;  /* Unused */

    switch (offset) {
    case DUALTIMER_TIMER1LOAD_OFFSET:
        value = s->timer1load;
        break;
    case DUALTIMER_TIMER1VALUE_OFFSET:
        value = s->timer1value;
        break;
    case DUALTIMER_TIMER1CONTROL_OFFSET:
        value = s->timer1control;
        break;
    case DUALTIMER_TIMER1RIS_OFFSET:
        value = s->timer1ris;
        break;
    case DUALTIMER_TIMER1MIS_OFFSET:
        value = s->timer1mis;
        break;
    case DUALTIMER_TIMER1BGLOAD_OFFSET:
        value = s->timer1bgload;
        break;
    case DUALTIMER_TIMER2LOAD_OFFSET:
        value = s->timer2load;
        break;
    case DUALTIMER_TIMER2VALUE_OFFSET:
        value = s->timer2value;
        break;
    case DUALTIMER_TIMER2CONTROL_OFFSET:
        value = s->timer2control;
        break;
    case DUALTIMER_TIMER2RIS_OFFSET:
        value = s->timer2ris;
        break;
    case DUALTIMER_TIMER2MIS_OFFSET:
        value = s->timer2mis;
        break;
    case DUALTIMER_TIMER2BGLOAD_OFFSET:
        value = s->timer2bgload;
        break;
    default:
        qemu_log_mask(LOG_GUEST_ERROR,
                      "DUALTIMER: read from unknown register 0x%"HWADDR_PRIx"\n",
                      offset);
        break;
    }

    return value;
}

/*
 * Register write handler
 */
static void dualtimer_write(void *opaque, hwaddr offset,
                             uint64_t value, unsigned size)
{
    DUALTIMERState *s = DUALTIMER(opaque);
    (void)size;  /* Unused */

    switch (offset) {
    case DUALTIMER_TIMER1LOAD_OFFSET:
        s->timer1load = value & DUALTIMER_TIMER1LOAD_MASK;
        break;
    case DUALTIMER_TIMER1CONTROL_OFFSET:
        s->timer1control = value & DUALTIMER_TIMER1CONTROL_MASK;
        break;
    case DUALTIMER_TIMER1INTCLR_OFFSET:
        s->timer1intclr = value & DUALTIMER_TIMER1INTCLR_MASK;
        break;
    case DUALTIMER_TIMER1BGLOAD_OFFSET:
        s->timer1bgload = value & DUALTIMER_TIMER1BGLOAD_MASK;
        break;
    case DUALTIMER_TIMER2LOAD_OFFSET:
        s->timer2load = value & DUALTIMER_TIMER2LOAD_MASK;
        break;
    case DUALTIMER_TIMER2CONTROL_OFFSET:
        s->timer2control = value & DUALTIMER_TIMER2CONTROL_MASK;
        break;
    case DUALTIMER_TIMER2INTCLR_OFFSET:
        s->timer2intclr = value & DUALTIMER_TIMER2INTCLR_MASK;
        break;
    case DUALTIMER_TIMER2BGLOAD_OFFSET:
        s->timer2bgload = value & DUALTIMER_TIMER2BGLOAD_MASK;
        break;
    default:
        qemu_log_mask(LOG_GUEST_ERROR,
                      "DUALTIMER: write to unknown register 0x%"HWADDR_PRIx"\n",
                      offset);
        break;
    }

    /* TODO: Add side-effect handling and interrupt logic here */
}

static const MemoryRegionOps dualtimer_ops = {
    .read = dualtimer_read,
    .write = dualtimer_write,
    .endianness = DEVICE_LITTLE_ENDIAN,
    .impl = {
        .min_access_size = 4,
        .max_access_size = 4,
    },
};

/*
 * Device reset
 */
static void dualtimer_reset(DeviceState *dev)
{
    DUALTIMERState *s = DUALTIMER(dev);

    /* Reset all registers to their default values */
    s->timer1load = DUALTIMER_TIMER1LOAD_RESET;
    s->timer1value = DUALTIMER_TIMER1VALUE_RESET;
    s->timer1control = DUALTIMER_TIMER1CONTROL_RESET;
    s->timer1intclr = DUALTIMER_TIMER1INTCLR_RESET;
    s->timer1ris = DUALTIMER_TIMER1RIS_RESET;
    s->timer1mis = DUALTIMER_TIMER1MIS_RESET;
    s->timer1bgload = DUALTIMER_TIMER1BGLOAD_RESET;
    s->timer2load = DUALTIMER_TIMER2LOAD_RESET;
    s->timer2value = DUALTIMER_TIMER2VALUE_RESET;
    s->timer2control = DUALTIMER_TIMER2CONTROL_RESET;
    s->timer2intclr = DUALTIMER_TIMER2INTCLR_RESET;
    s->timer2ris = DUALTIMER_TIMER2RIS_RESET;
    s->timer2mis = DUALTIMER_TIMER2MIS_RESET;
    s->timer2bgload = DUALTIMER_TIMER2BGLOAD_RESET;
}

/*
 * Device realization
 */
static void dualtimer_realize(DeviceState *dev, Error **errp)
{
    DUALTIMERState *s = DUALTIMER(dev);
    SysBusDevice *sbd = SYS_BUS_DEVICE(dev);
    (void)errp;  /* Unused in stub */

    memory_region_init_io(&s->iomem, OBJECT(s), &dualtimer_ops, s,
                          TYPE_DUALTIMER, 0x1000);
    sysbus_init_mmio(sbd, &s->iomem);

    sysbus_init_irq(sbd, &s->irq);
}

/*
 * Device class initialization
 */
static void dualtimer_class_init(ObjectClass *klass, void *data)
{
    DeviceClass *dc = DEVICE_CLASS(klass);
    (void)data;  /* Unused */

    dc->realize = dualtimer_realize;
    dc->reset = dualtimer_reset;
    dc->desc = "Dual Timer";
}

static const TypeInfo dualtimer_info = {
    .name          = TYPE_DUALTIMER,
    .parent        = TYPE_SYS_BUS_DEVICE,
    .instance_size = sizeof(DUALTIMERState),
    .class_init    = dualtimer_class_init,
};

static void dualtimer_register_types(void)
{
    type_register_static(&dualtimer_info);
}

type_init(dualtimer_register_types)