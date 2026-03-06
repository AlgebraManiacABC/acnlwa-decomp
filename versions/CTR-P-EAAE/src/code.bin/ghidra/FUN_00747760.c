/**
 * FUN_00747760.c
 * Source line: 1103497
 * Body lines: 5
 */
#include "../../../include/types.h"

void FUN_00747760(uint *param_1,uint *param_2)

{
  uint uVar1;
  
  uVar1 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar1 & 0xffff00;
  return;
}
