/**
 * FUN_005cc160.c
 * Source line: 879524
 * Body lines: 14
 */
#include "../../../include/types.h"

FUN_005cc160(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined8 param_5,undefined8 param_6,undefined4 *param_7)

{
  undefined4 uVar1;
  undefined1 auStack_160 [312];
  
  FUN_0022e08c(auStack_160);
  FUN_0022e05c(auStack_160);
  if (param_7 != NULL) {
    uVar1 = FUN_0022e070(auStack_160);
    (**(code **)*param_7)(param_7,uVar1);
  }
  FUN_0022dd30(auStack_160,param_1,param_2,param_3,param_4,(int)param_5,
               (int)((ulonglong)param_5 >> 0x20),(int)param_6,(int)((ulonglong)param_6 >> 0x20));
  switchD_0002dedc::caseD_4(auStack_160);
  uVar1 = FUN_00303c84(auStack_160);
  FUN_0022e138(auStack_160);
  return uVar1;
}
