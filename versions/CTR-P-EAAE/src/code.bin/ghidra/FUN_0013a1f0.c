/**
 * FUN_0013a1f0.c
 * Source line: 146977
 * Body lines: 12
 */
#include "../../../include/types.h"

uint FUN_0013a1f0(uint *param_1,undefined4 param_2)

{
  uint uVar1;
  int iVar2;
  
  iVar2 = coproc_movefrom_User_R_Thread_and_Process_ID();
  *(undefined4 *)(iVar2 + 0x80) = 0x8610042;
  *(undefined4 *)(iVar2 + 0x84) = param_2;
  *(undefined4 *)(iVar2 + 0x88) = 0x20;
  uVar1 = *param_1;
  software_interrupt(SendSyncRequest);
  if ((uVar1 & 0x80000000) == 0) {
    uVar1 = *(uint *)(iVar2 + 0x84);
  }
  return uVar1;
}
