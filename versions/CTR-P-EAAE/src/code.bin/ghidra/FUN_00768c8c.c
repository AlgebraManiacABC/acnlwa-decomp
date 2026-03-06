/**
 * FUN_00768c8c.c
 * Source line: 1126496
 * Body lines: 11
 */
#include "../../../include/types.h"

undefined4 FUN_00768c8c(Item_t *param_1)

{
  ItemParam_t *pIVar1;
  int iVar2;
  
  pIVar1 = Item_GetParam(param_1);
  if ((pIVar1 != NULL) && (iVar2 = FUN_007486dc(pIVar1), iVar2 != 0)) {
    pIVar1 = Item_GetParam(param_1);
    iVar2 = FUN_0074870c(pIVar1);
    if (iVar2 == 1) {
      return 1;
    }
  }
  return 0;
}
