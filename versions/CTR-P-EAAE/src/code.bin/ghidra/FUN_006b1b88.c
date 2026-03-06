/**
 * FUN_006b1b88.c
 * Source line: 1010170
 * Body lines: 9
 */
#include "../../../include/types.h"

void FUN_006b1b88(int param_1)

{
  int *piVar1;
  int local_20 [6];
  
  FUN_00561ba4(local_20);
  local_20[0] = param_1 + 0x1b4;
  *(undefined4 *)(param_1 + 0x1b8) = 0x32000;
  piVar1 = *(int **)(*(int *)(param_1 + 0x5c) + 0x20);
  (**(code **)(*piVar1 + 0x14))(piVar1,param_1,local_20);
  *(undefined1 *)(param_1 + 0x1ac) = 1;
  return;
}
