/**
 * FUN_0058c5dc.c
 * Source line: 836498
 * Body lines: 12
 */
#include "../../../include/types.h"

void FUN_0058c5dc(void)

{
  int iVar1;
  undefined4 unaff_r4;
  uint uVar2;
  uint uVar3;
  undefined8 uVar4;
  
  iVar1 = FUN_00584134();
  uVar2 = *(uint *)(iVar1 + 0x18);
  uVar3 = *(uint *)(iVar1 + 0x1c);
  uVar4 = _ll_shift_l(1,0,0x15,0,unaff_r4);
  *(uint *)(iVar1 + 0x18) = uVar2 & ~(uint)uVar4;
  *(uint *)(iVar1 + 0x1c) = uVar3 & ~(uint)((ulonglong)uVar4 >> 0x20);
  return;
}
