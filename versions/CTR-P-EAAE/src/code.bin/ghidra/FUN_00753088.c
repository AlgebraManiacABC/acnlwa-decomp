/**
 * FUN_00753088.c
 * Source line: 1109158
 * Body lines: 7
 */
#include "../../../include/types.h"

bool FUN_00753088(int param_1,undefined4 param_2)

{
  uint uVar1;
  uint uVar2;
  undefined8 uVar3;
  
  uVar1 = *(uint *)(param_1 + 0x18);
  uVar2 = *(uint *)(param_1 + 0x1c);
  uVar3 = _ll_shift_l(1,0,param_2);
  return ((uint)uVar3 & uVar1) != 0 || ((uint)((ulonglong)uVar3 >> 0x20) & uVar2) != 0;
}
