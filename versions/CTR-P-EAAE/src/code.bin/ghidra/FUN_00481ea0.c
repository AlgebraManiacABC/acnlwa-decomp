/**
 * FUN_00481ea0.c
 * Source line: 654315
 * Body lines: 15
 */
#include "../../../include/types.h"

uint FUN_00481ea0(undefined1 param_1,undefined2 param_2,undefined2 param_3,undefined2 param_4,
                 undefined2 param_5)

{
  uint uVar1;
  int iVar2;
  
  iVar2 = coproc_movefrom_User_R_Thread_and_Process_ID();
  *(undefined4 *)(iVar2 + 0x80) = 0x120140;
  *(undefined1 *)(iVar2 + 0x84) = param_1;
  *(undefined2 *)(iVar2 + 0x88) = param_2;
  *(undefined2 *)(iVar2 + 0x8c) = param_3;
  *(undefined2 *)(iVar2 + 0x90) = param_4;
  *(undefined2 *)(iVar2 + 0x94) = param_5;
  software_interrupt(SendSyncRequest);
  uVar1 = _DAT_00974b90;
  if ((_DAT_00974b90 & 0x80000000) == 0) {
    uVar1 = *(uint *)(iVar2 + 0x84);
  }
  return uVar1;
}
