/**
 * FUN_00350640.c
 * Source line: 452180
 * Body lines: 8
 */
#include "../../../include/types.h"

undefined4 FUN_00350640(uint param_1)

{
  undefined4 uVar1;
  
  if (param_1 < 7) {
    uVar1 = *(undefined4 *)(param_1 * 4 + 0x97d820);
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}
