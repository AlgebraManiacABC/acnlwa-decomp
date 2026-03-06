/**
 * FUN_004696ec.c
 * Source line: 635293
 * Body lines: 15
 */
#include "../../../include/types.h"

int FUN_004696ec(int *param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4,
                undefined1 param_5,undefined2 param_6)

{
  int iVar1;
  int iVar2;
  
  iVar2 = coproc_movefrom_User_R_Thread_and_Process_ID();
  *(undefined4 *)(iVar2 + 0x80) = 0x120100;
  *(undefined4 *)(iVar2 + 0x84) = param_3;
  *(undefined4 *)(iVar2 + 0x88) = param_4;
  *(undefined1 *)(iVar2 + 0x8c) = param_5;
  *(undefined2 *)(iVar2 + 0x90) = param_6;
  iVar1 = *param_1;
  software_interrupt(SendSyncRequest);
  if (-1 < iVar1) {
    *param_2 = *(undefined4 *)(iVar2 + 0x8c);
    iVar1 = *(int *)(iVar2 + 0x84);
  }
  return iVar1;
}
