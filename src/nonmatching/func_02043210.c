#pragma thumb on
#include "src/nonmatching/func_020432_fuzzy.h"

s32 func_02043210(
    Func02042fContext *context,
    s32 index
)
{
    s32 slot;

    if (index < 0) {
        return -1;
    }

    slot = (s32)(
        func_0201ebe0(
            index,
            context->lookup_value
        ) >> 32
    );

    if (index != context->records[slot].id) {
        return -1;
    }

    return context->records[slot].field_78;
}
