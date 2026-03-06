/**
 * FUN_004de12c.c
 * Source line: 723624
 * Body lines: 13
 */
#include "../../../include/types.h"

void FUN_004de12c(Item_t *param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_0076b274();
  iVar2 = FUN_0076b274(param_2);
  iVar1 += iVar2;
  if (4 < iVar1) {
    FUN_006bb230(param_2,4);
    FUN_006bb230(param_1,iVar1 + -4);
    return;
  }
  FUN_006bb230(param_2,iVar1);
  Item_Copy(param_1,(Item_t *)&DAT_0095bfdc);
  return;
}
