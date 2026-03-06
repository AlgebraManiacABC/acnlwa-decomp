#include "../../include/item.h"

Item_t * Item_CopyAndReturn(Item_t *dst, Item_t *src)
{
    dst->id = src->id;
    dst->flags = src->flags;
    return dst;
}
