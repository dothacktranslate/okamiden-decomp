#pragma thumb on

#include "src/main/func_0203a.h"

extern void func_02042c8c(
    void *context,
    void *descriptor,
    s32 mode
);

void func_02042e60(
    void *context,
    Func0203aDescriptor *descriptor
)
{
    Func0203aDescriptor local;
    s32 zero;
    s32 one;

    if (descriptor != 0) {
        func_02042c8c(
            context,
            descriptor,
            2
        );

        return;
    }

    zero = 0;

    local.field_10 = zero - 1;
    local.field_14 = 0x80000000;

    one = 1;

    local.field_04 = zero;
    local.field_08 = zero;
    local.field_18 = zero;

    local.field_00 = one;
    local.field_1c = one;

    func_02042c8c(
        context,
        &local,
        2
    );
}
