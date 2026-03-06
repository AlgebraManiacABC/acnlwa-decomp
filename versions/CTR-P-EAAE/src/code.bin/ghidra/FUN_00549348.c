/**
 * FUN_00549348.c
 * Source line: 790371
 * Body lines: 7
 */
#include "../../../include/types.h"

void FUN_00549348(undefined4 param_1,int *param_2,uint param_3,undefined4 param_4)

{
  int *piVar1;
  undefined4 local_c;
  
  piVar1 = param_2;
  local_c = param_4;
  local_c = (**(code **)(&UNK_008bb37c + (bRam0097e855 ^ param_3) * 4))(param_4);
  (**(code **)(*param_2 + 4))(param_2,&local_c,4,*(code **)(*param_2 + 4),param_1,piVar1,param_3);
  return;
}
