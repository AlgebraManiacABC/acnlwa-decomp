/**
 * FUN_00750894.c
 * Source line: 1107011
 * Body lines: 6
 */
#include "../../../include/types.h"

uint FUN_00750894(int param_1)

{
  uint uVar1;
  
  uVar1 = 0;
  if (*(int *)(param_1 + 0x5f4) != 0) {
    uVar1 = ((uint)*(byte *)(*(int *)(param_1 + 0x5f4) + 4) << 0x1d) >> 0x1f;
  }
  return uVar1;
}
