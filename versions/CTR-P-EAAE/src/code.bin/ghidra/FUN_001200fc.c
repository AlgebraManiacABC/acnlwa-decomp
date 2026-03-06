/**
 * FUN_001200fc.c
 * Source line: 123000
 * Body lines: 14
 */
#include "../../../include/types.h"

int FUN_001200fc(undefined4 *param_1,undefined4 param_2,undefined4 *param_3,undefined4 *param_4)

{
  int iVar1;
  int iVar2;
  
  iVar2 = coproc_movefrom_User_R_Thread_and_Process_ID();
  *(undefined4 *)(iVar2 + 0x80) = 0x10040;
  *(undefined4 *)(iVar2 + 0x84) = param_2;
  software_interrupt(SendSyncRequest);
  iVar1 = iRam0097d7f8;
  if (-1 < iRam0097d7f8) {
    *param_3 = *(undefined4 *)(iVar2 + 0x88);
    *param_4 = *(undefined4 *)(iVar2 + 0x8c);
    *param_1 = *(undefined4 *)(iVar2 + 0x94);
    iVar1 = *(int *)(iVar2 + 0x84);
  }
  return iVar1;
}
