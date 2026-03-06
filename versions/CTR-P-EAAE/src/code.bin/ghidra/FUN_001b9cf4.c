/**
 * FUN_001b9cf4.c
 * Source line: 224026
 * Body lines: 8
 */
#include "../../../include/types.h"

undefined2 FUN_001b9cf4(int param_1)

{
  undefined2 uVar1;
  
  if (param_1 - 0xbbU < 3) {
    uVar1 = *(undefined2 *)(&UNK_0086515a + (param_1 - 0xbbU) * 2);
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}
