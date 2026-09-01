#include "../../include/item.h"

extern unsigned short Item_GetID(Item_t * item);

int FUN_0024a5f4(unsigned int * param1, Item_t * item)
{
    unsigned int i;
    short id = Item_GetID(item);
    if (id < 0) return 0;
    i = id >> 5;
    if (i < 186)
    {
        param1[i] |= 1 << (i & 0x1f);
    }
    return 1;
}