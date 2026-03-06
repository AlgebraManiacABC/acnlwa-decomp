#include "../../include/item.h"

void Item_Copy(Item_t *dst, Item_t *src)
{
    dst->id = src->id;
    dst->flags = src->flags;
    return;
}