/**
 * FUN_002fcb34.c
 * Source line: 395104
 * Body lines: 13
 */
#include "../../../include/types.h"

byte FUN_002fcb34(Item_t *param_1)

{
  byte bVar1;
  ItemParam_t *itemParam;
  
  itemParam = Item_GetParam(param_1);
  if (itemParam == NULL) {
    bVar1 = 0x9b;
  }
  else {
    bVar1 = itemParam->_xA;
    if (0x9a < bVar1) {
      bVar1 = 0;
    }
  }
  return bVar1;
}
