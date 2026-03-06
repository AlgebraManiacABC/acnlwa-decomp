/**
 * FUN_006e8080.c
 * Source line: 1044643
 * Body lines: 10
 */
#include "../../../include/types.h"

void FUN_006e8080(int param_1)

{
  int iVar1;
  
  FUN_00303fb4(*(int *)(param_1 + 0x28) + 0xb06,2,0);
  FUN_00303fb4(*(int *)(param_1 + 0x28) + 0xb06,0);
  *(undefined1 *)(param_1 + 0x26) = 0;
  iVar1 = (**(code **)(**(int **)(param_1 + 0x28) + 0xf4))();
  if (iVar1 != 0) {
    FUN_00205d80(0);
  }
  *(undefined1 *)(*(int *)(param_1 + 0x28) + 0x866) = 0;
  return;
}
