#include "../../include/item.h"

void FUN_002fd050(Item_t * item, ushort id)
{
    item->id = item->id & 0x8000;
    item->id |= (id & ~0x8000);
}
