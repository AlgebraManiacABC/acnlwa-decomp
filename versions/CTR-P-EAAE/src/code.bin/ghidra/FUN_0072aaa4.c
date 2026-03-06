/**
 * FUN_0072aaa4.c
 * Source line: 1083375
 * Body lines: 8
 */
#include "../../../include/types.h"

undefined4 FUN_0072aaa4(int param_1)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 0x30) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x2c) + 4) + 8);
  }
  return uVar1;
}
