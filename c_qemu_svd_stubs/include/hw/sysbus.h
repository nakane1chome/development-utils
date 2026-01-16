/*
 * QEMU System Bus stub for compilation testing
 * SPDX-License-Identifier: MIT
 */

#ifndef HW_SYSBUS_H
#define HW_SYSBUS_H

#include "qemu/osdep.h"
#include "qom/object.h"

/* Forward declarations */
typedef struct IRQState *qemu_irq;

/* Device state base */
typedef struct DeviceState {
    Object parent_obj;
} DeviceState;

typedef struct DeviceClass {
    ObjectClass parent_class;
    void (*realize)(DeviceState *dev, Error **errp);
    void (*reset)(DeviceState *dev);
    const char *desc;
} DeviceClass;

/* Memory region operations */
typedef struct MemoryRegionOps {
    uint64_t (*read)(void *opaque, hwaddr addr, unsigned size);
    void (*write)(void *opaque, hwaddr addr, uint64_t data, unsigned size);
    int endianness;
    struct {
        unsigned min_access_size;
        unsigned max_access_size;
    } impl;
} MemoryRegionOps;

#define DEVICE_LITTLE_ENDIAN 0
#define DEVICE_BIG_ENDIAN    1

/* Memory region */
typedef struct MemoryRegion {
    const char *name;
    uint64_t size;
    void *opaque;
    const MemoryRegionOps *ops;
} MemoryRegion;

/* System bus device */
typedef struct SysBusDevice {
    DeviceState parent_obj;
    MemoryRegion *mmio[8];
    int num_mmio;
    qemu_irq irqs[8];
    int num_irq;
} SysBusDevice;

#define TYPE_SYS_BUS_DEVICE "sys-bus-device"
#define SYS_BUS_DEVICE(obj) ((SysBusDevice *)(obj))
#define DEVICE_CLASS(klass) ((DeviceClass *)(klass))

/* Stub implementations */
static inline void memory_region_init_io(MemoryRegion *mr,
                                         Object *owner,
                                         const MemoryRegionOps *ops,
                                         void *opaque,
                                         const char *name,
                                         uint64_t size)
{
    (void)owner;
    mr->name = name;
    mr->size = size;
    mr->ops = ops;
    mr->opaque = opaque;
}

static inline void sysbus_init_mmio(SysBusDevice *dev, MemoryRegion *mr)
{
    if (dev->num_mmio < 8) {
        dev->mmio[dev->num_mmio++] = mr;
    }
}

static inline void sysbus_init_irq(SysBusDevice *dev, qemu_irq *irq)
{
    if (dev->num_irq < 8) {
        dev->irqs[dev->num_irq++] = *irq;
    }
}

#endif /* HW_SYSBUS_H */
