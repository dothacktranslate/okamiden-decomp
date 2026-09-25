#pragma thumb on

#include "src/main/func_02042f.h"

s32 func_02042f0c(
    Func02042fContext *context,
    s32 index
)
{
    s32 slot;
    s32 result;

    if (index < 0) {
        return -1;
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
        return -1;
    }

    result = -1;

    if (
        context->records[slot].gate
        != 0
    ) {
        result =
            context->records[slot].field_78;
    }

    return result;
}
