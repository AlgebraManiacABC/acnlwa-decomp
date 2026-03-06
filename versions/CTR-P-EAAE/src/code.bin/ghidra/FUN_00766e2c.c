/**
 * FUN_00766e2c.c
 * Source line: 1124887
 * Body lines: 11
 */
#include "../../../include/types.h"

undefined4 FUN_00766e2c(int *param_1)

{
  undefined4 uVar1;
  
  if ((float)param_1[2] < (float)(longlong)*param_1) {
    uVar1 = 0;
  }
  else if ((float)(longlong)param_1[1] <= (float)param_1[2]) {
    uVar1 = 2;
  }
  else {
    uVar1 = 1;
  }
  return uVar1;
}
