#include "../../include/item.h"

bool Item_IsID(Item_t *item, ushort item_id)
{
    return (item->id & 0xffff7fff) == item_id;
}