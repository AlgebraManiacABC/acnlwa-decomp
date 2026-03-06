/**
 * FUN_00768268.c
 * Source line: 1125854
 * Body lines: 8
 */
#include "../../../include/types.h"

byte FUN_00768268(Item_t *param_1)

{
  byte bVar1;
  ItemParam_t *pIVar2;
  
  pIVar2 = Item_GetParam(param_1);
  bVar1 = 0;
  if ((pIVar2 != NULL) && (bVar1 = pIVar2->field_0x15 & 0xf, 10 < bVar1)) {
    bVar1 = 0;
  }
  return bVar1;
}
