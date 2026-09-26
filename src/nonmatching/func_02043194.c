#pragma thumb on
#include "src/nonmatching/func_02042f_fuzzy.h"

s32 func_02043194(
    Func02042fContext *context,
    s32 param_1,
    s32 param_2,
    Func02042fBlock40 *value
)
{
    Func02042fDescriptor descriptor;
    s32 result;
    s32 slot;

    descriptor.field_10 = -1;
    descriptor.field_00 = 3;
    descriptor.field_04 = param_1;
    descriptor.field_0c = param_2;
    descriptor.field_08 = 0;
    descriptor.field_18 = 0;
    descriptor.field_14 = 1;
    descriptor.field_1c = (s32)(u32)value;

    result = func_02042a28(
        context,
        &descriptor,
        1
    );

    if (result == -1) {
        return -1;
    }

    slot =
        context->lookup_value
        + (s32)(
            func_0201ebe0(
                result,
                context->lookup_value
            ) >> 32
        );

    context->records[slot].block_0c = *value;

    return result;
}
