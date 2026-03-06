/**
 * FUN_003d4ba4.c
 * Source line: 546118
 * Body lines: 8
 */
#include "../../../include/types.h"

undefined4 FUN_003d4ba4(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  undefined1 auStack_38 [36];
  
  switchD_001cf900::caseD_3(auStack_38);
  uVar1 = strlen(param_3);
  FUN_003cf308(auStack_38,param_3,uVar1,0xffffffff);
  uVar1 = FUN_003d4c0c(param_1,param_2,auStack_38,param_4);
  FUN_003cfa88(auStack_38);
  return uVar1;
}
