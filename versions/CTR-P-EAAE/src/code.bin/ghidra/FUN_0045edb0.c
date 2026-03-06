/**
 * FUN_0045edb0.c
 * Source line: 626865
 * Body lines: 14
 */
#include "../../../include/types.h"

void FUN_0045edb0(int param_1)

{
  if (*(int *)(param_1 + 0x2c) - 0x100000U < 0x3ff00000) {
    FUN_00453a34();
    (**(code **)(**(int **)(param_1 + 0x2c) + 8))(*(int **)(param_1 + 0x2c),0);
  }
  if (*(int *)(param_1 + 0x30) - 0x100000U < 0x3ff00000) {
    FUN_0045826c();
    (**(code **)(**(int **)(param_1 + 0x30) + 8))(*(int **)(param_1 + 0x30),0);
  }
  if (*(int *)(param_1 + 0x34) - 0x100000U < 0x3ff00000) {
    FUN_0045e8a8();
          // WARNING: Could not recover jumptable at 0x0045ee34. Too many branches
          // WARNING: Treating indirect jump as call
    (**(code **)(**(int **)(param_1 + 0x34) + 8))(*(int **)(param_1 + 0x34),0);
    return;
  }
  return;
}
