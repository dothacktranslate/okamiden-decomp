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
} Object;

typedef struct {
    s32 unk0;
    void *entries;
    s32 count;
} ObjectHead;

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

#endif
