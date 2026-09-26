#include "src/nonmatching/func_020432_fuzzy.h"

Func020433Node *func_020433dc(
    Func020433Input **cursor,
    s32 value
)
{
    u8 key[24];
    Func020433Input *input;
    Func020433Node *node;
    Func020433Node *child;
    Func020433Node *previous;
    s32 i;

    input = *cursor;

    func_02018ba4(
        key,
        data_02073568,
        input->bytes_10,
        value
    );

    node = func_02043990(
        data_0207902c,
        key
    );

    if (node == 0) {
        data_02078fa4 |= 1;
        return 0;
    }

    node->field_0c =
        input->field_00;

    node->field_10 =
        input->field_04;

    node->flag_3c =
        input->field_08 != 0;

    node->flag_3d =
        input->field_0c != 0;

    for (i = 0; i < 16; i++) {
        ((u8 *)node->bytes_14)[i] =
            input->bytes_10[i];
    }

    *func_020433d4(node) =
        input->field_20;

    *cursor = (
        Func020433Input *
    )(
        (u8 *)input
        + 0x2c
    );

    previous = 0;

    for (
        i = 0;
        i < node->field_0c;
        i++
    ) {
        child = func_020433dc(
            cursor,
            value
        );

        if (child == 0) {
            return node;
        }

        child->parent_28 = node;

        if (previous == 0) {
            node->child_2c = child;
        } else {
            previous->next_34 = child;
        }

        previous = child;
    }

    return node;
}
