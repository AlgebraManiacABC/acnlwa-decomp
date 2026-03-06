/**
 * FUN_001b9cb4.c
 * Source line: 223994
 * Body lines: 8
 */
#include "../../../include/types.h"

undefined2 FUN_001b9cb4(int param_1)

{
  undefined2 uVar1;
  
  if (param_1 - 0xacU < 6) {
    uVar1 = *(undefined2 *)(&UNK_00865344 + (param_1 - 0xacU) * 2);
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}
