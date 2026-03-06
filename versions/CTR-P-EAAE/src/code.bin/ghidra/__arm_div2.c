/**
 * __arm_div2.c
 * Source line: 392901
 * Body lines: 11
 */
#include "../../../include/types.h"

undefined8 __arm_div2(uint param_1,uint param_2,int param_3)

{
  uint uVar1;
  bool bVar2;
  
  bVar2 = param_2 <= param_1 >> 1;
  if (bVar2) {
    param_1 += param_2 * -2;
  }
  uVar1 = param_1 - param_2;
  if (param_2 > param_1) {
    uVar1 = param_1;
  }
  return CONCAT44(uVar1,(param_3 * 2 + (uint)bVar2) * 2 + (uint)(param_2 <= param_1));
}
