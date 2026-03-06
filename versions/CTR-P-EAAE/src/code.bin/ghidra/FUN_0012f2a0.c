/**
 * FUN_0012f2a0.c
 * Source line: 135864
 * Body lines: 15
 */
#include "../../../include/types.h"

uint FUN_0012f2a0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  uint uVar1;
  int iVar2;
  
  iVar2 = coproc_movefrom_User_R_Thread_and_Process_ID();
  *(undefined4 *)(iVar2 + 0x80) = 0x100c2;
  *(undefined4 *)(iVar2 + 0x94) = param_1;
  *(undefined4 *)(iVar2 + 0x84) = param_2;
  *(undefined4 *)(iVar2 + 0x88) = param_3;
  *(undefined4 *)(iVar2 + 0x8c) = param_4;
  *(undefined4 *)(iVar2 + 0x90) = 0;
  software_interrupt(SendSyncRequest);
  uVar1 = uRam0097e03c;
  if ((uRam0097e03c & 0x80000000) == 0) {
    uVar1 = *(uint *)(iVar2 + 0x84);
  }
  return uVar1;
}
