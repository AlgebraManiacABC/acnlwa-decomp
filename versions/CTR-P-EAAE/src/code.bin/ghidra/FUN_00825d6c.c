/**
 * FUN_00825d6c.c
 * Source line: 1235292
 * Body lines: 9
 */
#include "../../../include/types.h"

int FUN_00825d6c(int param_1)

{
  uint uVar1;
  
  uVar1 = *(byte *)(param_1 + 0x24) & 1;
  if ((uVar1 < 2) && (param_1 += uVar1 * 0xc, *(int *)(param_1 + 0x4bc) != 0)) {
    param_1 += 0x4b8;
  }
  else {
    param_1 = 0;
  }
  return param_1;
}
