/**
 * FUN_0029c5d4.c
 * Source line: 341153
 * Body lines: 9
 */
#include "../../../include/types.h"

void FUN_0029c5d4(int param_1)

{
  uint uVar1;
  
  uVar1 = *(uint *)(param_1 + 0x290);
  if (0xc800 < uVar1) {
    uVar1 = 0xc800;
  }
  FUN_002e43d0(param_1 + 0x18,*(undefined4 *)(param_1 + 0x284),uVar1);
  *(uint *)(param_1 + 0x284) = *(int *)(param_1 + 0x284) + uVar1;
  *(uint *)(param_1 + 0x290) = *(int *)(param_1 + 0x290) - uVar1;
  return;
}
