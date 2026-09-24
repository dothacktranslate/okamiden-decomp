#pragma thumb on

#include "src/main/func_0203a.h"

s32 func_02042e24(
    void *context,
    Func0203aDescriptor *descriptor
)
{
    s32 result;

    result = func_02042a28(
        context,
        descriptor,
        0
    );

    if (result >= 0) {
        if (descriptor->field_1c != 0) {
            func_02042fe8(
                context,
                result,
                descriptor->field_1c
            );
        }
    }

    return result;
}
