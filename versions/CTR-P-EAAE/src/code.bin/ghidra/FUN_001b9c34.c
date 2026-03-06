/**
 * FUN_001b9c34.c
 * Source line: 223930
 * Body lines: 8
 */
#include "../../../include/types.h"

undefined2 FUN_001b9c34(int param_1)

{
  undefined2 uVar1;
  
  if (param_1 - 0xbeU < 6) {
    uVar1 = *(undefined2 *)(&UNK_00865360 + (param_1 - 0xbeU) * 2);
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}
