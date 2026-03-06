/**
 * FUN_005a686c.c
 * Source line: 854232
 * Body lines: 13
 */
#include "../../../include/types.h"

void FUN_005a686c(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined1 auStack_3c [44];
  
  *param_1 = param_2;
  *(char *)(param_1 + 1) = (char)param_3;
  FUN_005ae51c(auStack_3c,0x15,param_3,0);
  iVar1 = (**(code **)**(undefined4 **)*param_1)(*(undefined4 **)*param_1,0x28,4);
  if (iVar1 != 0) {
    FUN_005b006c();
  }
  param_1[2] = iVar1;
  FUN_005afeb8(iVar1,*param_1,param_3,auStack_3c,1000);
  FUN_005a8af0(param_1 + 4);
  return;
}
