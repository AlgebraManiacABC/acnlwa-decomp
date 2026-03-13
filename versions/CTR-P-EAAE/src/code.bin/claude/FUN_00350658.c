/**
 * FUN_00350658.c
 * Source line: 452196
 * Body lines: 8
 */
#include "../../../include/types.h"

undefined4 FUN_00350658(uint param_1)

{
  undefined4 uVar1;
  
  if (param_1 < 0xbb) {
    uVar1 = *(undefined4 *)(param_1 * 4 + 0x974bb0);
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}
