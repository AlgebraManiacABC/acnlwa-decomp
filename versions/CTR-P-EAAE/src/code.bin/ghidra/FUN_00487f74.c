/**
 * FUN_00487f74.c
 * Source line: 658782
 * Body lines: 14
 */
#include "../../../include/types.h"

uint FUN_00487f74(uint *param_1,undefined4 param_2,undefined4 param_3)

{
  uint uVar1;
  int iVar2;
  
  iVar2 = coproc_movefrom_User_R_Thread_and_Process_ID();
  *(undefined4 *)(iVar2 + 0x80) = 0x10044;
  *(undefined4 *)(iVar2 + 0x84) = param_3;
  *(undefined4 *)(iVar2 + 0x94) = param_2;
  *(undefined4 *)(iVar2 + 0x88) = 0x20;
  *(undefined4 *)(iVar2 + 0x90) = 0;
  uVar1 = *param_1;
  software_interrupt(SendSyncRequest);
  if ((uVar1 & 0x80000000) == 0) {
    uVar1 = *(uint *)(iVar2 + 0x84);
  }
  return uVar1;
}
