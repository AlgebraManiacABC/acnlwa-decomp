/**
 * FUN_007684ec.c
 * Source line: 1125984
 * Body lines: 10
 */
#include "../../../include/types.h"

undefined4 FUN_007684ec(Item_t *param_1)

{
  ItemParam_t *pIVar1;
  int iVar2;
  undefined4 uVar3;
  
  pIVar1 = Item_GetParam(param_1);
  if ((pIVar1 != NULL) && (iVar2 = FUN_007486dc(pIVar1), iVar2 != 0)) {
    pIVar1 = Item_GetParam(param_1);
    uVar3 = FUN_0074870c(pIVar1);
    return uVar3;
  }
  return 0;
}
