/**
 * FUN_00469e50.c
 * Source line: 635878
 * Body lines: 11
 */
#include "../../../include/types.h"

uint FUN_00469e50(undefined2 param_1)

{
  uint uVar1;
  int iVar2;
  
  iVar2 = coproc_movefrom_User_R_Thread_and_Process_ID();
  *(undefined4 *)(iVar2 + 0x80) = 0x1c0040;
  *(undefined2 *)(iVar2 + 0x84) = param_1;
  software_interrupt(SendSyncRequest);
  uVar1 = _DAT_00974fb4;
  if ((_DAT_00974fb4 & 0x80000000) == 0) {
    uVar1 = *(uint *)(iVar2 + 0x84);
  }
  return uVar1;
}
