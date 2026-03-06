/**
 * FUN_0046e6f8.c
 * Source line: 639679
 * Body lines: 15
 */
#include "../../../include/types.h"

int FUN_0046e6f8(int *param_1,undefined2 param_2,undefined4 param_3,int param_4,undefined4 *param_5)

{
  int iVar1;
  int iVar2;
  
  iVar2 = coproc_movefrom_User_R_Thread_and_Process_ID();
  *(undefined4 *)(iVar2 + 0x80) = 0x160082;
  *(undefined2 *)(iVar2 + 0x84) = param_2;
  *(int *)(iVar2 + 0x88) = param_4;
  *(uint *)(iVar2 + 0x8c) = param_4 << 4 | 0xc;
  *(undefined4 *)(iVar2 + 0x90) = param_3;
  iVar1 = *param_1;
  software_interrupt(SendSyncRequest);
  if (-1 < iVar1) {
    *param_5 = *(undefined4 *)(iVar2 + 0x88);
    iVar1 = *(int *)(iVar2 + 0x84);
  }
  return iVar1;
}
