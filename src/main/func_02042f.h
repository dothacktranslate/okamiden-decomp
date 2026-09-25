#ifndef OKAMIDEN_FUNC_02042F_H
#define OKAMIDEN_FUNC_02042F_H

#include "src/main/func_0203a.h"

typedef struct {
    s32 x;
    s32 y;
    s32 z;
} Func02042fVec3;

typedef struct {
    s32 field_00;
    s32 field_04;
    s32 gate;

    u8 pad_0c[0x68];

    s32 field_74;
    s32 field_78;
    s32 id;

    u8 pad_80[0x0c];

    Func02042fVec3 vec;

    u8 pad_98[0x24];
} Func02042fRecord;

typedef char Func02042fRecord_size_check[
    sizeof(Func02042fRecord) == 0xbc ? 1 : -1
];

typedef struct {
    s32 field_00;
    Func02042fRecord *records;
    s32 lookup_value;
} Func02042fContext;

extern long long func_0201ebe0(
    s32 index,
    s32 lookup_value
);

s32 func_02042f0c(
    Func02042fContext *context,
    s32 index
);

s32 func_02042f44(
    Func02042fContext *context,
    s32 index
);

void func_02042f7c(
    Func02042fContext *context,
    s32 index,
    Func02042fVec3 *value
);

#endif
