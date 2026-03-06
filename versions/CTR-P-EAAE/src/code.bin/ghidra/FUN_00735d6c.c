/**
 * FUN_00735d6c.c
 * Source line: 1091165
 * Body lines: 9
 */
#include "../../../include/types.h"

undefined4 FUN_00735d6c(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  if (param_2 + -0x40000 < (undefined4 *)0x3ff00000) {
    *param_2 = *(undefined4 *)(param_1 + 0x24);
    uVar1 = 0;
  }
  else {
    uVar1 = 0xe0e14826;
  }
  return uVar1;
}
