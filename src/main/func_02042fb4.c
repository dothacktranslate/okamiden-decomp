#pragma thumb on

#include "src/main/func_02042f.h"

void func_02042fb4(
    void *context_raw,
    s32 index,
    s32 value_raw
)
{
    Func02042fContext *context;
    Func02042fBlock40 *value;
    s32 slot;

    context =
        (Func02042fContext *)context_raw;

    value =
        (Func02042fBlock40 *)value_raw;

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

    context->records[slot].block_0c =
        *value;
}
