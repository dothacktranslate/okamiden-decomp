#pragma thumb on

#include "src/main/func_0203a.h"

s32 func_02042e04(
    void *context,
    Func0203aDescriptor *descriptor,
    s32 value
)
{
    s32 result;

    result = func_02042a28(
        context,
        descriptor,
        value
    );

    if (result >= 0) {
        if (descriptor->field_1c != 0) {
            func_02042fb4(
                context,
                result,
                descriptor->field_1c
            );
        }
    }

    return result;
}
