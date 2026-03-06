/**
 * FUN_00348e40.c
 * Source line: 445712
 * Body lines: 11
 */
#include "../../../include/types.h"

uint FUN_00348e40(uint *param_1,undefined4 param_2)

{
  uint uVar1;
  int iVar2;
  
  iVar2 = coproc_movefrom_User_R_Thread_and_Process_ID();
  *(undefined4 *)(iVar2 + 0x80) = 0x80a0040;
  *(undefined4 *)(iVar2 + 0x84) = param_2;
  uVar1 = *param_1;
  software_interrupt(SendSyncRequest);
  if ((uVar1 & 0x80000000) == 0) {
    uVar1 = *(uint *)(iVar2 + 0x84);
  }
  return uVar1;
}
