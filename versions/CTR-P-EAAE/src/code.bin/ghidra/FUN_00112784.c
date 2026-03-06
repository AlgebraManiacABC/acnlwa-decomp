/**
 * FUN_00112784.c
 * Source line: 113459
 * Body lines: 6
 */
#include "../../../include/types.h"

uint FUN_00112784(int param_1)

{
  uint uVar1;
  
  uVar1 = 0;
  if (param_1 != 0) {
    uVar1 = ((uint)*(byte *)(param_1 + 0x21) << 0x19) >> 0x1f;
  }
  return uVar1;
}
