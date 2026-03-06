/**
 * FUN_00385fb4.c
 * Source line: 491593
 * Body lines: 13
 */
#include "../../../include/types.h"

FUN_00385fb4(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            )

{
  int iVar1;
  undefined1 auStack_30 [32];
  
  if (*(int *)(param_1 + 0x48) != 0) {
    switchD_001cf900::caseD_3(auStack_30);
    iVar1 = (**(code **)(param_1 + 0x48))(param_1 + 0x4c,param_4,auStack_30,param_5);
    if (iVar1 == 0) {
      FUN_003cfa88(auStack_30);
      return 0;
    }
    FUN_003cfae0(param_4,auStack_30);
    FUN_003cfa88(auStack_30);
  }
  return 1;
}
