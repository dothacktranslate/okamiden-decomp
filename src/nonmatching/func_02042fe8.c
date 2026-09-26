#pragma thumb on
#include "src/nonmatching/func_02042f_fuzzy.h"

void func_02042fe8(
    Func02042fContext *context,
    s32 index,
    Func02042fVec3 *value
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

    func_02001c28(
        &context->records[slot].block_0c
    );

    func_02001cb0(
        &context->records[slot].block_0c,
        &context->records[slot].block_0c,
        value->x,
        value->y,
        value->z
    );
}
