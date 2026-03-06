/**
 * FUN_00480d1c.c
 * Source line: 653066
 * Body lines: 10
 */
#include "../../../include/types.h"

uint FUN_00480d1c(void)

{
  uint uVar1;
  int iVar2;
  
  iVar2 = coproc_movefrom_User_R_Thread_and_Process_ID();
  *(undefined4 *)(iVar2 + 0x80) = 0x2b0000;
  software_interrupt(SendSyncRequest);
  uVar1 = uRam0097d7f8;
  if ((uRam0097d7f8 & 0x80000000) == 0) {
    uVar1 = *(uint *)(iVar2 + 0x84);
  }
  return uVar1;
}
