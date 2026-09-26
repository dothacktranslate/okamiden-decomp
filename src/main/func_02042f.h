#ifndef OKAMIDEN_FUNC_02042F_H
#define OKAMIDEN_FUNC_02042F_H

#include "src/main/func_0203a.h"

typedef struct {
    s32 x;
    s32 y;
    s32 z;
} Func02042fVec3;

typedef struct {
    s32 word[16];
} Func02042fBlock40;

typedef struct {
    s32 field_00;
    s32 field_04;
    s32 gate;

    Func02042fBlock40 block_0c;

    u8 pad_4c[0x28];

    s32 field_74;
    s32 field_78;
    s32 id;

    s32 field_80;
    u32 flags_84;
    s32 field_88;

    Func02042fVec3 vec;
    Func02042fVec3 vec_98;

    void *field_a4;
    u8 *field_a8;
    void *field_ac;
    s32 field_b0;
    void *field_b4;
    s32 field_b8;
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

void func_02043070(
    Func02042fContext *context,
    s32 index,
    void *value
);

void func_020430e0(
    Func02042fContext *context,
    s32 index,
    void *value
);

void func_02043160(
    Func02042fContext *context,
    s32 index,
    Func02042fBlock40 *value
);

#endif
