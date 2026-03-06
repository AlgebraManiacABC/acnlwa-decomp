/**
 * FUN_00768008.c
 * Source line: 1125691
 * Body lines: 11
 */
#include "../../../include/types.h"

int FUN_00768008(Item_t *param_1)

{
  ItemParam_t *pIVar1;
  int iVar2;
  uint uVar3;
  
  pIVar1 = Item_GetParam(param_1);
  if ((pIVar1 == NULL) || (iVar2 = FUN_007486dc(pIVar1), iVar2 == 0)) {
    uVar3 = 0;
  }
  else {
    uVar3 = (uint)(param_1->_x2 >> 0xe);
  }
  return uVar3 << 0xe;
}
