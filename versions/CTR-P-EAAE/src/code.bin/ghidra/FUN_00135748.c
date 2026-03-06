/**
 * FUN_00135748.c
 * Source line: 142024
 * Body lines: 10
 */
#include "../../../include/types.h"

void FUN_00135748(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = coproc_movefrom_User_R_Thread_and_Process_ID();
  if (iVar1 != *(int *)(param_1 + 4)) {
    FUN_0012f050(param_1);
    uVar2 = coproc_movefrom_User_R_Thread_and_Process_ID();
    *(undefined4 *)(param_1 + 4) = uVar2;
  }
  *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
  return;
}
