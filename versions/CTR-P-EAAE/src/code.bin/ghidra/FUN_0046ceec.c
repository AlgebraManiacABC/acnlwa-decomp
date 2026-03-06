/**
 * FUN_0046ceec.c
 * Source line: 638323
 * Body lines: 14
 */
#include "../../../include/types.h"

uint FUN_0046ceec(uint *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined1 param_6)

{
  uint uVar1;
  int iVar2;
  
  iVar2 = coproc_movefrom_User_R_Thread_and_Process_ID();
  *(undefined4 *)(iVar2 + 0x80) = 0x20100;
  *(undefined4 *)(iVar2 + 0x8c) = param_5;
  *(undefined4 *)(iVar2 + 0x84) = param_3;
  *(undefined4 *)(iVar2 + 0x88) = param_4;
  *(undefined1 *)(iVar2 + 0x90) = param_6;
  uVar1 = *param_1;
  software_interrupt(SendSyncRequest);
  if ((uVar1 & 0x80000000) == 0) {
    uVar1 = *(uint *)(iVar2 + 0x84);
  }
  return uVar1;
}
