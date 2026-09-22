#pragma thumb on

#include "src/main/func_0203a.h"

static inline s32 list_full(List *list)
{
    return ((u32)list->count >= list->capacity);
}

static inline s32 entry_ended(Entry *entry)
{
    return entry->a == -1;
}

void func_0203a228(void *base, s32 index)
{
    List *list;
    s32 count;
    s32 previous;
    Entry *entries;
    s32 ended;

    list = *(List **)((char *)base + 0x1F04 + index * 4);

    if (list_full(list))
        return;

    count = list->count;

    if (count <= 0)
        return;

    previous = count - 1;

    entries = list->entries;

    ended = (entries[previous].a == -1);

    if (ended)
        return;

    if (count >= 0x180)
        return;

    entries[count].a = -1;

    count = list->count;
    entries = list->entries;

    entries[count].b = -1;

    list->count++;
}
