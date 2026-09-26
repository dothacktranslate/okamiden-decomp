#pragma thumb on
#include "src/nonmatching/func_02042f_fuzzy.h"

void func_0204310c(
    Func02042fContext *context,
    s32 index,
    Func02042fSourceA8 *source,
    s32 which
)
{
    s32 slot;

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

    context->records[slot].field_a4 = source;

    context->records[slot].field_a8 =
        source->field_a8 + which * 72;

    context->records[slot].block_0c =
        data_020703d4;
}
