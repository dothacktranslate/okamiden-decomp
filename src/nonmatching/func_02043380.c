#include "src/nonmatching/func_020432_fuzzy.h"

void func_02043380(
    Func020433Node *node
)
{
    Func020433Node *child;
    Func020433Node *next;

    if (node->field_44 != 0) {
        func_02043eb8(
            data_02079030,
            node->field_44
        );
    }

    child = node->child_2c;

    while (child != 0) {
        next = child->next_34;

        func_02043a14(
            data_0207902c,
            child
        );

        child = next;
    }
}
