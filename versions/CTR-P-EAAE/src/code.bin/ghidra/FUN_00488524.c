/**
 * FUN_00488524.c
 * Source line: 659194
 * Body lines: 14
 */
#include "../../../include/types.h"

int FUN_00488524(int *param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  
  iVar2 = coproc_movefrom_User_R_Thread_and_Process_ID();
  *(undefined4 *)(iVar2 + 0x80) = 0xc0082;
  *(undefined4 *)(iVar2 + 0x84) = param_3;
  *(undefined4 *)(iVar2 + 0x88) = param_4;
  *(undefined4 *)(iVar2 + 0x8c) = 0x20;
  iVar1 = *param_1;
  software_interrupt(SendSyncRequest);
  if (-1 < iVar1) {
    *param_2 = *(undefined4 *)(iVar2 + 0x88);
    iVar1 = *(int *)(iVar2 + 0x84);
  }
  return iVar1;
}
