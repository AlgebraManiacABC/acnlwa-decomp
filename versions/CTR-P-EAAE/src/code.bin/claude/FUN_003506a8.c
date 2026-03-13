/**
 * FUN_003506a8.c
 * Source line: 452227
 * Body lines: 8
 */
#include "../../../include/types.h"

undefined4 FUN_003506a8(uint param_1)

{
  undefined4 uVar1;
  
  if (param_1 < 0xc) {
    uVar1 = *(undefined4 *)(param_1 * 4 + 0x974e9c);
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}
