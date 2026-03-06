/**
 * FUN_00123fe4.c
 * Source line: 125984
 * Body lines: 11
 */
#include "../../../include/types.h"

int FUN_00123fe4(undefined1 *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = coproc_movefrom_User_R_Thread_and_Process_ID();
  *(undefined4 *)(iVar2 + 0x80) = 0x20000;
  software_interrupt(SendSyncRequest);
  iVar1 = iRam0097d81c;
  if (-1 < iRam0097d81c) {
    *param_1 = *(undefined1 *)(iVar2 + 0x88);
    iVar1 = *(int *)(iVar2 + 0x84);
  }
  return iVar1;
}
