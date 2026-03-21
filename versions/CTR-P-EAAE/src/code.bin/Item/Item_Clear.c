#include "../../../include/item.h"

void Item_Clear(Item_t * item)
{
    item->id = 0x7ffe;
    item->flags = 0;
}