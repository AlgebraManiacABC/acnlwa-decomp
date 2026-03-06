/**
 * FUN_0048b1f4.c
 * Source line: 661322
 * Body lines: 9
 */
#include "../../../include/types.h"

uint FUN_0048b1f4(uint *param_1,int param_2)

{
  uint uVar1;
  
  if (param_2 != 0) {
    uVar1 = *param_1;
    if (param_2 + param_1[1] <= uVar1) {
      uVar1 = param_2 + param_1[1];
    }
    param_1[1] = uVar1;
  }
  return param_1[1];
}
