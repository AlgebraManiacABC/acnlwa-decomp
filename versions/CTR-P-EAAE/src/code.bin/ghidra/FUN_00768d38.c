/**
 * FUN_00768d38.c
 * Source line: 1126556
 * Body lines: 13
 */
#include "../../../include/types.h"

byte FUN_00768d38(Item_t *param_1)

{
  byte bVar1;
  ItemParam_t *pIVar2;
  
  pIVar2 = Item_GetParam(param_1);
  bVar1 = 0;
  if (pIVar2 != NULL) {
    if ((byte)pIVar2->field_0x16 >> 4 < 0xf) {
      bVar1 = (byte)pIVar2->field_0x16 >> 4;
    }
    else {
      bVar1 = 0;
    }
  }
  return bVar1;
}
