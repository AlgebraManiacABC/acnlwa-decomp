/**
 * FUN_0046e904.c
 * Source line: 639850
 * Body lines: 15
 */
#include "../../../include/types.h"

uint FUN_0046e904(uint *param_1,undefined4 param_2,undefined1 param_3,undefined4 param_4,int param_5
                 )

{
  uint uVar1;
  int iVar2;
  
  iVar2 = coproc_movefrom_User_R_Thread_and_Process_ID();
  *(undefined4 *)(iVar2 + 0x80) = 0x2700c2;
  *(undefined4 *)(iVar2 + 0x84) = param_2;
  *(undefined1 *)(iVar2 + 0x88) = param_3;
  *(int *)(iVar2 + 0x8c) = param_5;
  *(uint *)(iVar2 + 0x90) = param_5 << 4 | 0xc;
  *(undefined4 *)(iVar2 + 0x94) = param_4;
  uVar1 = *param_1;
  software_interrupt(SendSyncRequest);
  if ((uVar1 & 0x80000000) == 0) {
    uVar1 = *(uint *)(iVar2 + 0x84);
  }
  return uVar1;
}
