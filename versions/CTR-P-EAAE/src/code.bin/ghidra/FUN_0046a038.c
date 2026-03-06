/**
 * FUN_0046a038.c
 * Source line: 636050
 * Body lines: 11
 */
#include "../../../include/types.h"

int FUN_0046a038(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = coproc_movefrom_User_R_Thread_and_Process_ID();
  *(undefined4 *)(iVar2 + 0x80) = 0xf0000;
  software_interrupt(SendSyncRequest);
  iVar1 = _DAT_00974fb4;
  if (-1 < _DAT_00974fb4) {
    *param_1 = *(undefined4 *)(iVar2 + 0x8c);
    iVar1 = *(int *)(iVar2 + 0x84);
  }
  return iVar1;
}
