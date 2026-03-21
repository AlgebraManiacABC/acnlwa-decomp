#include "../../../include/item.h"

bool Item_IsNullItem(Item_t * item)
{
    return (item->id & 0x7fff) == 0x7ffe;
}
