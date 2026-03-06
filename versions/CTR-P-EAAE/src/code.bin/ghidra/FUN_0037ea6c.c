/**
 * FUN_0037ea6c.c
 * Source line: 487326
 * Body lines: 13
 */
#include "../../../include/types.h"

void FUN_0037ea6c(int param_1,uint param_2)

{
  uint uVar1;
  
  *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + 1;
  *(uint *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + param_2;
  uVar1 = *(uint *)(param_1 + 0x14);
  if (param_2 <= *(uint *)(param_1 + 0x14)) {
    uVar1 = param_2;
  }
  if (param_2 <= *(uint *)(param_1 + 0x18)) {
    param_2 = *(uint *)(param_1 + 0x18);
  }
  *(uint *)(param_1 + 0x14) = uVar1;
  *(uint *)(param_1 + 0x18) = param_2;
  return;
}
