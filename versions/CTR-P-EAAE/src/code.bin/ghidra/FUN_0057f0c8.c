/**
 * FUN_0057f0c8.c
 * Source line: 825882
 * Body lines: 12
 */
#include "../../../include/types.h"

void FUN_0057f0c8(int param_1)

{
  int iVar1;
  
  (**(code **)(**(int **)(param_1 + 0x560) + 0x10))();
  *(undefined4 *)(*(int *)(param_1 + 0x55c) + 0x184) = 2;
  if (*(int *)(param_1 + 0x1104) == 2) {
    iVar1 = 0;
    do {
      FUN_0050c394(*(undefined4 *)(*(int *)(param_1 + iVar1 * 4 + 0x1118) + 4));
      iVar1 += 1;
    } while (iVar1 < 2);
  }
          // WARNING: Could not recover jumptable at 0x0057f130. Too many branches
          // WARNING: Treating indirect jump as call
  (**(code **)(**(int **)(param_1 + 0x568) + 0x50))();
  return;
}
