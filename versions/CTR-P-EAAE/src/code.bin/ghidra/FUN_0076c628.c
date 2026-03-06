/**
 * FUN_0076c628.c
 * Source line: 1129832
 * Body lines: 8
 */
#include "../../../include/types.h"

byte FUN_0076c628(Item_t *param_1)

{
  byte bVar1;
  ItemParam_t *pIVar2;
  
  pIVar2 = Item_GetParam(param_1);
  bVar1 = 0;
  if ((pIVar2 != NULL) && (bVar1 = pIVar2->field_0xb, 0xa9 < bVar1)) {
    bVar1 = 0;
  }
  return bVar1;
}
