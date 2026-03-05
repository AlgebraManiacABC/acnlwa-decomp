#include "../../include/item.h"

int Item_GetPrice(ItemParam_t * itemParam)
{
    return itemParam->buy_price * itemParam->price_multiplier;
}
