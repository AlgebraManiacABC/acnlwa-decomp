/**
 * FUN_004694e8.c
 * Source line: 635098
 * Body lines: 13
 */
#include "../../../include/types.h"

uint FUN_004694e8(uint *param_1,undefined4 param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  
  iVar2 = coproc_movefrom_User_R_Thread_and_Process_ID();
  *(undefined4 **)(iVar2 + 0x80) = &DAT_00100042;
  *(int *)(iVar2 + 0x84) = param_3;
  *(undefined4 *)(iVar2 + 0x8c) = param_2;
  *(uint *)(iVar2 + 0x88) = param_3 << 0xe | 0x1002;
  uVar1 = *param_1;
  software_interrupt(SendSyncRequest);
  if ((uVar1 & 0x80000000) == 0) {
    uVar1 = *(uint *)(iVar2 + 0x84);
  }
  return uVar1;
}
