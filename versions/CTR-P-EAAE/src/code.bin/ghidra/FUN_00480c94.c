/**
 * FUN_00480c94.c
 * Source line: 653026
 * Body lines: 13
 */
#include "../../../include/types.h"

uint FUN_00480c94(undefined4 param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  
  iVar2 = coproc_movefrom_User_R_Thread_and_Process_ID();
  *(undefined **)(iVar2 + 0x80) = &UNK_00400042;
  *(int *)(iVar2 + 0x84) = param_2;
  *(undefined4 *)(iVar2 + 0x8c) = param_1;
  *(uint *)(iVar2 + 0x88) = param_2 << 0xe | 2;
  software_interrupt(SendSyncRequest);
  uVar1 = uRam0097d7f8;
  if ((uRam0097d7f8 & 0x80000000) == 0) {
    uVar1 = *(uint *)(iVar2 + 0x84);
  }
  return uVar1;
}
