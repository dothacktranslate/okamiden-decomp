#include "src/main/func_0203a.h"

void func_0203a680(
    s32 param_1,
    s32 param_2,
    s32 param_3
)
{
    Func0203aDescriptor descriptor;

    descriptor.field_08 = 0;
    descriptor.field_10 = -1;

    descriptor.field_04 = param_1;
    descriptor.field_0c = param_2;
    descriptor.field_1c = param_3;

    descriptor.field_14 = 0x80000000;
    descriptor.field_18 = 0;
    descriptor.field_00 = 3;

    func_02042e04(
        data_02078fa8,
        &descriptor,
        0
    );
}
