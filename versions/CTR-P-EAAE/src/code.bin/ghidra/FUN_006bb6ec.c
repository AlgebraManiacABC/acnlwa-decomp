/**
 * FUN_006bb6ec.c
 * Source line: 1018006
 * Body lines: 15
 */
#include "../../../include/types.h"

ushort FUN_006bb6ec(Item_t *param_1)

{
  ushort uVar1;
  ItemParam_t *pIVar2;
  
  pIVar2 = Item_GetParam(param_1);
  if (((pIVar2 != NULL) && ((byte)pIVar2->field_0xf < 0x32)) && (pIVar2->field_0xf == 0x10)) {
    pIVar2 = Item_GetParam(param_1);
    if (((pIVar2 == NULL) || (0x31 < (byte)pIVar2->field_0xf)) || (pIVar2->field_0xf != 0x10)) {
      uVar1 = 0;
    }
    else {
      uVar1 = param_1->_x2 & 0x3fff;
    }
    param_1->_x2 = param_1->_x2 & 0xc000 | uVar1 + 1 & 0x3fff;
    return uVar1 + 1;
  }
  return 0;
}
