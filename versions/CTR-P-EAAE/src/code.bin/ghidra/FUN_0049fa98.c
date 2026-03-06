/**
 * FUN_0049fa98.c
 * Source line: 676243
 * Body lines: 8
 */
#include "../../../include/types.h"

void FUN_0049fa98(int param_1)

{
  uint uVar1;
  
  uVar1 = *(uint *)(param_1 + 0x3c) & 0xffffff9f;
  *(uint *)(param_1 + 0x3c) = uVar1;
  if (((~uVar1 & 0x180) == 0) &&
     (*(uint *)(param_1 + 0x3c) = uVar1 | 0x40, (~(uVar1 | 0x40) & 0x200) == 0)) {
    *(uint *)(param_1 + 0x3c) = uVar1 | 0x60;
  }
  return;
}
