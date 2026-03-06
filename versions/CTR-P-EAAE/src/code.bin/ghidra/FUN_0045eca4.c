/**
 * FUN_0045eca4.c
 * Source line: 626792
 * Body lines: 7
 */
#include "../../../include/types.h"

bool FUN_0045eca4(int param_1,undefined2 param_2)

{
  uint uVar1;
  
  uVar1 = *(uint *)(param_1 + 0x40);
  if (uVar1 < 0x20) {
    *(uint *)(param_1 + 0x40) = uVar1 + 1;
    *(undefined2 *)(param_1 + uVar1 * 2) = param_2;
  }
  return uVar1 < 0x20;
}
