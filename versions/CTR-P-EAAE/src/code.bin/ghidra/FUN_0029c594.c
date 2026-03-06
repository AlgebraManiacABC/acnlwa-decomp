/**
 * FUN_0029c594.c
 * Source line: 341136
 * Body lines: 9
 */
#include "../../../include/types.h"

void FUN_0029c594(int param_1)

{
  uint uVar1;
  
  uVar1 = *(uint *)(param_1 + 0x28c);
  if (0xc800 < uVar1) {
    uVar1 = 0xc800;
  }
  FUN_002e43d0(param_1 + 0x18,*(undefined4 *)(param_1 + 0x280),uVar1);
  *(uint *)(param_1 + 0x280) = *(int *)(param_1 + 0x280) + uVar1;
  *(uint *)(param_1 + 0x28c) = *(int *)(param_1 + 0x28c) - uVar1;
  return;
}
