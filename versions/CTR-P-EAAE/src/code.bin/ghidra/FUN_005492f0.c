/**
 * FUN_005492f0.c
 * Source line: 790354
 * Body lines: 9
 */
#include "../../../include/types.h"

void FUN_005492f0(undefined4 param_1,int *param_2,uint param_3,uint param_4)

{
  undefined2 uVar1;
  int *piVar2;
  uint local_c;
  
  piVar2 = param_2;
  local_c = param_4;
  uVar1 = (**(code **)(&UNK_008bb374 + (bRam0097e855 ^ param_3) * 4))(param_4 & 0xffff);
  local_c = CONCAT22(local_c._2_2_,uVar1);
  (**(code **)(*param_2 + 4))(param_2,&local_c,2,*(code **)(*param_2 + 4),param_1,piVar2,param_3);
  return;
}
