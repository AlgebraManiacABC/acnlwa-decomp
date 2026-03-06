/**
 * FUN_00488324.c
 * Source line: 659054
 * Body lines: 15
 */
#include "../../../include/types.h"

int FUN_00488324(int *param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4,
                undefined4 param_5)

{
  int iVar1;
  int iVar2;
  
  iVar2 = coproc_movefrom_User_R_Thread_and_Process_ID();
  *(undefined4 *)(iVar2 + 0x80) = 0x1300c2;
  *(undefined4 *)(iVar2 + 0x8c) = param_5;
  *(undefined4 *)(iVar2 + 0x90) = 0x20;
  *(undefined4 *)(iVar2 + 0x84) = param_3;
  *(undefined4 *)(iVar2 + 0x88) = param_4;
  iVar1 = *param_1;
  software_interrupt(SendSyncRequest);
  if (-1 < iVar1) {
    *param_2 = *(undefined4 *)(iVar2 + 0x88);
    iVar1 = *(int *)(iVar2 + 0x84);
  }
  return iVar1;
}
