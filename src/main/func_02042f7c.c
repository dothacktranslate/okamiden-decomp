#pragma thumb on

#include "src/main/func_02042f.h"

void func_02042f7c(
    Func02042fContext *context,
    s32 index,
    Func02042fVec3 *value
)
{
    s32 slot;
    Func02042fVec3 *dst;

    if (index < 0) {
        return;
    }

    slot = (s32)(
        func_0201ebe0(
            index,
            context->lookup_value
        ) >> 32
    );

    if (
        index
        != context->records[slot].id
    ) {
        return;
    }

    dst = &context->records[slot].vec;

    dst->x = value->x;
    dst->y = value->y;
    dst->z = value->z;
}
