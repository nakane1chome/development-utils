/*
 * QEMU IRQ stub for compilation testing
 * SPDX-License-Identifier: MIT
 */

#ifndef HW_IRQ_H
#define HW_IRQ_H

#include "qemu/osdep.h"

/* IRQ line type */
typedef struct IRQState *qemu_irq;

/* Stub implementations */
static inline void qemu_set_irq(qemu_irq irq, int level)
{
    (void)irq;
    (void)level;
}

static inline void qemu_irq_raise(qemu_irq irq)
{
    qemu_set_irq(irq, 1);
}

static inline void qemu_irq_lower(qemu_irq irq)
{
    qemu_set_irq(irq, 0);
}

static inline void qemu_irq_pulse(qemu_irq irq)
{
    qemu_set_irq(irq, 1);
    qemu_set_irq(irq, 0);
}

#endif /* HW_IRQ_H */
