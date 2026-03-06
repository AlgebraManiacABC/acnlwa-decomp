/**
 * FUN_00481f60.c
 * Source line: 654367
 * Body lines: 12
 */
#include "../../../include/types.h"

int FUN_00481f60(undefined4 *param_1,undefined1 param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = coproc_movefrom_User_R_Thread_and_Process_ID();
  *(undefined4 *)(iVar2 + 0x80) = 0x60040;
  *(undefined1 *)(iVar2 + 0x84) = param_2;
  software_interrupt(SendSyncRequest);
  iVar1 = _DAT_00974b90;
  if (-1 < _DAT_00974b90) {
    *param_1 = *(undefined4 *)(iVar2 + 0x8c);
    iVar1 = *(int *)(iVar2 + 0x84);
  }
  return iVar1;
}
