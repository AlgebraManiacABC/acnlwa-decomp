/**
 * FUN_00170320.c
 * Source line: 187072
 * Body lines: 8
 */
#include "../../../include/types.h"

undefined4 FUN_00170320(int param_1)

{
  undefined4 uVar1;
  
  if (param_1 - 1U < 0xc) {
    uVar1 = *(undefined4 *)(&UNK_008a3ac4 + param_1 * 4);
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}
