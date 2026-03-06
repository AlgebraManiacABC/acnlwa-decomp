/**
 * FUN_00130360.c
 * Source line: 136909
 * Body lines: 15
 */
#include "../../../include/types.h"

int FUN_00130360(undefined1 param_1,undefined4 param_2,undefined1 param_3,undefined4 param_4,
                undefined1 *param_5)

{
  int iVar1;
  int iVar2;
  
  iVar2 = coproc_movefrom_User_R_Thread_and_Process_ID();
  *(undefined4 *)(iVar2 + 0x80) = 0xf0100;
  *(undefined1 *)(iVar2 + 0x84) = param_1;
  *(undefined4 *)(iVar2 + 0x88) = param_2;
  *(undefined1 *)(iVar2 + 0x8c) = param_3;
  *(undefined4 *)(iVar2 + 0x90) = param_4;
  software_interrupt(SendSyncRequest);
  iVar1 = iRam0097d7f8;
  if (-1 < iRam0097d7f8) {
    *param_5 = *(undefined1 *)(iVar2 + 0x88);
    iVar1 = *(int *)(iVar2 + 0x84);
  }
  return iVar1;
}
