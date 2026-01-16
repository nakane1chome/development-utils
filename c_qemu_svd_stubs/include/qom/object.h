/*
 * QEMU Object Model stub for compilation testing
 * SPDX-License-Identifier: MIT
 */

#ifndef QOM_OBJECT_H
#define QOM_OBJECT_H

#include <stdint.h>
#include <stddef.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

/* Base object type */
typedef struct Object {
    const char *type;
} Object;

typedef struct ObjectClass {
    const char *type;
} ObjectClass;

/* Type information structure */
typedef struct TypeInfo {
    const char *name;
    const char *parent;
    size_t instance_size;
    void (*class_init)(ObjectClass *klass, void *data);
} TypeInfo;

/* Type casting macro */
#define OBJECT(obj) ((Object *)(obj))

/* Object declaration macro for simple types */
#define OBJECT_DECLARE_SIMPLE_TYPE(InstanceType, TYPENAME) \
    typedef struct InstanceType InstanceType; \
    static inline InstanceType *TYPENAME(void *obj) { \
        return (InstanceType *)obj; \
    }

/* Stub type registration */
static inline void type_register_static(const TypeInfo *info) {
    (void)info;
}

#endif /* QOM_OBJECT_H */
