/**
 * FUN_003d9efc.c
 * Source line: 550507
 * Body lines: 15
 */
#include "../../../include/types.h"

undefined8 FUN_003d9efc(uint *param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  undefined8 uVar4;
  
  iVar3 = coproc_movefrom_User_R_Thread_and_Process_ID();
  *(undefined4 **)(iVar3 + 0x80) = &DAT_001b0000;
  uVar1 = *param_1;
  software_interrupt(SendSyncRequest);
  uVar2 = uVar1 & 0x80000000;
  if (-1 < (int)uVar2) {
    uVar4 = __rt_memcpy(param_2,(uint *)(iVar3 + 0x88),0x36);
    uVar2 = (uint)((ulonglong)uVar4 >> 0x20);
    uVar1 = *(uint *)(iVar3 + 0x84);
  }
  return CONCAT44(uVar2,uVar1);
}
