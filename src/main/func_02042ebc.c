#pragma thumb on

#include "src/main/func_0203a.h"

extern void func_02042ea4(
    void *context,
    void *descriptor
);

void func_02042ebc(
    void *context,
    s32 value
)
{
    Func0203aDescriptor local;
    Func0203aDescriptor *descriptor;
    s32 zero;
    s32 four;

    zero = 0;

    local.field_10 = zero - 1;
    local.field_14 = 0x80000000;

    four = 4;

    local.field_04 = value;

    descriptor = &local;

    local.field_08 = zero;
    local.field_18 = zero;
    local.field_1c = zero;

    local.field_00 = four;

    func_02042ea4(
        context,
        descriptor
    );
}
