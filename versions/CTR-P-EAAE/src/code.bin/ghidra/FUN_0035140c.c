/**
 * FUN_0035140c.c
 * Source line: 453190
 * Body lines: 12
 */
#include "../../../include/types.h"

int FUN_0035140c(int *param_1,undefined2 param_2,undefined2 *param_3)

{
  int iVar1;
  int iVar2;
  
  iVar2 = coproc_movefrom_User_R_Thread_and_Process_ID();
  *(undefined4 *)(iVar2 + 0x80) = 0x10040;
  *(undefined2 *)(iVar2 + 0x84) = param_2;
  iVar1 = *param_1;
  software_interrupt(SendSyncRequest);
  if (-1 < iVar1) {
    *param_3 = *(undefined2 *)(iVar2 + 0x88);
    iVar1 = *(int *)(iVar2 + 0x84);
  }
  return iVar1;
}
