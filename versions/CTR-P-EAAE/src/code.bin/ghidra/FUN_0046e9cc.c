/**
 * FUN_0046e9cc.c
 * Source line: 639916
 * Body lines: 14
 */
#include "../../../include/types.h"

int FUN_0046e9cc(int *param_1,undefined4 param_2,int param_3,undefined1 *param_4)

{
  int iVar1;
  int iVar2;
  
  iVar2 = coproc_movefrom_User_R_Thread_and_Process_ID();
  *(undefined4 *)(iVar2 + 0x80) = 0x1b0042;
  *(int *)(iVar2 + 0x84) = param_3;
  *(undefined4 *)(iVar2 + 0x8c) = param_2;
  *(uint *)(iVar2 + 0x88) = param_3 << 4 | 10;
  iVar1 = *param_1;
  software_interrupt(SendSyncRequest);
  if (-1 < iVar1) {
    *param_4 = *(undefined1 *)(iVar2 + 0x88);
    iVar1 = *(int *)(iVar2 + 0x84);
  }
  return iVar1;
}
