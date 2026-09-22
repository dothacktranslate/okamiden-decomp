#pragma thumb on

#include "src/main/func_0203a.h"

void func_0203a28c(void *base, s32 index)
{
    Object *object;

    object = *(Object **)
        ((char *)base + index * 4 + 0x1F04);

    object->count = 0;
    object->field_1e60 = 0;
    object->field_1e74 = 0x400;
}
