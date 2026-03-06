/**
 * FUN_0013048c.c
 * Source line: 136992
 * Body lines: 15
 */
#include "../../../include/types.h"

uint FUN_0013048c(undefined4 param_1,int param_2,undefined4 param_3)

{
  uint uVar1;
  int iVar2;
  
  iVar2 = coproc_movefrom_User_R_Thread_and_Process_ID();
  *(undefined4 *)(iVar2 + 0x80) = 0x270044;
  *(undefined4 *)(iVar2 + 0x8c) = param_3;
  *(int *)(iVar2 + 0x84) = param_2;
  *(undefined4 *)(iVar2 + 0x88) = 0;
  *(undefined4 *)(iVar2 + 0x94) = param_1;
  *(uint *)(iVar2 + 0x90) = param_2 << 0xe | 2;
  software_interrupt(SendSyncRequest);
  uVar1 = uRam0097d7f8;
  if ((uRam0097d7f8 & 0x80000000) == 0) {
    uVar1 = *(uint *)(iVar2 + 0x84);
  }
  return uVar1;
}
