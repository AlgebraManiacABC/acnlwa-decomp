/**
 * FUN_00345500.c
 * Source line: 442424
 * Body lines: 11
 */
#include "../../../include/types.h"

uint FUN_00345500(void)

{
  uint uVar1;
  int iVar2;
  
  iVar2 = coproc_movefrom_User_R_Thread_and_Process_ID();
  *(undefined4 *)(iVar2 + 0x80) = 0x90002;
  *(undefined4 *)(iVar2 + 0x84) = 0x20;
  software_interrupt(SendSyncRequest);
  uVar1 = uRam0097d7bc;
  if ((uRam0097d7bc & 0x80000000) == 0) {
    uVar1 = *(uint *)(iVar2 + 0x84);
  }
  return uVar1;
}
