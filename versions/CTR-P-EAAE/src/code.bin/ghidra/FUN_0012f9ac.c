/**
 * FUN_0012f9ac.c
 * Source line: 136313
 * Body lines: 13
 */
#include "../../../include/types.h"

uint FUN_0012f9ac(undefined4 param_1,undefined4 param_2)

{
  uint uVar1;
  int iVar2;
  
  iVar2 = coproc_movefrom_User_R_Thread_and_Process_ID();
  *(undefined4 *)(iVar2 + 0x80) = 0x10042;
  *(undefined4 *)(iVar2 + 0x8c) = param_1;
  *(undefined4 *)(iVar2 + 0x84) = param_2;
  *(undefined4 *)(iVar2 + 0x88) = 0;
  software_interrupt(SendSyncRequest);
  uVar1 = uRam0097d8c4;
  if ((uRam0097d8c4 & 0x80000000) == 0) {
    uVar1 = *(uint *)(iVar2 + 0x84);
  }
  return uVar1;
}
