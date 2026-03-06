/**
 * FUN_004819a0.c
 * Source line: 653930
 * Body lines: 13
 */
#include "../../../include/types.h"

int FUN_004819a0(undefined2 *param_1,undefined2 param_2,undefined2 param_3)

{
  int iVar1;
  int iVar2;
  
  iVar2 = coproc_movefrom_User_R_Thread_and_Process_ID();
  *(undefined4 *)(iVar2 + 0x80) = 0xa0080;
  *(undefined2 *)(iVar2 + 0x84) = param_2;
  *(undefined2 *)(iVar2 + 0x88) = param_3;
  software_interrupt(SendSyncRequest);
  iVar1 = _DAT_00974b90;
  if (-1 < _DAT_00974b90) {
    *param_1 = *(undefined2 *)(iVar2 + 0x88);
    iVar1 = *(int *)(iVar2 + 0x84);
  }
  return iVar1;
}
