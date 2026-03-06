/**
 * FUN_003293e0.c
 * Source line: 429646
 * Body lines: 15
 */
#include "../../../include/types.h"

undefined4 FUN_003293e0(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  uint uVar1;
  int *piVar2;
  int iVar3;
  code *pcVar4;
  
  uVar1 = *(uint *)(param_2 * 0x10 + 0x9537fc);
  pcVar4 = (code *)(&DAT_009537f8)[param_2 * 4];
  piVar2 = (int *)(param_1 + ((int)uVar1 >> 1));
  if ((uVar1 & 1) != 0) {
    pcVar4 = *(code **)(pcVar4 + *piVar2);
  }
  iVar3 = (*pcVar4)(piVar2,param_3,param_4);
  if (iVar3 != 0) {
    *(short *)(param_1 + 0x10) = (short)param_2;
  }
  return 1;
}
