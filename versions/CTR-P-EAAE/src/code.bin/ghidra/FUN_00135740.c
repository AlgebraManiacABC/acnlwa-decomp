/**
 * FUN_00135740.c
 * Source line: 142006
 * Body lines: 10
 */
#include "../../../include/types.h"

void FUN_00135740(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = coproc_movefrom_User_R_Thread_and_Process_ID();
  if (iVar1 != *(int *)(param_1 + 0x14)) {
    FUN_0012f050(param_1 + 0x10);
    uVar2 = coproc_movefrom_User_R_Thread_and_Process_ID();
    *(undefined4 *)(param_1 + 0x14) = uVar2;
  }
  *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + 1;
  return;
}
