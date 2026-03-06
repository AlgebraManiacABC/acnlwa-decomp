/**
 * FUN_00302fec.c
 * Source line: 400217
 * Body lines: 13
 */
#include "../../../include/types.h"

byte FUN_00302fec(Item_t *param_1)

{
  byte bVar1;
  ItemParam_t *pIVar2;
  
  pIVar2 = Item_GetParam(param_1);
  if (pIVar2 == NULL) {
    bVar1 = 5;
  }
  else {
    bVar1 = pIVar2->field20_0x17 & 0xf;
    if (4 < bVar1) {
      bVar1 = 0;
    }
  }
  return bVar1;
}
