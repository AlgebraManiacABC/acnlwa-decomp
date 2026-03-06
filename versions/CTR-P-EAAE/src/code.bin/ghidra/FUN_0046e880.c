/**
 * FUN_0046e880.c
 * Source line: 639808
 * Body lines: 13
 */
#include "../../../include/types.h"

uint FUN_0046e880(uint *param_1,undefined2 param_2,undefined4 param_3)

{
  uint uVar1;
  int iVar2;
  
  iVar2 = coproc_movefrom_User_R_Thread_and_Process_ID();
  *(undefined4 *)(iVar2 + 0x80) = 0x150042;
  *(undefined2 *)(iVar2 + 0x84) = param_2;
  *(undefined4 *)(iVar2 + 0x88) = 0;
  *(undefined4 *)(iVar2 + 0x8c) = param_3;
  uVar1 = *param_1;
  software_interrupt(SendSyncRequest);
  if ((uVar1 & 0x80000000) == 0) {
    uVar1 = *(uint *)(iVar2 + 0x84);
  }
  return uVar1;
}
