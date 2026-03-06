/**
 * FUN_004d8f98.c
 * Source line: 720578
 * Body lines: 10
 */
#include "../../../include/types.h"

void FUN_004d8f98(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = (**(code **)(**(int **)(param_1 + 4) + 0xc))();
  iVar2 = (**(code **)(**(int **)(param_1 + 8) + 0xc))();
  if (iVar2 <= iVar1) {
          // WARNING: Could not recover jumptable at 0x004d8fe4. Too many branches
          // WARNING: Treating indirect jump as call
    (**(code **)(**(int **)(param_1 + 4) + 0x2c))(*(int **)(param_1 + 4),param_2);
    return;
  }
          // WARNING: Could not recover jumptable at 0x004d8ffc. Too many branches
          // WARNING: Treating indirect jump as call
  (**(code **)(**(int **)(param_1 + 8) + 0x2c))(*(int **)(param_1 + 8),param_2);
  return;
}
