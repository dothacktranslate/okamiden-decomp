#include "src/nonmatching/func_020432_fuzzy.h"

void func_0204362c(
    Func020433Node *node,
    void *value
)
{
    Func020433Node *child;

    node->field_40 = value;

    node->field_44 =
        func_02043e20(
            data_02079030,
            node
        );

    if (node->field_44 == 0) {
        data_02078fa4 |= 2;
        return;
    }

    child = node->child_2c;

    while (child != 0) {
        func_0204362c(
            child,
            node->field_40
        );

        if (child->field_44 == 0) {
            return;
        }

        child = child->next_34;
    }
}
