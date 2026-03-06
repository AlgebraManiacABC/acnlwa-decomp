/**
 * FUN_0046e4e0.c
 * Source line: 639523
 * Body lines: 11
 */
#include "../../../include/types.h"

int FUN_0046e4e0(int *param_1,undefined1 *param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = coproc_movefrom_User_R_Thread_and_Process_ID();
  *(undefined4 *)(iVar2 + 0x80) = 0xa0000;
  iVar1 = *param_1;
  software_interrupt(SendSyncRequest);
  if (-1 < iVar1) {
    *param_2 = *(undefined1 *)(iVar2 + 0x88);
    iVar1 = *(int *)(iVar2 + 0x84);
  }
  return iVar1;
}
