/**
 * FUN_00231a4c.c
 * Source line: 286249
 * Body lines: 15
 */
#include "../../../include/types.h"

bool FUN_00231a4c(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  uint uVar1;
  int *piVar2;
  int iVar3;
  code *pcVar4;
  
  uVar1 = *(uint *)(param_2 * 0x10 + 0x9538f0);
  pcVar4 = *(code **)(param_2 * 0x10 + 0x9538ec);
  piVar2 = (int *)(param_1 + ((int)uVar1 >> 1));
  if ((uVar1 & 1) != 0) {
    pcVar4 = *(code **)(pcVar4 + *piVar2);
  }
  iVar3 = (*pcVar4)(piVar2,param_3,param_4);
  if (iVar3 != 0) {
    *(short *)(param_1 + 0x28) = (short)param_2;
  }
  return iVar3 != 0;
}
