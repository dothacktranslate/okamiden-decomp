#pragma thumb on

#include "src/main/func_0203a.h"

s32 func_0203a2ac(
    void *base,
    void *other,
    s32 index
)
{
    s32 result;
    ObjectHead *object;

    result = 0;

    object = *(ObjectHead **)
        ((char *)base + index * 4 + 0x1F04);

    if (
        func_02010af0(
            &object->entries,
            other
        ) != 0
    )
        result = 1;

    return result;
}
