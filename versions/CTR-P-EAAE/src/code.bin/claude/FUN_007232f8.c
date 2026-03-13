/**
 * FUN_007232f8.c
 * Source line: 1078036
 * Body lines: 8
 */
#include "../../../include/types.h"

undefined2 FUN_007232f8(int param_1,int param_2)

{
  undefined2 uVar1;
  
  if (param_2 < 3) {
    uVar1 = *(undefined2 *)(param_1 + param_2 * 2 + 0x134);
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}
