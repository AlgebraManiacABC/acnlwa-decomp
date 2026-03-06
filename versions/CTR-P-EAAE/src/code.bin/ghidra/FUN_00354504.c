/**
 * FUN_00354504.c
 * Source line: 455628
 * Body lines: 11
 */
#include "../../../include/types.h"

int FUN_00354504(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = coproc_movefrom_User_R_Thread_and_Process_ID();
  *(undefined4 *)(iVar2 + 0x80) = 0x30000;
  software_interrupt(SendSyncRequest);
  iVar1 = iRam0097d8c8;
  if (-1 < iRam0097d8c8) {
    *param_1 = *(undefined4 *)(iVar2 + 0x88);
    iVar1 = *(int *)(iVar2 + 0x84);
  }
  return iVar1;
}
