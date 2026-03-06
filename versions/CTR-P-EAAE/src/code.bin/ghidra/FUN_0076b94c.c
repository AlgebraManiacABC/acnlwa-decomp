/**
 * FUN_0076b94c.c
 * Source line: 1129030
 * Body lines: 10
 */
#include "../../../include/types.h"

ushort FUN_0076b94c(Item_t *param_1)

{
  ushort uVar1;
  ItemParam_t *pIVar2;
  
  pIVar2 = Item_GetParam(param_1);
  if (((pIVar2 == NULL) || (0x31 < (byte)pIVar2->field_0xf)) || (pIVar2->field_0xf != 0x10)) {
    uVar1 = 0;
  }
  else {
    uVar1 = param_1->_x2 & 0x3fff;
  }
  return uVar1;
}
