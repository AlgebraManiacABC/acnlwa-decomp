/**
 * FUN_0034f72c.c
 * Source line: 451310
 * Body lines: 15
 */
#include "../../../include/types.h"

uint FUN_0034f72c(undefined4 param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  uint uVar1;
  int iVar2;
  
  iVar2 = coproc_movefrom_User_R_Thread_and_Process_ID();
  *(undefined4 *)(iVar2 + 0x80) = 0x900c2;
  *(undefined4 *)(iVar2 + 0x84) = param_1;
  *(int *)(iVar2 + 0x88) = param_3;
  *(undefined4 *)(iVar2 + 0x8c) = param_4;
  *(uint *)(iVar2 + 0x90) = param_3 << 4 | 10;
  *(undefined4 *)(iVar2 + 0x94) = param_2;
  software_interrupt(SendSyncRequest);
  uVar1 = uRam0097ea20;
  if ((uRam0097ea20 & 0x80000000) == 0) {
    uVar1 = *(uint *)(iVar2 + 0x84);
  }
  return uVar1;
}
