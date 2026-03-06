/**
 * FUN_00542a00.c
 * Source line: 786212
 * Body lines: 12
 */
#include "../../../include/types.h"

void FUN_00542a00(int param_1,float *param_2)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  
  uVar1 = FUN_0074bf70(*(undefined4 *)(param_1 + 0x144));
  uVar2 = FUN_0073e600(param_1 + 4,uVar1);
  *(uint *)(param_1 + 0x130) = uVar2;
  iVar3 = 0;
  if (uVar2 != 0) {
    iVar3 = (uint)(0.0 < (float)uVar2 * *param_2) * (int)((float)uVar2 * *param_2);
  }
  FUN_00542ad4(param_1,uVar1,iVar3,param_2[1],param_2[2],param_2[3]);
  return;
}
