/**
 * FUN_001b9c74.c
 * Source line: 223962
 * Body lines: 8
 */
#include "../../../include/types.h"

undefined2 FUN_001b9c74(int param_1)

{
  undefined2 uVar1;
  
  if (param_1 - 0xa6U < 6) {
    uVar1 = *(undefined2 *)(&UNK_00865338 + (param_1 - 0xa6U) * 2);
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}
