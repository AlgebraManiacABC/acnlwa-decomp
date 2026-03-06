/**
 * FUN_001200ac.c
 * Source line: 122978
 * Body lines: 14
 */
#include "../../../include/types.h"

int FUN_001200ac(undefined4 param_1,undefined4 param_2,undefined4 *param_3,undefined4 *param_4)

{
  int iVar1;
  int iVar2;
  
  iVar2 = coproc_movefrom_User_R_Thread_and_Process_ID();
  *(undefined4 *)(iVar2 + 0x80) = 0x20080;
  *(undefined4 *)(iVar2 + 0x84) = param_1;
  *(undefined4 *)(iVar2 + 0x88) = param_2;
  software_interrupt(SendSyncRequest);
  iVar1 = iRam0097d7f8;
  if (-1 < iRam0097d7f8) {
    *param_3 = *(undefined4 *)(iVar2 + 0x8c);
    *param_4 = *(undefined4 *)(iVar2 + 0x90);
    iVar1 = *(int *)(iVar2 + 0x84);
  }
  return iVar1;
}
