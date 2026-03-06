/**
 * FUN_0076c408.c
 * Source line: 1129658
 * Body lines: 10
 */
#include "../../../include/types.h"

ushort FUN_0076c408(Item_t *param_1)

{
  ushort uVar1;
  ItemParam_t *pIVar2;
  
  pIVar2 = Item_GetParam(param_1);
  if (((pIVar2 == NULL) || (0x9a < pIVar2->_xA)) || (pIVar2->_xA != 0x8d)) {
    uVar1 = 0;
  }
  else {
    uVar1 = param_1->_x2 & 0x3fff;
  }
  return uVar1;
}
