/**
 * FUN_0076b24c.c
 * Source line: 1128663
 * Body lines: 13
 */
#include "../../../include/types.h"

byte FUN_0076b24c(Item_t *param_1)

{
  byte bVar1;
  ItemParam_t *pIVar2;
  
  pIVar2 = Item_GetParam(param_1);
  bVar1 = 0;
  if (pIVar2 != NULL) {
    if (pIVar2->field20_0x17 >> 4 < 0xd) {
      bVar1 = pIVar2->field20_0x17 >> 4;
    }
    else {
      bVar1 = 0;
    }
  }
  return bVar1;
}
