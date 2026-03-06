/**
 * FUN_00345180.c
 * Source line: 442177
 * Body lines: 14
 */
#include "../../../include/types.h"

int FUN_00345180(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  
  if (param_1 != NULL) {
    iVar2 = coproc_movefrom_User_R_Thread_and_Process_ID();
    *(undefined4 *)(iVar2 + 0x80) = 0xb0000;
    software_interrupt(SendSyncRequest);
    iVar1 = iRam0097d7bc;
    if (-1 < iRam0097d7bc) {
      *param_1 = *(undefined4 *)(iVar2 + 0x88);
      iVar1 = *(int *)(iVar2 + 0x84);
    }
    return iVar1;
  }
  return -0x1fbf6001;
}
