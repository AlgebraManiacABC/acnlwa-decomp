/**
 * FUN_005ea1d0.c
 * Source line: 898898
 * Body lines: 13
 */
#include "../../../include/types.h"

undefined8 FUN_005ea1d0(uint *param_1,uint *param_2,undefined4 *param_3)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  undefined8 uVar4;
  
  uVar2 = *param_2;
  uVar3 = (int)*param_1 + ((uint)param_3[5] >> 1) * 2;
  bVar1 = uVar3 <= uVar2;
  if (bVar1) {
    uVar4 = __rt_memcpy((uint *)*param_1,(uint *)*param_3,((uint)param_3[5] >> 1) << 1);
    uVar2 = (uint)((ulonglong)uVar4 >> 0x20);
    *param_1 = uVar3;
  }
  return CONCAT44(uVar2,(uint)bVar1);
}
