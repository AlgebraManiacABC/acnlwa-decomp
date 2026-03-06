/**
 * FUN_0037d768.c
 * Source line: 486551
 * Body lines: 10
 */
#include "../../../include/types.h"

undefined4 * FUN_0037d768(undefined4 *param_1,int param_2)

{
  int *piVar1;
  
  param_2 *= 3;
  *param_1 = 0;
  param_1[1] = param_2;
  if (0 < param_2) {
    piVar1 = (int *)FUN_003619b0(param_2 + 4);
    *piVar1 = param_2;
    *param_1 = piVar1 + 1;
  }
  return param_1;
}
