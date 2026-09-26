#pragma thumb on
#include "src/nonmatching/func_02042f_fuzzy.h"

void func_020431e8(
    void *context,
    s32 value
)
{
    Func02042fDescriptor descriptor;
    s32 zero;

    zero = 0;

    descriptor.field_10 = zero - 1;
    descriptor.field_14 = 0x80000000;
    descriptor.field_04 = value;

    descriptor.field_08 = zero;
    descriptor.field_18 = zero;
    descriptor.field_1c = zero;

    descriptor.field_00 = 3;

    func_02042ea4(
        context,
        &descriptor
    );
}
