/**
 * FUN_006e6434.c
 * Source line: 1043646
 * Body lines: 13
 */
#include "../../../include/types.h"

void FUN_006e6434(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  int *piVar2;
  undefined4 uVar3;
  int iVar4;
  
  uVar1 = FUN_0052e6c8(_DAT_009529bc,1,param_3,param_4,param_4);
  piVar2 = (int *)FUN_007480d0(_DAT_009529bc,1);
  (**(code **)(*piVar2 + 8))(piVar2);
  iVar4 = piVar2[1];
  uVar3 = FUN_0052e6c8(_DAT_009529bc,0);
  piVar2 = (int *)FUN_007480d0(_DAT_009529bc,0);
  (**(code **)(*piVar2 + 8))(piVar2);
  FUN_006e6220(param_1,piVar2[1],uVar3,iVar4,uVar1);
  return;
}
