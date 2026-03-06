/**
 * FUN_0013078c.c
 * Source line: 137225
 * Body lines: 11
 */
#include "../../../include/types.h"

uint FUN_0013078c(undefined1 param_1)

{
  uint uVar1;
  int iVar2;
  
  iVar2 = coproc_movefrom_User_R_Thread_and_Process_ID();
  *(undefined4 *)(iVar2 + 0x80) = 0x3d0040;
  *(undefined1 *)(iVar2 + 0x84) = param_1;
  software_interrupt(SendSyncRequest);
  uVar1 = _DAT_00974b90;
  if ((_DAT_00974b90 & 0x80000000) == 0) {
    uVar1 = *(uint *)(iVar2 + 0x84);
  }
  return uVar1;
}
