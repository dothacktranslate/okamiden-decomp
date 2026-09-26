#include "src/nonmatching/func_020432_fuzzy.h"

void func_02043310(
    Func020433Node *node
)
{
    s32 i;

    node->field_08 = 0;

    node->field_00 =
        data_02073540;

    node->field_04 = 0;

    node->field_24 = 0;

    node->field_48 = 0;
    node->field_4c = 0;
    node->field_50 = 0;
    node->field_54 = 0;

    for (i = 0; i < 4; i++) {
        node->bytes_14[i][0] = 0;
        node->bytes_14[i][1] = 0;
        node->bytes_14[i][2] = 0;
        node->bytes_14[i][3] = 0;
    }

    for (i = 0; i < 4; i++) {
        (&node->parent_28)[i] = 0;
    }

    node->field_44 = 0;
}
