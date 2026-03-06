/**
 * FUN_00143158.c
 * Source line: 155551
 * Body lines: 14
 */
#include "../../../include/types.h"

uint FUN_00143158(uint param_1)

{
  uint uVar1;
  int iVar2;
  
  if (param_1 < 4) {
    iVar2 = coproc_movefrom_User_R_Thread_and_Process_ID();
    *(undefined4 *)(iVar2 + 0x80) = 0x70040;
    *(int *)(iVar2 + 0x84) = 1 << (param_1 & 0xff);
    software_interrupt(SendSyncRequest);
    uVar1 = uRam0097d8c8;
    if ((uRam0097d8c8 & 0x80000000) == 0) {
      uVar1 = *(uint *)(iVar2 + 0x84);
    }
    return uVar1;
  }
  return 0xd8e06bed;
}
