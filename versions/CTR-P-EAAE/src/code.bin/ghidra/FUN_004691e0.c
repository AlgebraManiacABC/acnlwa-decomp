/**
 * FUN_004691e0.c
 * Source line: 634811
 * Body lines: 11
 */
#include "../../../include/types.h"

int FUN_004691e0(int *param_1,undefined1 *param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = coproc_movefrom_User_R_Thread_and_Process_ID();
  *(undefined **)(iVar2 + 0x80) = &DAT_001a0000;
  iVar1 = *param_1;
  software_interrupt(SendSyncRequest);
  if (-1 < iVar1) {
    *param_2 = *(undefined1 *)(iVar2 + 0x88);
    iVar1 = *(int *)(iVar2 + 0x84);
  }
  return iVar1;
}
