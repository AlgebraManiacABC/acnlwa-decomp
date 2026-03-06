/**
 * FUN_0030306c.c
 * Source line: 400252
 * Body lines: 13
 */
#include "../../../include/types.h"

byte FUN_0030306c(Item_t *param_1)

{
  byte bVar1;
  ItemParam_t *pIVar2;
  
  pIVar2 = Item_GetParam(param_1);
  if (pIVar2 == NULL) {
    bVar1 = 2;
  }
  else {
    bVar1 = pIVar2->field_0x1a & 3;
    if (2 < bVar1) {
      bVar1 = 0;
    }
  }
  return bVar1;
}
