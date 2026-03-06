/**
 * FUN_0076a9dc.c
 * Source line: 1128108
 * Body lines: 13
 */
#include "../../../include/types.h"

byte FUN_0076a9dc(Item_t *param_1)

{
  byte bVar1;
  ItemParam_t *pIVar2;
  
  pIVar2 = Item_GetParam(param_1);
  bVar1 = 0;
  if (pIVar2 != NULL) {
    if ((byte)pIVar2->field_0x14 >> 4 < 3) {
      bVar1 = (byte)pIVar2->field_0x14 >> 4;
    }
    else {
      bVar1 = 0;
    }
  }
  return bVar1;
}
