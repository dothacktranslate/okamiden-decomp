#include "src/nonmatching/func_020432_fuzzy.h"

void func_0204353c(
    Func020433Node *node,
    s32 *first,
    s32 *second
)
{
    Func020433Data *data;
    Func020433Node *child;

    s32 extra;
    s32 low;
    s32 high;
    s32 child_first;
    s32 child_second;
    s32 temp;

    data = (
        Func020433Data *
    )(
        *func_020433d4(node)
    );

    if (data->field_0c == 0) {
        extra = 0;
    } else {
        extra =
            data->field_10
            * (data->field_0c - 1);
    }

    *first += extra;
    *second += extra;

    low =
        data->field_00
        - data->field_04;

    high =
        data->field_00
        + data->field_04;

    if (low > high) {
        temp = low;
        low = high;
        high = temp;
    }

    child = node->child_2c;

    while (child != 0) {
        child_first = 0;
        child_second = 0;

        func_0204353c(
            child,
            &child_first,
            &child_second
        );

        if (low < child_first) {
            low = child_first;
        }

        if (high < child_second) {
            high = child_second;
        }

        child = child->next_34;
    }

    if (low < 0) {
        low = 0;
    }

    *first += low;

    if (high < 0) {
        high = 0;
    }

    *second += high;
}
