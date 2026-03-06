/**
 * FUN_0061ee60.c
 * Source line: 934193
 * Body lines: 7
 */
#include "../../../include/types.h"

void FUN_0061ee60(int param_1)

{
  uint uVar1;
  
  uVar1 = *(uint *)(param_1 + 0x50);
  if (0x96 < uVar1) {
    uVar1 = 0x96;
  }
  *(uint *)(param_1 + 0x50) = uVar1;
  return;
}
