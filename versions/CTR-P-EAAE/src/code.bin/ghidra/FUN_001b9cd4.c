/**
 * FUN_001b9cd4.c
 * Source line: 224010
 * Body lines: 8
 */
#include "../../../include/types.h"

undefined2 FUN_001b9cd4(int param_1)

{
  undefined2 uVar1;
  
  if (param_1 - 0xc4U < 4) {
    uVar1 = *(undefined2 *)(&UNK_00865160 + (param_1 - 0xc4U) * 2);
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}
