/**
 * Item_IsFromWishyOrSpotlight.c
 * Source line: 1127005
 * Body lines: 11
 */
#include "../../../include/types.h"

undefined4 Item_IsFromWishyOrSpotlight(Item_t *param_1)

{
  ItemParam_t *itemParam;
  undefined4 uVar1;
  
  itemParam = Item_GetParam(param_1);
  if (((itemParam == NULL) || (0xb8 < itemParam->source)) ||
     (itemParam->source != Spotlight or Wishy)) {
    uVar1 = 0;
  }
  else {
    uVar1 = 1;
  }
  return uVar1;
}
