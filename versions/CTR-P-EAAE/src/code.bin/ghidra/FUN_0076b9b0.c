/**
 * FUN_0076b9b0.c
 * Source line: 1129068
 * Body lines: 10
 */
#include "../../../include/types.h"

int FUN_0076b9b0(Item_t *param_1)

{
  byte bVar1;
  ItemParam_t *pIVar2;
  uint uVar3;
  int iVar4;
  
  pIVar2 = Item_GetParam(param_1);
  if ((((pIVar2 == NULL) || (bVar1 = pIVar2->_xA, 0x9a < bVar1)) || (bVar1 != 0x75 && bVar1 != 0x76)
      ) || (uVar3 = param_1->_x2 & 0xffff3fff, iVar4 = uVar3 + 1, 7 < uVar3 - 1)) {
    iVar4 = 0;
  }
  return iVar4;
}
