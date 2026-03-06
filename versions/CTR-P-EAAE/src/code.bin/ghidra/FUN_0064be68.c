/**
 * FUN_0064be68.c
 * Source line: 958928
 * Body lines: 10
 */
#include "../../../include/types.h"

void FUN_0064be68(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_00632acc();
  if (iVar1 != 0) {
    uVar2 = FUN_002fb378();
    FUN_0030f56c(iVar1 + 0xea,uVar2);
    *(short *)(iVar1 + 0xee) = (short)uRam0094d94c;
  }
  *(code **)(param_1 + 0x164) = FUN_0016fd38;
  return;
}
