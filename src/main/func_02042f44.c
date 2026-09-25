#pragma thumb on

#include "src/main/func_02042f.h"

s32 func_02042f44(
    Func02042fContext *context,
    s32 index
)
{
    s32 slot;

    if (index < 0) {
        return 0;
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
        return 0;
    }

    if (
        context->records[slot].gate
        == 0
    ) {
        return 0;
    }

    return context->records[slot].field_74;
}
