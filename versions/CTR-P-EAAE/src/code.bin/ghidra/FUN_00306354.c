/**
 * FUN_00306354.c
 * Source line: 403935
 * Body lines: 14
 */
#include "../../../include/types.h"

FUN_00306354(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined8 param_5,undefined4 *param_6)

{
  undefined4 uVar1;
  undefined1 auStack_158 [312];
  
  FUN_0022e08c(auStack_158);
  FUN_0022e05c(auStack_158);
  if (param_6 != NULL) {
    uVar1 = FUN_0022e070(auStack_158);
    (**(code **)*param_6)(param_6,uVar1);
  }
  FUN_0022dacc(auStack_158,param_1,param_2,param_3,param_4,(int)param_5,
               (int)((ulonglong)param_5 >> 0x20));
  switchD_0002dedc::caseD_4(auStack_158);
  uVar1 = FUN_00303c84(auStack_158);
  FUN_0022e138(auStack_158);
  return uVar1;
}
