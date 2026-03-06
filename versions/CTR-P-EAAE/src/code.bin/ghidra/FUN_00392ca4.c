/**
 * FUN_00392ca4.c
 * Source line: 500590
 * Body lines: 9
 */
#include "../../../include/types.h"

int FUN_00392ca4(int *param_1,undefined4 param_2)

{
  int iVar1;
  undefined1 auStack_30 [36];
  
  switchD_001cf900::caseD_3(auStack_30);
  iVar1 = (**(code **)(*param_1 + 8))(param_1,param_2,auStack_30);
  if (iVar1 == 0) {
    FUN_003cfae0(param_2,auStack_30);
  }
  FUN_003cfa88(auStack_30);
  return iVar1;
}
