/**
 * FUN_007685e8.c
 * Source line: 1126053
 * Body lines: 11
 */
#include "../../../include/types.h"

ushort FUN_007685e8(Item_t *param_1)

{
  ushort uVar1;
  ItemParam_t *pIVar2;
  
  pIVar2 = Item_GetParam(param_1);
  if (((pIVar2 != NULL) && (pIVar2->_xA < 0x9b)) && (pIVar2->_xA == 0x46)) {
    uVar1 = param_1->_x2 & 0x3fff;
    if ((param_1->_x2 & 0x3fff) != 0) {
      uVar1 = 1;
    }
    return uVar1;
  }
  return 0;
}
