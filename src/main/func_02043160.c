#pragma thumb on
#include "src/main/func_02042f.h"

void func_02043160(
    Func02042fContext *context,
    s32 index,
    Func02042fBlock40 *value
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

    context->records[slot].block_0c = *value;
}
