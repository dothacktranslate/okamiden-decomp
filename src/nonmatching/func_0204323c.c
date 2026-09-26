#pragma thumb on
#include "src/nonmatching/func_020432_fuzzy.h"

s32 func_0204323c(
    Func02042fContext *context,
    s32 index
)
{
    Func020433Node *node;
    s32 first;
    s32 second;

    node = func_02042f44(
        context,
        index
    );

    if (node != 0) {
        first = 0;
        second = 0;

        func_0204353c(
            node,
            &first,
            &second
        );

        return first;
    }

    return 0;
}
