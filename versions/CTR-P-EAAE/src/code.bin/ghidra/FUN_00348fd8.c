/**
 * FUN_00348fd8.c
 * Source line: 445846
 * Body lines: 14
 */
#include "../../../include/types.h"

int FUN_00348fd8(int *param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  iVar3 = coproc_movefrom_User_R_Thread_and_Process_ID();
  *(undefined4 *)(iVar3 + 0x80) = 0x8040000;
  iVar1 = *param_1;
  software_interrupt(SendSyncRequest);
  if (-1 < iVar1) {
    uVar2 = *(undefined4 *)(iVar3 + 0x8c);
    *param_2 = *(undefined4 *)(iVar3 + 0x88);
    param_2[1] = uVar2;
    iVar1 = *(int *)(iVar3 + 0x84);
  }
  return iVar1;
}
