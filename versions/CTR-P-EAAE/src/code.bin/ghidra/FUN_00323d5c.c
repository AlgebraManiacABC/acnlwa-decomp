/**
 * FUN_00323d5c.c
 * Source line: 426117
 * Body lines: 10
 */
#include "../../../include/types.h"

undefined4 FUN_00323d5c(int param_1,undefined4 param_2)

{
  int iVar1;
  Fg_t *item;
  
  iVar1 = FUN_006c6590(param_1,param_2,0);
  if ((((iVar1 == 0) && (iVar1 = FUN_00300298(param_1,param_2,0), iVar1 != 0)) &&
      (iVar1 = FUN_006a5e34(), iVar1 != 0)) &&
     ((item = FUN_002feb00(iVar1,param_1,param_2,0), item == NULL ||
      (iVar1 = Item_IsID((Item_t *)item,0x9e), iVar1 == 0)))) {
    return 1;
  }
  return 0;
}
