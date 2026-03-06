/**
 * FUN_00345578.c
 * Source line: 442462
 * Body lines: 13
 */
#include "../../../include/types.h"

int FUN_00345578(undefined4 param_1,undefined1 *param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = coproc_movefrom_User_R_Thread_and_Process_ID();
  *(undefined4 *)(iVar2 + 0x80) = 0x270002;
  *(undefined4 *)(iVar2 + 0x88) = param_1;
  *(undefined4 *)(iVar2 + 0x84) = 0x800402;
  software_interrupt(SendSyncRequest);
  iVar1 = iRam0097d7bc;
  if (-1 < iRam0097d7bc) {
    *param_2 = *(undefined1 *)(iVar2 + 0x88);
    iVar1 = *(int *)(iVar2 + 0x84);
  }
  return iVar1;
}
