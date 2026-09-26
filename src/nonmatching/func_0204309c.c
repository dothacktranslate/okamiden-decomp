#pragma thumb on
#include "src/nonmatching/func_02042f_fuzzy.h"

void func_0204309c(
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

    if (index != context->records[slot].id) {
        return;
    }

    context->records[slot].flags_84 |= 4;

    dst = &context->records[slot].vec_98;

    dst->x = value->x;
    dst->y = value->y;
    dst->z = value->z;
}
