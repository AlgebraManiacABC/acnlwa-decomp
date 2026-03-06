/**
 * FUN_005491e8.c
 * Source line: 790301
 * Body lines: 9
 */
#include "../../../include/types.h"

void FUN_005491e8(undefined4 param_1,int *param_2,uint param_3,uint param_4)

{
  undefined1 uVar1;
  int *piVar2;
  uint local_c;
  
  piVar2 = param_2;
  local_c = param_4;
  uVar1 = (**(code **)(&UNK_008bb36c + (bRam0097e855 ^ param_3) * 4))(param_4 & 0xff);
  local_c = CONCAT31(local_c._1_3_,uVar1);
  (**(code **)(*param_2 + 4))(param_2,&local_c,1,*(code **)(*param_2 + 4),param_1,piVar2,param_3);
  return;
}
