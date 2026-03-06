/**
 * FUN_00480c50.c
 * Source line: 653005
 * Body lines: 13
 */
#include "../../../include/types.h"

int FUN_00480c50(undefined4 param_1,undefined4 param_2,undefined2 *param_3)

{
  int iVar1;
  int iVar2;
  
  iVar2 = coproc_movefrom_User_R_Thread_and_Process_ID();
  *(undefined4 *)(iVar2 + 0x80) = 0x4d0080;
  *(undefined4 *)(iVar2 + 0x84) = param_1;
  *(undefined4 *)(iVar2 + 0x88) = param_2;
  software_interrupt(SendSyncRequest);
  iVar1 = iRam0097d7f8;
  if (-1 < iRam0097d7f8) {
    *param_3 = *(undefined2 *)(iVar2 + 0x88);
    iVar1 = *(int *)(iVar2 + 0x84);
  }
  return iVar1;
}
