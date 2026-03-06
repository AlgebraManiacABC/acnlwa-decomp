/**
 * FUN_0046e494.c
 * Source line: 639501
 * Body lines: 14
 */
#include "../../../include/types.h"

uint FUN_0046e494(uint *param_1,undefined2 param_2,undefined4 param_3,int param_4)

{
  uint uVar1;
  int iVar2;
  
  iVar2 = coproc_movefrom_User_R_Thread_and_Process_ID();
  *(undefined4 *)(iVar2 + 0x80) = 0x140082;
  *(undefined2 *)(iVar2 + 0x84) = param_2;
  *(int *)(iVar2 + 0x88) = param_4;
  *(uint *)(iVar2 + 0x8c) = param_4 << 4 | 10;
  *(undefined4 *)(iVar2 + 0x90) = param_3;
  uVar1 = *param_1;
  software_interrupt(SendSyncRequest);
  if ((uVar1 & 0x80000000) == 0) {
    uVar1 = *(uint *)(iVar2 + 0x84);
  }
  return uVar1;
}
