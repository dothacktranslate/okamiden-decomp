#include "src/main/func_0203a.h"

void func_0203a824(
    s32 param_1,
    s32 param_2,
    s32 param_3
)
{
    Func0203aDescriptor descriptor;

    descriptor.field_08 = 0;
    descriptor.field_10 = -1;
    descriptor.field_18 = 0;

    descriptor.field_04 = param_1;
    descriptor.field_0c = param_2;
    descriptor.field_1c = param_3;

    descriptor.field_00 = 3;
    descriptor.field_14 = 1;

    func_02042e04(
        data_02078fa8,
        &descriptor,
        0
    );
}
