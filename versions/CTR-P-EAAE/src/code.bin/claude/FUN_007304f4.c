/**
 * FUN_007304f4.c
 * Source line: 1087101
 * Body lines: 6
 */
#include "../../../include/types.h"

bool FUN_007304f4(uint param_1)

{
  uint uVar1;
  
  uVar1 = (uint)*(byte *)(param_1 + 0xe);
  if (uVar1 != 0xff) {
    param_1 = (uint)*(byte *)(param_1 + 0xf);
  }
  return uVar1 != 0xff && uVar1 != param_1;
}
