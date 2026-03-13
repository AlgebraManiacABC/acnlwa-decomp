/**
 * FUN_00746e4c.c
 * Source line: 1102864
 * Body lines: 8
 */
#include "../../../include/types.h"

undefined4 FUN_00746e4c(int param_1,uint param_2)

{
  undefined4 uVar1;
  
  if (param_2 < *(uint *)(param_1 + 400)) {
    uVar1 = *(undefined4 *)(param_1 + param_2 * 4);
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}
