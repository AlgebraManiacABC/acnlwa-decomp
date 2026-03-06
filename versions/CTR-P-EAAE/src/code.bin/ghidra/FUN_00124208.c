/**
 * FUN_00124208.c
 * Source line: 126116
 * Body lines: 11
 */
#include "../../../include/types.h"

int FUN_00124208(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = coproc_movefrom_User_R_Thread_and_Process_ID();
  *(undefined4 *)(iVar2 + 0x80) = 0xb0000;
  software_interrupt(SendSyncRequest);
  iVar1 = iRam0097e06c;
  if (-1 < iRam0097e06c) {
    *param_1 = *(undefined4 *)(iVar2 + 0x88);
    iVar1 = *(int *)(iVar2 + 0x84);
  }
  return iVar1;
}
