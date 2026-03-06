/**
 * FUN_0053aa3c.c
 * Source line: 780489
 * Body lines: 9
 */
#include "../../../include/types.h"

void FUN_0053aa3c(undefined4 param_1,int *param_2,uint param_3,uint param_4)

{
  undefined2 uVar1;
  int *piVar2;
  uint local_c;
  
  piVar2 = param_2;
  local_c = param_4;
  uVar1 = (*(code *)(&PTR_LAB_008c8344)[bRam00981f88 ^ param_3])(param_4 & 0xffff);
  local_c = CONCAT22(local_c._2_2_,uVar1);
  (**(code **)(*param_2 + 4))(param_2,&local_c,2,*(code **)(*param_2 + 4),param_1,piVar2,param_3);
  return;
}
