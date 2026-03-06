/**
 * FUN_0029e35c.c
 * Source line: 342452
 * Body lines: 6
 */
#include "../../../include/types.h"

void FUN_0029e35c(int param_1)

{
  *(byte *)(*(int *)(param_1 + 0xf250) + 0xb7) =
       *(byte *)(*(int *)(param_1 + 0xf250) + 0xb7) & 0xfe | 1;
  FUN_00222fc4(0,param_1 + 0x3f04,0);
  (**(code **)(**(int **)(param_1 + 0xf1f8) + 0xc))();
  FUN_0021fe54(param_1 + 0x3f04);
  return;
}
