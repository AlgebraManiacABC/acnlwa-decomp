/**
 * FUN_0012f5c8.c
 * Source line: 136070
 * Body lines: 11
 */
#include "../../../include/types.h"

uint FUN_0012f5c8(uint *param_1,undefined4 param_2)

{
  uint uVar1;
  int iVar2;
  
  iVar2 = coproc_movefrom_User_R_Thread_and_Process_ID();
  *(undefined4 *)(iVar2 + 0x80) = 0x10800;
  __rt_memcpy_w(iVar2 + 0x84,param_2,0x80);
  uVar1 = *param_1;
  software_interrupt(SendSyncRequest);
  if ((uVar1 & 0x80000000) == 0) {
    uVar1 = *(uint *)(iVar2 + 0x84);
  }
  return uVar1;
}
