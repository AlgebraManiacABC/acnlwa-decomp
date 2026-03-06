/**
 * FUN_001b9c94.c
 * Source line: 223978
 * Body lines: 8
 */
#include "../../../include/types.h"

undefined2 FUN_001b9c94(int param_1)

{
  undefined2 uVar1;
  
  if (param_1 - 0x9fU < 7) {
    uVar1 = *(undefined2 *)(&UNK_0086532a + (param_1 - 0x9fU) * 2);
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}
