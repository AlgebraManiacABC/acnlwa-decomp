/**
 * FUN_00345604.c
 * Source line: 442483
 * Body lines: 12
 */
#include "../../../include/types.h"

uint FUN_00345604(undefined4 param_1)

{
  uint uVar1;
  int iVar2;
  
  iVar2 = coproc_movefrom_User_R_Thread_and_Process_ID();
  *(undefined **)(iVar2 + 0x80) = &UNK_00400042;
  *(undefined4 *)(iVar2 + 0x84) = param_1;
  *(undefined4 *)(iVar2 + 0x88) = 0x20;
  software_interrupt(SendSyncRequest);
  uVar1 = uRam0097d7bc;
  if ((uRam0097d7bc & 0x80000000) == 0) {
    uVar1 = *(uint *)(iVar2 + 0x84);
  }
  return uVar1;
}
