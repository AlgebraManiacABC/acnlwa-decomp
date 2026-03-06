/**
 * FUN_004695f0.c
 * Source line: 635215
 * Body lines: 13
 */
#include "../../../include/types.h"

uint FUN_004695f0(uint *param_1,undefined2 *param_2,undefined1 param_3)

{
  uint uVar1;
  int iVar2;
  
  iVar2 = coproc_movefrom_User_R_Thread_and_Process_ID();
  *(undefined4 *)(iVar2 + 0x80) = 0x210080;
  *(undefined2 *)(iVar2 + 0x84) = *param_2;
  *(undefined1 *)(iVar2 + 0x86) = *(undefined1 *)(param_2 + 1);
  *(undefined1 *)(iVar2 + 0x88) = param_3;
  uVar1 = *param_1;
  software_interrupt(SendSyncRequest);
  if ((uVar1 & 0x80000000) == 0) {
    uVar1 = *(uint *)(iVar2 + 0x84);
  }
  return uVar1;
}
