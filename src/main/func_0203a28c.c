#pragma thumb on

typedef signed int s32;
typedef unsigned char u8;

typedef struct {
    s32 unk0;
    void *entries;
    s32 count;

    u8 pad_000c[0x1E60 - 0x0C];

    s32 field_1e60;

    u8 pad_1e64[0x10];

    s32 field_1e74;
} Object;

void func_0203a28c(void *base, s32 index)
{
    Object *object;

    object = *(Object **)
        ((char *)base + index * 4 + 0x1F04);

    object->count = 0;
    object->field_1e60 = 0;
    object->field_1e74 = 0x400;
}
