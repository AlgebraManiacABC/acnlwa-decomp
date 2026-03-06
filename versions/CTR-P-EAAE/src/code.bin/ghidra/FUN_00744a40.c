/**
 * FUN_00744a40.c
 * Source line: 1100985
 * Body lines: 10
 */
#include "../../../include/types.h"

void FUN_00744a40(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = (**(code **)(**(int **)(param_1 + 4) + 0x44))(*(int **)(param_1 + 4),param_3);
  if ((iVar1 == 0) &&
     ((iVar1 = (**(code **)(**(int **)(param_1 + 8) + 0x44))(*(int **)(param_1 + 8),param_3),
      iVar1 != 0 || (*(char *)(param_1 + 0xc) == '\0')))) {
          // WARNING: Could not recover jumptable at 0x00744ac8. Too many branches
          // WARNING: Treating indirect jump as call
    (**(code **)(**(int **)(param_1 + 8) + 0x40))(*(int **)(param_1 + 8),param_2,param_3);
    return;
  }
          // WARNING: Could not recover jumptable at 0x00744aac. Too many branches
          // WARNING: Treating indirect jump as call
  (**(code **)(**(int **)(param_1 + 4) + 0x40))(*(int **)(param_1 + 4),param_2,param_3);
  return;
}
