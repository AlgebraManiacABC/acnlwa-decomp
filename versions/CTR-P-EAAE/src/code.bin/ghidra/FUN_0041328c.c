/**
 * FUN_0041328c.c
 * Source line: 579436
 * Body lines: 8
 */
#include "../../../include/types.h"

undefined4 FUN_0041328c(int param_1)

{
  undefined4 uVar1;
  
  if (((*(byte *)(param_1 + 0x25) & 2) == 0) || ((*(byte *)(param_1 + 0x25) & 1) != 0)) {
    uVar1 = 0;
  }
  else {
    uVar1 = 1;
  }
  return uVar1;
}
