#include "../../../include/item.h"

extern ItemParam_t * Item_GetParam(Item_t *);
extern int FUN_007486dc(ItemParam_t *);

uint Item_Param11Valid(Item_t * item) {
    ItemParam_t * itemParam = Item_GetParam(item);
    if (itemParam)
    {
        return FUN_007486dc(itemParam) != 0;
    }
    return 0;
}

