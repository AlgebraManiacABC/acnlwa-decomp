/**
 * FUN_0046e98c.c
 * Source line: 639893
 * Body lines: 15
 */
#include "../../../include/types.h"

int FUN_0046e98c(int *param_1,undefined4 param_2,undefined4 *param_3)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  iVar3 = coproc_movefrom_User_R_Thread_and_Process_ID();
  *(undefined4 *)(iVar3 + 0x80) = 0x2d0040;
  *(undefined4 *)(iVar3 + 0x84) = param_2;
  iVar1 = *param_1;
  software_interrupt(SendSyncRequest);
  if (-1 < iVar1) {
    uVar2 = *(undefined4 *)(iVar3 + 0x8c);
    *param_3 = *(undefined4 *)(iVar3 + 0x88);
    param_3[1] = uVar2;
    iVar1 = *(int *)(iVar3 + 0x84);
  }
  return iVar1;
}
