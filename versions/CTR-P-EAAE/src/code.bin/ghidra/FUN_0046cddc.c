/**
 * FUN_0046cddc.c
 * Source line: 638251
 * Body lines: 14
 */
#include "../../../include/types.h"

uint FUN_0046cddc(uint *param_1,undefined4 param_2,int param_3,undefined1 param_4)

{
  uint uVar1;
  int iVar2;
  
  iVar2 = coproc_movefrom_User_R_Thread_and_Process_ID();
  *(undefined4 *)(iVar2 + 0x80) = 0xc0082;
  *(int *)(iVar2 + 0x84) = param_3;
  *(undefined1 *)(iVar2 + 0x88) = param_4;
  *(undefined4 *)(iVar2 + 0x90) = param_2;
  *(uint *)(iVar2 + 0x8c) = param_3 << 4 | 10;
  uVar1 = *param_1;
  software_interrupt(SendSyncRequest);
  if ((uVar1 & 0x80000000) == 0) {
    uVar1 = *(uint *)(iVar2 + 0x84);
  }
  return uVar1;
}
