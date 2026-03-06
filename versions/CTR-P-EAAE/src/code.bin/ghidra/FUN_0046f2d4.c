/**
 * FUN_0046f2d4.c
 * Source line: 640652
 * Body lines: 15
 */
#include "../../../include/types.h"

int FUN_0046f2d4(int *param_1,undefined4 param_2,int param_3,undefined1 param_4,undefined4 *param_5)

{
  int iVar1;
  int iVar2;
  
  iVar2 = coproc_movefrom_User_R_Thread_and_Process_ID();
  *(undefined4 *)(iVar2 + 0x80) = 0x20082;
  *(int *)(iVar2 + 0x84) = param_3;
  *(undefined1 *)(iVar2 + 0x88) = param_4;
  *(undefined4 *)(iVar2 + 0x90) = param_2;
  *(uint *)(iVar2 + 0x8c) = param_3 << 4 | 10;
  iVar1 = *param_1;
  software_interrupt(SendSyncRequest);
  if (-1 < iVar1) {
    *param_5 = *(undefined4 *)(iVar2 + 0x88);
    iVar1 = *(int *)(iVar2 + 0x84);
  }
  return iVar1;
}
