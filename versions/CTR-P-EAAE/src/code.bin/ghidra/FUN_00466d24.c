/**
 * FUN_00466d24.c
 * Source line: 633094
 * Body lines: 11
 */
#include "../../../include/types.h"

uint FUN_00466d24(uint *param_1)

{
  uint uVar1;
  int iVar2;
  
  iVar2 = coproc_movefrom_User_R_Thread_and_Process_ID();
  *(undefined4 *)(iVar2 + 0x80) = 0x10002;
  *(undefined4 *)(iVar2 + 0x84) = 0x20;
  uVar1 = *param_1;
  software_interrupt(SendSyncRequest);
  if ((uVar1 & 0x80000000) == 0) {
    uVar1 = *(uint *)(iVar2 + 0x84);
  }
  return uVar1;
}
