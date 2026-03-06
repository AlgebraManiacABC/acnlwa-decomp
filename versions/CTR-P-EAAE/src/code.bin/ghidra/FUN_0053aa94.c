/**
 * FUN_0053aa94.c
 * Source line: 780506
 * Body lines: 7
 */
#include "../../../include/types.h"

void FUN_0053aa94(undefined4 param_1,int *param_2,uint param_3,undefined4 param_4)

{
  int *piVar1;
  undefined4 local_c;
  
  piVar1 = param_2;
  local_c = param_4;
  local_c = (*(code *)(&PTR_LAB_008c834c)[bRam00981f88 ^ param_3])(param_4);
  (**(code **)(*param_2 + 4))(param_2,&local_c,4,*(code **)(*param_2 + 4),param_1,piVar1,param_3);
  return;
}
