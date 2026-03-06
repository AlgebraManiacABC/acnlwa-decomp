/**
 * FUN_00354060.c
 * Source line: 455342
 * Body lines: 10
 */
#include "../../../include/types.h"

uint FUN_00354060(void)

{
  uint uVar1;
  int iVar2;
  
  iVar2 = coproc_movefrom_User_R_Thread_and_Process_ID();
  *(undefined4 *)(iVar2 + 0x80) = 0x120000;
  software_interrupt(SendSyncRequest);
  uVar1 = uRam00981eac;
  if ((uRam00981eac & 0x80000000) == 0) {
    uVar1 = *(uint *)(iVar2 + 0x84);
  }
  return uVar1;
}
