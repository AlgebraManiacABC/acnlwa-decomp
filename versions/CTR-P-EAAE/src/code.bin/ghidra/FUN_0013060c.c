/**
 * FUN_0013060c.c
 * Source line: 137097
 * Body lines: 14
 */
#include "../../../include/types.h"

uint FUN_0013060c(undefined1 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined1 param_5)

{
  uint uVar1;
  int iVar2;
  
  iVar2 = coproc_movefrom_User_R_Thread_and_Process_ID();
  *(undefined4 *)(iVar2 + 0x80) = 0x310100;
  *(undefined1 *)(iVar2 + 0x84) = param_1;
  *(undefined4 *)(iVar2 + 0x88) = param_3;
  *(undefined4 *)(iVar2 + 0x8c) = param_4;
  *(undefined1 *)(iVar2 + 0x90) = param_5;
  software_interrupt(SendSyncRequest);
  uVar1 = uRam0097d7f8;
  if ((uRam0097d7f8 & 0x80000000) == 0) {
    uVar1 = *(uint *)(iVar2 + 0x84);
  }
  return uVar1;
}
