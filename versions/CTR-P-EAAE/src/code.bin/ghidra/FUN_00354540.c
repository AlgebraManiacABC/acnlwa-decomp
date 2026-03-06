/**
 * FUN_00354540.c
 * Source line: 455647
 * Body lines: 12
 */
#include "../../../include/types.h"

uint FUN_00354540(undefined4 param_1)

{
  uint uVar1;
  int iVar2;
  
  iVar2 = coproc_movefrom_User_R_Thread_and_Process_ID();
  *(undefined4 *)(iVar2 + 0x80) = 0x10042;
  *(undefined4 *)(iVar2 + 0x84) = param_1;
  *(undefined4 *)(iVar2 + 0x88) = 0x20;
  software_interrupt(0x32);
  uVar1 = uRam0097d8c8;
  if ((uRam0097d8c8 & 0x80000000) == 0) {
    uVar1 = *(uint *)(iVar2 + 0x84);
  }
  return uVar1;
}
