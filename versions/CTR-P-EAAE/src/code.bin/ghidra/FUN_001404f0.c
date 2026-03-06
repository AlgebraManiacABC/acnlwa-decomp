/**
 * FUN_001404f0.c
 * Source line: 152802
 * Body lines: 11
 */
#include "../../../include/types.h"

uint FUN_001404f0(undefined1 param_1)

{
  uint uVar1;
  int iVar2;
  
  iVar2 = coproc_movefrom_User_R_Thread_and_Process_ID();
  *(undefined4 *)(iVar2 + 0x80) = 0xa0040;
  *(undefined1 *)(iVar2 + 0x84) = param_1;
  software_interrupt(SendSyncRequest);
  uVar1 = uRam0097d8c4;
  if ((uRam0097d8c4 & 0x80000000) == 0) {
    uVar1 = *(uint *)(iVar2 + 0x84);
  }
  return uVar1;
}
