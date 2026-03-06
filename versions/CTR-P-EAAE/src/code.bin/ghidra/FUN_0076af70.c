/**
 * FUN_0076af70.c
 * Source line: 1128507
 * Body lines: 8
 */
#include "../../../include/types.h"

byte FUN_0076af70(Item_t *param_1)

{
  byte bVar1;
  ItemParam_t *pIVar2;
  
  pIVar2 = Item_GetParam(param_1);
  bVar1 = 0;
  if (pIVar2 != NULL) {
    bVar1 = pIVar2->field_0x14 & 0xf;
  }
  return bVar1;
}
