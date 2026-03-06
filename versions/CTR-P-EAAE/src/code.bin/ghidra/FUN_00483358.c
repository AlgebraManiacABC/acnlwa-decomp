/**
 * FUN_00483358.c
 * Source line: 655220
 * Body lines: 12
 */
#include "../../../include/types.h"

undefined8 FUN_00483358(undefined4 *param_1,uint *param_2,uint param_3)

{
  uint uVar1;
  undefined8 uVar2;
  uint auStack_20 [4];
  
  uVar1 = 0xf - (int)*(char *)((int)param_1 + 5);
  __rt_memclr((undefined4 *)((int)param_1 + (0x38 - uVar1)),uVar1);
  FUN_007e4b7c(auStack_20,param_1 + 10,param_1 + 6,1,*param_1);
  uVar1 = (int)*(char *)((int)param_1 + 6);
  if (param_3 <= (uint)(int)*(char *)((int)param_1 + 6)) {
    uVar1 = param_3;
  }
  uVar2 = __rt_memcpy(param_2,auStack_20,uVar1);
  return uVar2;
}
