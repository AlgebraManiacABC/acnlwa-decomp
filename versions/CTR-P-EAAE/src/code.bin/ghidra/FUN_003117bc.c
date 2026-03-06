/**
 * FUN_003117bc.c
 * Source line: 414813
 * Body lines: 8
 */
#include "../../../include/types.h"

byte FUN_003117bc(Item_t *param_1)

{
  byte bVar1;
  ItemParam_t *itemParam;
  
  itemParam = Item_GetParam(param_1);
  bVar1 = 0;
  if ((itemParam != NULL) && (bVar1 = itemParam->field_0xf, 0x31 < bVar1)) {
    bVar1 = 0;
  }
  return bVar1;
}
