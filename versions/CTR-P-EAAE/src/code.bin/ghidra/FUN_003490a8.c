/**
 * FUN_003490a8.c
 * Source line: 445926
 * Body lines: 14
 */
#include "../../../include/types.h"

int FUN_003490a8(int *param_1,undefined4 *param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  int iVar2;
  
  iVar2 = coproc_movefrom_User_R_Thread_and_Process_ID();
  *(undefined4 *)(iVar2 + 0x80) = 0x8010042;
  *(int *)(iVar2 + 0x84) = param_4;
  *(uint *)(iVar2 + 0x88) = param_4 * 0x2280 | 0xc;
  *(undefined4 *)(iVar2 + 0x8c) = param_3;
  iVar1 = *param_1;
  software_interrupt(SendSyncRequest);
  if (-1 < iVar1) {
    *param_2 = *(undefined4 *)(iVar2 + 0x88);
    iVar1 = *(int *)(iVar2 + 0x84);
  }
  return iVar1;
}
