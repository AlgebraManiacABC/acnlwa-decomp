#include "../../include/item.h"

extern ItemParam_t * Item_GetParam(Item_t *);

undefined4 Item_IsFromWishyOrSpotlight(Item_t *param_1)
{
    ItemParam_t *itemParam;
    undefined4 uVar1;

    itemParam = Item_GetParam(param_1);
    if (((itemParam == NULL) || (0xb8 < itemParam->source)) ||
       (itemParam->source != SPOTLIGHT_OR_WISHY))
    {
        uVar1 = 0;
    }
    else
    {
        uVar1 = 1;
    }
    return uVar1;
}
