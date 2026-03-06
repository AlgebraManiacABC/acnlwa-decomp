/**
 * FUN_0044ac74.c
 * Source line: 611905
 * Body lines: 6
 */
#include "../../../include/types.h"

void FUN_0044ac74(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  if ((*(int *)(param_1 + 0x44) != 0) && (iVar1 = FUN_0073264c(), iVar1 != 0)) {
          // WARNING: Could not recover jumptable at 0x0044acb4. Too many branches
          // WARNING: Treating indirect jump as call
    (**(code **)(**(int **)(param_1 + 0x44) + 0x54))(*(int **)(param_1 + 0x44),param_2,param_3);
    return;
  }
  return;
}
