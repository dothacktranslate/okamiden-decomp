#pragma thumb on
#include "src/nonmatching/func_02042f_fuzzy.h"

void *func_02043028(
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

    if (index != context->records[slot].id) {
        return 0;
    }

    if (context->records[slot].field_a8 != 0) {
        return context->records[slot].field_a8 + 8;
    }

    if (context->records[slot].field_ac != 0) {
        return context->records[slot].field_ac;
    }

    return &context->records[slot].block_0c.word[12];
}
