/**
 * FUN_0058c4cc.c
 * Source line: 836426
 * Body lines: 9
 */
#include "../../../include/types.h"

void FUN_0058c4cc(int param_1,undefined4 param_2)

{
  uint uVar1;
  uint uVar2;
  undefined8 uVar3;
  
  uVar1 = *(uint *)(param_1 + 0x20);
  uVar2 = *(uint *)(param_1 + 0x24);
  uVar3 = _ll_shift_l(1,0,param_2);
  *(uint *)(param_1 + 0x20) = (uint)uVar3 | uVar1;
  *(uint *)(param_1 + 0x24) = (uint)((ulonglong)uVar3 >> 0x20) | uVar2;
  return;
}
