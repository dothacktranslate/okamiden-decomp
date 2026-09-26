#pragma thumb on
#include "src/nonmatching/func_020432_fuzzy.h"

s32 func_02043298(
    Func02042fContext *context,
    s32 index
)
{
    s32 slot;
    void *object;

    slot = (s32)(
        func_0201ebe0(
            index,
            context->lookup_value
        ) >> 32
    );

    if (index != context->records[slot].id) {
        return 0;
    }

    if (
        func_02042f44(
            context,
            index
        ) == 0
    ) {
        return 0;
    }

    object = func_0203c3bc(
        data_02078f1c,
        context->records[slot].field_78
    );

    if (object == 0) {
        return 0;
    }

    if (func_0203bc28(object) == 0) {
        return 0;
    }

    if (func_0203bc3c(object) == 0) {
        return 0;
    }

    if (
        (
            context->records[slot].flags_84
            & 0x100
        ) == 0
    ) {
        return 1;
    }

    return 0;
}
