/**
 * FUN_001ca7e0.c
 * Source line: 232622
 * Body lines: 12
 */
#include "../../../include/types.h"

void FUN_001ca7e0(int param_1)

{
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  
  local_18 = *(undefined4 *)(param_1 + 0xc);
  uStack_14 = *(undefined4 *)(param_1 + 0x10);
  uStack_10 = *(undefined4 *)(param_1 + 0x14);
  FUN_001cb118(param_1,&local_18,*(undefined4 *)(param_1 + 0x3c));
  if (0 < *(int *)(param_1 + 0x3c)) {
    *(int *)(param_1 + 0x3c) = *(int *)(param_1 + 0x3c) + -1;
  }
  FUN_001c9df0(param_1);
  return;
}
