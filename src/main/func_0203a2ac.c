#pragma thumb on

typedef signed int s32;

typedef struct {
    s32 unk0;
    void *entries;
    s32 count;
} ObjectHead;

extern s32 func_02010af0(
    void *first,
    void *second
);

s32 func_0203a2ac(
    void *base,
    void *other,
    s32 index
)
{
    s32 result;
    ObjectHead *object;

    result = 0;

    object = *(ObjectHead **)
        ((char *)base + index * 4 + 0x1F04);

    if (
        func_02010af0(
            &object->entries,
            other
        ) != 0
    )
        result = 1;

    return result;
}
