#ifndef PHASE2AY_COMMON_H
#define PHASE2AY_COMMON_H

typedef signed int s32;
typedef unsigned int u32;
typedef unsigned char u8;

/* ------------------------------------------------------------------ */
/* Existing 0xBC record family                                        */
/* ------------------------------------------------------------------ */

typedef struct {
    u8 pad_00[0x78];

    s32 field_78;
    s32 id;
    s32 field_80;
    u32 flags_84;
    s32 field_88;

    u8 pad_8c[0x30];
} Func02042fRecord;

typedef char Func02042fRecord_size_check[
    sizeof(Func02042fRecord) == 0xbc ? 1 : -1
];

typedef struct {
    s32 field_00;
    Func02042fRecord *records;
    s32 lookup_value;
} Func02042fContext;

/* ------------------------------------------------------------------ */
/* 0x020433xx tree/resource family                                    */
/* ------------------------------------------------------------------ */

typedef struct Func020433Node Func020433Node;

struct Func020433Node {
    void *field_00;              /* 0x00 */
    s32 field_04;                /* 0x04 */
    s32 field_08;                /* 0x08 */
    s32 field_0c;                /* 0x0c */
    s32 field_10;                /* 0x10 */

    u8 bytes_14[4][4];           /* 0x14 */

    void *field_24;              /* 0x24 */

    Func020433Node *parent_28;   /* 0x28 */
    Func020433Node *child_2c;    /* 0x2c */
    void *field_30;              /* 0x30 */
    Func020433Node *next_34;     /* 0x34 */

    s32 field_38;                /* 0x38 */

    u8 flag_3c;                  /* 0x3c */
    u8 flag_3d;                  /* 0x3d */
    u8 pad_3e[2];

    void *field_40;              /* 0x40 */
    void *field_44;              /* 0x44 */

    s32 field_48;                /* 0x48 */
    s32 field_4c;                /* 0x4c */
    s32 field_50;                /* 0x50 */
    s32 field_54;                /* 0x54 */
};

typedef char Func020433Node_size_check[
    sizeof(Func020433Node) == 0x58 ? 1 : -1
];

typedef struct {
    s32 field_00;
    s32 field_04;
    s32 field_08;
    s32 field_0c;
    s32 field_10;
} Func020433Data;

typedef struct {
    s32 field_00;
    s32 field_04;
    s32 field_08;
    s32 field_0c;

    u8 bytes_10[16];

    void *field_20;

    u8 pad_24[8];
} Func020433Input;

typedef char Func020433Input_size_check[
    sizeof(Func020433Input) == 0x2c ? 1 : -1
];

/* ------------------------------------------------------------------ */
/* Globals                                                            */
/* ------------------------------------------------------------------ */

extern u8 data_02073540[];
extern u8 data_02073568[];

extern void *data_02078f1c;
extern u32 data_02078fa4;

extern void *data_0207902c;
extern void *data_02079030;

/* ------------------------------------------------------------------ */
/* Functions                                                          */
/* ------------------------------------------------------------------ */

extern long long func_0201ebe0(
    s32 index,
    s32 lookup_value
);

extern Func020433Node *func_02042f44(
    Func02042fContext *context,
    s32 index
);

extern void *func_0203c3bc(
    void *context,
    s32 value
);

extern s32 func_0203bc28(
    void *value
);

extern s32 func_0203bc3c(
    void *value
);

extern void func_02018ba4(
    void *dst,
    const void *table,
    const void *src,
    s32 value
);

extern Func020433Node *func_02043990(
    void *context,
    void *key
);

extern void func_02043eb8(
    void *context,
    void *value
);

extern void func_02043a14(
    void *context,
    Func020433Node *node
);

extern void *func_02043e20(
    void *context,
    Func020433Node *node
);

void **func_020433d4(
    Func020433Node *node
);

Func020433Node *func_020433dc(
    Func020433Input **cursor,
    s32 value
);

void func_0204353c(
    Func020433Node *node,
    s32 *first,
    s32 *second
);

void func_0204362c(
    Func020433Node *node,
    void *value
);

#endif
