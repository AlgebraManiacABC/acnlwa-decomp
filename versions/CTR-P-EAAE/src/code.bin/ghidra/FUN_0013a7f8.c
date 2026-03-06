/**
 * FUN_0013a7f8.c
 * Source line: 147338
 * Body lines: 11
 */
#include "../../../include/types.h"

int FUN_0013a7f8(undefined1 *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = coproc_movefrom_User_R_Thread_and_Process_ID();
  *(undefined4 *)(iVar2 + 0x80) = 0x280000;
  software_interrupt(SendSyncRequest);
  iVar1 = _DAT_00974fb4;
  if (-1 < _DAT_00974fb4) {
    *param_1 = *(undefined1 *)(iVar2 + 0x88);
    iVar1 = *(int *)(iVar2 + 0x84);
  }
  return iVar1;
}
