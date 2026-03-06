/**
 * FUN_0029c554.c
 * Source line: 341119
 * Body lines: 9
 */
#include "../../../include/types.h"

void FUN_0029c554(int param_1)

{
  uint uVar1;
  
  uVar1 = *(uint *)(param_1 + 0x288);
  if (0xc800 < uVar1) {
    uVar1 = 0xc800;
  }
  FUN_002e43d0(param_1 + 0x18,*(undefined4 *)(param_1 + 0x27c),uVar1);
  *(uint *)(param_1 + 0x27c) = *(int *)(param_1 + 0x27c) + uVar1;
  *(uint *)(param_1 + 0x288) = *(int *)(param_1 + 0x288) - uVar1;
  return;
}
