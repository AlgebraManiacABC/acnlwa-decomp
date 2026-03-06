/**
 * FUN_0013a798.c
 * Source line: 147298
 * Body lines: 10
 */
#include "../../../include/types.h"

uint FUN_0013a798(void)

{
  uint uVar1;
  int iVar2;
  
  iVar2 = coproc_movefrom_User_R_Thread_and_Process_ID();
  *(undefined4 *)(iVar2 + 0x80) = 0x2c0000;
  software_interrupt(SendSyncRequest);
  uVar1 = _DAT_00974fb4;
  if ((_DAT_00974fb4 & 0x80000000) == 0) {
    uVar1 = *(uint *)(iVar2 + 0x84);
  }
  return uVar1;
}
