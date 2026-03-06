/**
 * FUN_0013a750.c
 * Source line: 147269
 * Body lines: 8
 */
#include "../../../include/types.h"

undefined4 FUN_0013a750(undefined4 *param_1,int param_2)

{
  undefined4 uVar1;
  
  if (param_2 == 0) {
    uVar1 = *param_1;
  }
  else {
    uVar1 = *(undefined4 *)((uint)*(ushort *)((int)param_1 + 10) + param_2 + 4);
  }
  return uVar1;
}
