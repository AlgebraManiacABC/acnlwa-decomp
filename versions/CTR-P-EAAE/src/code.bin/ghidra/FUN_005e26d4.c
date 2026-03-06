/**
 * FUN_005e26d4.c
 * Source line: 892982
 * Body lines: 13
 */
#include "../../../include/types.h"

void FUN_005e26d4(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = FUN_005d46dc();
  if (iVar1 == 0) {
    if (**(byte **)(param_2 + 0x10) < 10) {
          // WARNING: Could not recover jumptable at 0x005e2728. Too many branches
          // WARNING: Treating indirect jump as call
      (**(code **)(**(int **)(param_1 + 0x60) + 0x160))();
      return;
    }
  }
  else if (**(byte **)(param_2 + 0x10) < 10) {
          // WARNING: Could not recover jumptable at 0x005e270c. Too many branches
          // WARNING: Treating indirect jump as call
    (**(code **)(**(int **)(param_1 + 0x60) + 0x15c))();
    return;
  }
  return;
}
