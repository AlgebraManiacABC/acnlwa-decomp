/**
 * FUN_0013a37c.c
 * Source line: 147027
 * Body lines: 4
 */
#include "../../../include/types.h"

void FUN_0013a37c(int *param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = coproc_movefrom_User_R_Thread_and_Process_ID();
  *(undefined4 *)(iVar1 + *param_1 * 4) = param_2;
  return;
}
