/**
 * FUN_0046cf6c.c
 * Source line: 638368
 * Body lines: 12
 */
#include "../../../include/types.h"

int FUN_0046cf6c(int *param_1,undefined4 param_2,undefined1 *param_3)

{
  int iVar1;
  int iVar2;
  
  iVar2 = coproc_movefrom_User_R_Thread_and_Process_ID();
  *(undefined4 *)(iVar2 + 0x80) = 0x2c0040;
  *(undefined4 *)(iVar2 + 0x84) = param_2;
  iVar1 = *param_1;
  software_interrupt(SendSyncRequest);
  if (-1 < iVar1) {
    *param_3 = *(undefined1 *)(iVar2 + 0x88);
    iVar1 = *(int *)(iVar2 + 0x84);
  }
  return iVar1;
}
