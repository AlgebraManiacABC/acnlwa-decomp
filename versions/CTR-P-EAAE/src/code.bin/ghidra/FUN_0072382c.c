/**
 * FUN_0072382c.c
 * Source line: 1078384
 * Body lines: 8
 */
#include "../../../include/types.h"

undefined4 FUN_0072382c(int param_1,uint param_2)

{
  undefined4 uVar1;
  
  if (((int)param_2 < *(int *)(param_1 + 0x2434)) || (*(int *)(param_1 + 0x2434) + 4U <= param_2)) {
    uVar1 = 0;
  }
  else {
    uVar1 = 1;
  }
  return uVar1;
}
