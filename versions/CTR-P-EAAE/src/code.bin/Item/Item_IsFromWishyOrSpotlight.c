#include "../../../include/item.h"

extern ItemParam_t * Item_GetParam(Item_t *);

uint Item_IsFromWishyOrSpotlight(Item_t * item)
{
    ItemParam_t * itemParam = Item_GetParam(item);
    if(itemParam && itemParam->source < NUM_SOURCES && itemParam->source == SPOTLIGHT_OR_WISHY) return 1;
    return 0;
}
