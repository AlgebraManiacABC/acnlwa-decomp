/**
 * FUN_0035095c.c
 * Source line: 452470
 * Body lines: 15
 */
#include "../../../include/types.h"

int FUN_0035095c(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  iVar3 = coproc_movefrom_User_R_Thread_and_Process_ID();
  *(undefined4 *)(iVar3 + 0x80) = 0x30040;
  *(undefined4 *)(iVar3 + 0x84) = param_1;
  software_interrupt(SendSyncRequest);
  iVar1 = iRam0097d81c;
  if (-1 < iRam0097d81c) {
    uVar2 = *(undefined4 *)(iVar3 + 0x8c);
    *param_2 = *(undefined4 *)(iVar3 + 0x88);
    param_2[1] = uVar2;
    iVar1 = *(int *)(iVar3 + 0x84);
  }
  return iVar1;
}
