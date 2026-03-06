/**
 * FUN_0034553c.c
 * Source line: 442443
 * Body lines: 11
 */
#include "../../../include/types.h"

uint FUN_0034553c(void)

{
  uint uVar1;
  int iVar2;
  
  iVar2 = coproc_movefrom_User_R_Thread_and_Process_ID();
  *(undefined4 *)(iVar2 + 0x80) = 0x50002;
  *(undefined4 *)(iVar2 + 0x84) = 0x20;
  software_interrupt(SendSyncRequest);
  uVar1 = uRam0097d7bc;
  if ((uRam0097d7bc & 0x80000000) == 0) {
    uVar1 = *(uint *)(iVar2 + 0x84);
  }
  return uVar1;
}
