/**
 * FUN_001c3d20.c
 * Source line: 230091
 * Body lines: 14
 */
#include "../../../include/types.h"

void FUN_001c3d20(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = (**(code **)(**(int **)(param_1 + 0x4c) + 0x2c))(*(int **)(param_1 + 0x4c),param_2);
  if (iVar1 != 0) {
    (**(code **)(**(int **)(param_1 + 0x4c) + 0x38))(*(int **)(param_1 + 0x4c),param_2,param_3);
          // WARNING: Could not recover jumptable at 0x001c3d78. Too many branches
          // WARNING: Treating indirect jump as call
    (**(code **)(**(int **)(param_1 + 0x4c) + 0x30))(*(int **)(param_1 + 0x4c),param_2);
    return;
  }
  iVar1 = FUN_00718c0c(param_1 + 0x50,param_2);
  if (iVar1 != 0) {
    FUN_0026fa8c(param_1 + 0x50,param_2,param_3,0);
    FUN_0026d644(param_1 + 0x50,param_2);
    return;
  }
  return;
}
