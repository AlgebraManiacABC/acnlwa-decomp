/**
 * Item_GetPrice.c
 * Source line: 1104531
 * Body lines: 1
 */
#include "../../../include/types.h"

int Item_GetPrice(ItemParam_t *itemParam)

{
  return (uint)itemParam->buy_price * (int)(char)itemParam->price_multiplier;
}
