/**
 * FUN_00769634.c
 * Source line: 1127042
 * Body lines: 10
 */
#include "../../../include/types.h"

byte FUN_00769634(Item_t *param_1)

{
  byte bVar1;
  ItemParam_t *pIVar2;
  
  pIVar2 = Item_GetParam(param_1);
  if (pIVar2 == NULL) {
    bVar1 = 1;
  }
  else {
    bVar1 = (byte)pIVar2->field25_0x1c >> 7;
  }
  return bVar1;
}
