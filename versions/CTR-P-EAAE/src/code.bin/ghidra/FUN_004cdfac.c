/**
 * FUN_004cdfac.c
 * Source line: 712977
 * Body lines: 12
 */
#include "../../../include/types.h"

void FUN_004cdfac(undefined4 *param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  uint uVar1;
  
  if (param_4 == 0) {
    return;
  }
  param_1[1] = param_3;
  param_1[3] = param_4;
  *param_1 = param_2;
  uVar1 = __aeabi_uidivmod(param_3,param_4);
  param_1[5] = 0;
  param_1[2] = uVar1 & 0xffffffe0;
  param_1[4] = 0;
  return;
}
