/**
 * FUN_003859d8.c
 * Source line: 491314
 * Body lines: 9
 */
#include "../../../include/types.h"

FUN_003859d8(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined8 param_5,undefined4 param_6)

{
  undefined4 uVar1;
  undefined1 auStack_48 [36];
  
  switchD_001cf900::caseD_3(auStack_48);
  uVar1 = strlen(param_3);
  FUN_003cf308(auStack_48,param_3,uVar1,0xffffffff);
  uVar1 = FUN_00385a54(param_1,param_2,auStack_48,param_4,(int)param_5,
                       (int)((ulonglong)param_5 >> 0x20),param_6);
  FUN_003cfa88(auStack_48);
  return uVar1;
}
