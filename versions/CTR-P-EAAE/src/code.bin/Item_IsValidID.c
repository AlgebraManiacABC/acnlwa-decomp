#include "../../include/item.h"

uint Item_IsValidID(Item_t * item)
{
    return ((uint)(item->id & ~0x00008000) - 0x2000 < NUM_ITEMS);
}