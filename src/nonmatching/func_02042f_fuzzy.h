#ifndef PHASE2AX_COMMON_H
#define PHASE2AX_COMMON_H

typedef signed int s32;
typedef unsigned int u32;
typedef unsigned char u8;

typedef struct {
    s32 x;
    s32 y;
    s32 z;
} Func02042fVec3;

typedef struct {
    s32 word[16];
} Func02042fBlock40;

typedef struct Func02042fSourceA8
    Func02042fSourceA8;

typedef struct {
    s32 field_00;               /* 0x00 */
    s32 field_04;               /* 0x04 */
    s32 gate;                   /* 0x08 */

    Func02042fBlock40 block_0c; /* 0x0c */

    u8 pad_4c[0x30];

    s32 id;                     /* 0x7c */
    s32 field_80;               /* 0x80 */
    s32 flags_84;               /* 0x84 */
    s32 field_88;               /* 0x88 */

    Func02042fVec3 vec_8c;      /* 0x8c */
    Func02042fVec3 vec_98;      /* 0x98 */

    Func02042fSourceA8 *field_a4; /* 0xa4 */
    u8 *field_a8;                 /* 0xa8 */
    void *field_ac;               /* 0xac */
    s32 field_b0;                 /* 0xb0 */
    void *field_b4;               /* 0xb4 */
    s32 field_b8;                 /* 0xb8 */
} Func02042fRecord;

typedef char Func02042fRecord_size_check[
    sizeof(Func02042fRecord) == 0xbc ? 1 : -1
];

typedef struct {
    s32 field_00;
    Func02042fRecord *records;
    s32 lookup_value;
} Func02042fContext;

struct Func02042fSourceA8 {
    u8 pad_00[0xa8];
    u8 *field_a8;
};

typedef struct {
    s32 field_00;
    s32 field_04;
    s32 field_08;
    s32 field_0c;
    s32 field_10;
    s32 field_14;
    s32 field_18;
    s32 field_1c;
} Func02042fDescriptor;

extern long long func_0201ebe0(
    s32 index,
    s32 lookup_value
);

extern void func_02001c28(
    void *value
);

extern void func_02001cb0(
    void *first,
    void *second,
    s32 x,
    s32 y,
    s32 z
);

extern s32 func_02042a28(
    void *context,
    Func02042fDescriptor *descriptor,
    s32 mode
);

extern void func_02042ea4(
    void *context,
    Func02042fDescriptor *descriptor
);

extern Func02042fBlock40 data_020703d4;

#endif
