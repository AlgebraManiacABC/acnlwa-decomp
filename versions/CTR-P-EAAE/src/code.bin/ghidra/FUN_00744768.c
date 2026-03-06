/**
 * FUN_00744768.c
 * Source line: 1100862
 * Body lines: 10
 */
#include "../../../include/types.h"

void FUN_00744768(int param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = (**(code **)(**(int **)(param_1 + 4) + 0x44))(*(int **)(param_1 + 4),param_2);
  if ((iVar1 == 0) &&
     ((iVar1 = (**(code **)(**(int **)(param_1 + 8) + 0x44))(*(int **)(param_1 + 8),param_2),
      iVar1 != 0 || (*(char *)(param_1 + 0xc) == '\0')))) {
          // WARNING: Could not recover jumptable at 0x007447e4. Too many branches
          // WARNING: Treating indirect jump as call
    (**(code **)(**(int **)(param_1 + 8) + 0x38))(*(int **)(param_1 + 8),param_2);
    return;
  }
          // WARNING: Could not recover jumptable at 0x007447cc. Too many branches
          // WARNING: Treating indirect jump as call
  (**(code **)(**(int **)(param_1 + 4) + 0x38))(*(int **)(param_1 + 4),param_2);
  return;
}
