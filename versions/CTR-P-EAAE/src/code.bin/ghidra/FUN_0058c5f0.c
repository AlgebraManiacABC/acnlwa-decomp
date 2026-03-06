/**
 * FUN_0058c5f0.c
 * Source line: 836518
 * Body lines: 9
 */
#include "../../../include/types.h"

void FUN_0058c5f0(int param_1,undefined4 param_2)

{
  uint uVar1;
  uint uVar2;
  undefined8 uVar3;
  
  uVar1 = *(uint *)(param_1 + 0x18);
  uVar2 = *(uint *)(param_1 + 0x1c);
  uVar3 = _ll_shift_l(1,0,param_2);
  *(uint *)(param_1 + 0x18) = uVar1 & ~(uint)uVar3;
  *(uint *)(param_1 + 0x1c) = uVar2 & ~(uint)((ulonglong)uVar3 >> 0x20);
  return;
}
