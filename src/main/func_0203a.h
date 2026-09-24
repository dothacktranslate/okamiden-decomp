#ifndef OKAMIDEN_FUNC_0203A_H
#define OKAMIDEN_FUNC_0203A_H

typedef signed short s16;
typedef signed int s32;
typedef unsigned int u32;
typedef unsigned char u8;

typedef struct {
    s16 a;
    s16 b;
} Entry;

typedef struct {
    s32 unk0;
    Entry *entries;
    s32 count;
    u32 capacity;
} List;

typedef struct {
    s32 unk0;
    void *entries;
    s32 count;

    u8 pad_000c[0x1E60 - 0x0C];

    s32 field_1e60;

    u8 pad_1e64[0x10];

    s32 field_1e74;
    s32 field_1e78;
    s32 field_1e7c;
} Object;

typedef struct {
    s32 unk0;
    void *entries;
    s32 count;
} ObjectHead;

typedef struct {
    s32 field_00;
    s32 field_04;
    s32 field_08;
    s32 field_0c;
    s32 field_10;
    s32 field_14;
    s32 field_18;
    s32 field_1c;
} Func0203aDescriptor;


extern s32 func_02010af0(
    void *first,
    void *second
);

void func_0203a228(
    void *base,
    s32 index
);

void func_0203a28c(
    void *base,
    s32 index
);

s32 func_0203a2ac(
    void *base,
    void *other,
    s32 index
);

void func_0203a5f0(void *base, s32 value, s32 index);

void func_0203a650(void);
void func_0203a668(void);
void func_0203ac7c(s32 value);
void func_0203accc(s32 value);

extern void *data_02078fa8;

void func_02042e04(
    void *context,
    Func0203aDescriptor *descriptor,
    s32 zero
);

void func_0203a680(
    s32 param_1,
    s32 param_2,
    s32 param_3
);

void func_0203a6d8(
    s32 param_1,
    s32 param_2,
    s32 param_3
);

void func_0203a7cc(
    s32 param_1,
    s32 param_2,
    s32 param_3
);

void func_0203a824(
    s32 param_1,
    s32 param_2,
    s32 param_3
);

#endif
