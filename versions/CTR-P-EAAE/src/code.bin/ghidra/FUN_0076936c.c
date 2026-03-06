/**
 * FUN_0076936c.c
 * Source line: 1126850
 * Body lines: 11
 */
#include "../../../include/types.h"

ushort FUN_0076936c(Item_t *param_1)

{
  ushort uVar1;
  ItemParam_t *pIVar2;
  int iVar3;
  
  pIVar2 = Item_GetParam(param_1);
  if ((pIVar2 == NULL) || (iVar3 = FUN_007486dc(pIVar2), iVar3 == 0)) {
    uVar1 = 0;
  }
  else {
    uVar1 = param_1->_x2 >> 0xe;
  }
  return uVar1;
}
