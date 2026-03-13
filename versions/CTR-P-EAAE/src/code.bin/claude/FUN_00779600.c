/**
 * FUN_00779600.c
 * Source line: 1136008
 * Body lines: 7
 */
#include "../../../include/types.h"

void FUN_00779600(uint *param_1,uint param_2)

{
  uint uVar1;
  
  uVar1 = param_2 & 0xff | (param_2 & 0xff) << 8;
  uVar1 |= uVar1 << 0x10;
  *param_1 = uVar1;
  param_1[1] = uVar1;
  param_1[2] = uVar1;
  return;
}
