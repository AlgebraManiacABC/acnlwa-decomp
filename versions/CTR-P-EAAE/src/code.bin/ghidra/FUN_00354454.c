/**
 * FUN_00354454.c
 * Source line: 455571
 * Body lines: 13
 */
#include "../../../include/types.h"

uint FUN_00354454(undefined4 param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  
  iVar2 = coproc_movefrom_User_R_Thread_and_Process_ID();
  *(undefined4 *)(iVar2 + 0x80) = 0xc0042;
  *(int *)(iVar2 + 0x84) = param_2;
  *(undefined4 *)(iVar2 + 0x8c) = param_1;
  *(uint *)(iVar2 + 0x88) = param_2 << 4 | 10;
  software_interrupt(SendSyncRequest);
  uVar1 = uRam0097d8c4;
  if ((uRam0097d8c4 & 0x80000000) == 0) {
    uVar1 = *(uint *)(iVar2 + 0x84);
  }
  return uVar1;
}
