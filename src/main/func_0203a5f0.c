#pragma thumb on

#include "src/main/func_0203a.h"

void func_0203a5f0(
    void *base,
    s32 value,
    s32 index
)
{
    Object *object;

    object = *(Object **)
        (
            (char *)base
            + index * 4
            + 0x1F04
        );

    object->field_1e7c = value;

    object->field_1e78 =
        object->field_1e7c;
}
