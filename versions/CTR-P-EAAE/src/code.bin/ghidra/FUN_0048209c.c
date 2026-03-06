/**
 * FUN_0048209c.c
 * Source line: 654489
 * Body lines: 13
 */
#include "../../../include/types.h"

uint FUN_0048209c(undefined1 param_1,undefined1 param_2,undefined1 param_3)

{
  uint uVar1;
  int iVar2;
  
  iVar2 = coproc_movefrom_User_R_Thread_and_Process_ID();
  *(undefined **)(iVar2 + 0x80) = &UNK_001f00c0;
  *(undefined1 *)(iVar2 + 0x84) = param_1;
  *(undefined1 *)(iVar2 + 0x88) = param_2;
  *(undefined1 *)(iVar2 + 0x8c) = param_3;
  software_interrupt(SendSyncRequest);
  uVar1 = _DAT_00974b90;
  if ((_DAT_00974b90 & 0x80000000) == 0) {
    uVar1 = *(uint *)(iVar2 + 0x84);
  }
  return uVar1;
}
