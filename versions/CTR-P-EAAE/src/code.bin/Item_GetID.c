#include "../../include/item.h"

int Item_GetID(Item_t * item)
{
    int item_id;
    if ((item->id & ~0x8000) - (unsigned int)0x2000 < NUM_ITEMS)
    {
        item_id = (item->id & ~0x8000) - 0x2000;
    }
    else
    {
        item_id = -1;
    }
    return item_id;
}
