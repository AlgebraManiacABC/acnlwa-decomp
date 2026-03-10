#include "../../include/item.h"

extern ItemParam_t * Item_GetParam(Item_t *);
extern int FUN_007486dc(ItemParam_t *);

uint Item_Param11Valid(Item_t * item) {
    ItemParam_t * itemParam = Item_GetParam(item);
    if (itemParam)
    {
        int valid = FUN_007486dc(itemParam);
        if (valid) return 1;
    }
    return;
}
