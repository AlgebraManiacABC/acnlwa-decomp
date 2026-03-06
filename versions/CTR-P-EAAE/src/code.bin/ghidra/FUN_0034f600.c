/**
 * FUN_0034f600.c
 * Source line: 451242
 * Body lines: 14
 */
#include "../../../include/types.h"

int FUN_0034f600(undefined4 *param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  int iVar2;
  
  iVar2 = coproc_movefrom_User_R_Thread_and_Process_ID();
  *(undefined4 *)(iVar2 + 0x80) = 0x20042;
  *(int *)(iVar2 + 0x84) = param_3;
  *(uint *)(iVar2 + 0x88) = param_3 << 4 | 0xc;
  *(undefined4 *)(iVar2 + 0x8c) = param_2;
  software_interrupt(SendSyncRequest);
  iVar1 = iRam0097ea20;
  if (-1 < iRam0097ea20) {
    *param_1 = *(undefined4 *)(iVar2 + 0x88);
    iVar1 = *(int *)(iVar2 + 0x84);
  }
  return iVar1;
}
