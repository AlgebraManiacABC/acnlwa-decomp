/**
 * FUN_00354584.c
 * Source line: 455687
 * Body lines: 11
 */
#include "../../../include/types.h"

uint FUN_00354584(void)

{
  uint uVar1;
  int iVar2;
  
  iVar2 = coproc_movefrom_User_R_Thread_and_Process_ID();
  *(undefined4 *)(iVar2 + 0x80) = 0x20002;
  *(undefined4 *)(iVar2 + 0x84) = 0x20;
  software_interrupt(SendSyncRequest);
  uVar1 = uRam0097d8c8;
  if ((uRam0097d8c8 & 0x80000000) == 0) {
    uVar1 = *(uint *)(iVar2 + 0x84);
  }
  return uVar1;
}
