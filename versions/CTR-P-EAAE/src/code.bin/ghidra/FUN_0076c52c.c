/**
 * FUN_0076c52c.c
 * Source line: 1129743
 * Body lines: 12
 */
#include "../../../include/types.h"

undefined1 FUN_0076c52c(Item_t *param_1)

{
  byte bVar1;
  undefined1 uVar2;
  ItemParam_t *pIVar3;
  
  pIVar3 = Item_GetParam(param_1);
  if (((pIVar3 == NULL) || (bVar1 = pIVar3->_xA, 0x9a < bVar1)) ||
     ((bVar1 != 0x24 && bVar1 != 0x27) && bVar1 != 0x28)) {
    uVar2 = 0;
  }
  else {
    uVar2 = 1;
  }
  return uVar2;
}
