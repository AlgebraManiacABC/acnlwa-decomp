#include "../../include/item.h"

extern ItemParam_t * Item_GetParam(Item_t *);
extern int FUN_007486dc(ItemParam_t * itemParam);

uint Item_Param11Valid(Item_t *item)
{
    ItemParam_t * itemParam;
    int field11_valid;
    uint valid;

    itemParam = Item_GetParam(item);
    valid = 0;
    if ((itemParam != NULL) &&
       (field11_valid = FUN_007486dc(itemParam), valid = 0, field11_valid != 0))
    {
        valid = 1;
    }
    return valid;
}
