/**
 * FUN_007485b4.c
 * Source line: 1104450
 * Body lines: 6
 */
#include "../../../include/types.h"

undefined4 FUN_007485b4(int param_1)

{
  uint uVar1;
  
  uVar1 = (uint)*(byte *)(param_1 + 0xd);
  if (0xb8 < uVar1) {
    uVar1 = 0;
  }
  return *(undefined4 *)(&DAT_00877eb4 + uVar1 * 4);
}
