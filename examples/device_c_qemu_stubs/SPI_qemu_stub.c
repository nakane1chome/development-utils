/*
 * QEMU device model stub for SPI.
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

#include "SPI_regs.h"

#define TYPE_SPI    "spi"
OBJECT_DECLARE_SIMPLE_TYPE(SPIState, SPI)

/*
 * SPI device state
 * SPI
 */
struct SPIState {
    /* Parent object */
    SysBusDevice parent_obj;

    /* Memory region for MMIO */
    MemoryRegion iomem;

    /* Interrupt output */
    qemu_irq irq;

    /* Register storage */
    uint16_t spstat;    /* SPI Status */
    uint16_t spdat;    /* SPI Data */
    uint16_t spclk;    /* SPI Clock Configuration */
    uint16_t spcon;    /* SPI Configuration */
};

/*
 * Register read handler
 */
static uint64_t spi_read(void *opaque, hwaddr offset, unsigned size)
{
    SPIState *s = SPI(opaque);
    uint64_t value = 0;
    (void)size;  /* Unused */

    switch (offset) {
    case SPI_SPSTAT_OFFSET:
        value = s->spstat;
        break;
    case SPI_SPDAT_OFFSET:
        value = s->spdat;
        break;
    case SPI_SPCLK_OFFSET:
        value = s->spclk;
        break;
    case SPI_SPCON_OFFSET:
        value = s->spcon;
        break;
    default:
        qemu_log_mask(LOG_GUEST_ERROR,
                      "SPI: read from unknown register 0x%"HWADDR_PRIx"\n",
                      offset);
        break;
    }

    return value;
}

/*
 * Register write handler
 */
static void spi_write(void *opaque, hwaddr offset,
                             uint64_t value, unsigned size)
{
    SPIState *s = SPI(opaque);
    (void)size;  /* Unused */

    switch (offset) {
    case SPI_SPSTAT_OFFSET:
        s->spstat = value & SPI_SPSTAT_MASK;
        break;
    case SPI_SPDAT_OFFSET:
        s->spdat = value & SPI_SPDAT_MASK;
        break;
    case SPI_SPCLK_OFFSET:
        s->spclk = value & SPI_SPCLK_MASK;
        break;
    case SPI_SPCON_OFFSET:
        s->spcon = value & SPI_SPCON_MASK;
        break;
    default:
        qemu_log_mask(LOG_GUEST_ERROR,
                      "SPI: write to unknown register 0x%"HWADDR_PRIx"\n",
                      offset);
        break;
    }

    /* TODO: Add side-effect handling and interrupt logic here */
}

static const MemoryRegionOps spi_ops = {
    .read = spi_read,
    .write = spi_write,
    .endianness = DEVICE_LITTLE_ENDIAN,
    .impl = {
        .min_access_size = 4,
        .max_access_size = 4,
    },
};

/*
 * Device reset
 */
static void spi_reset(DeviceState *dev)
{
    SPIState *s = SPI(dev);

    /* Reset all registers to their default values */
    s->spstat = SPI_SPSTAT_RESET;
    s->spdat = SPI_SPDAT_RESET;
    s->spclk = SPI_SPCLK_RESET;
    s->spcon = SPI_SPCON_RESET;
}

/*
 * Device realization
 */
static void spi_realize(DeviceState *dev, Error **errp)
{
    SPIState *s = SPI(dev);
    SysBusDevice *sbd = SYS_BUS_DEVICE(dev);
    (void)errp;  /* Unused in stub */

    memory_region_init_io(&s->iomem, OBJECT(s), &spi_ops, s,
                          TYPE_SPI, 0x1000);
    sysbus_init_mmio(sbd, &s->iomem);

    sysbus_init_irq(sbd, &s->irq);
}

/*
 * Device class initialization
 */
static void spi_class_init(ObjectClass *klass, void *data)
{
    DeviceClass *dc = DEVICE_CLASS(klass);
    (void)data;  /* Unused */

    dc->realize = spi_realize;
    dc->reset = spi_reset;
    dc->desc = "SPI";
}

static const TypeInfo spi_info = {
    .name          = TYPE_SPI,
    .parent        = TYPE_SYS_BUS_DEVICE,
    .instance_size = sizeof(SPIState),
    .class_init    = spi_class_init,
};

static void spi_register_types(void)
{
    type_register_static(&spi_info);
}

type_init(spi_register_types)