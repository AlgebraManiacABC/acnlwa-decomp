/**
 * FUN_00769aa0.c
 * Source line: 1127283
 * Body lines: 8
 */
#include "../../../include/types.h"

byte FUN_00769aa0(Item_t *param_1)

{
  byte bVar1;
  ItemParam_t *pIVar2;
  
  pIVar2 = Item_GetParam(param_1);
  bVar1 = 0;
  if ((pIVar2 != NULL) && (bVar1 = pIVar2->field_0x16 & 0xf, 9 < bVar1)) {
    bVar1 = 0;
  }
  return bVar1;
}
