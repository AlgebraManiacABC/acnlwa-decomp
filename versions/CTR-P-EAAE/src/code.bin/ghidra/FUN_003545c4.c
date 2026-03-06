/**
 * FUN_003545c4.c
 * Source line: 455706
 * Body lines: 14
 */
#include "../../../include/types.h"

uint FUN_003545c4(uint param_1)

{
  uint uVar1;
  int iVar2;
  
  if (param_1 < 4) {
    iVar2 = coproc_movefrom_User_R_Thread_and_Process_ID();
    *(undefined4 *)(iVar2 + 0x80) = 0x60040;
    *(int *)(iVar2 + 0x84) = 1 << (param_1 & 0xff);
    software_interrupt(0x32);
    uVar1 = uRam0097d8c8;
    if ((uRam0097d8c8 & 0x80000000) == 0) {
      uVar1 = *(uint *)(iVar2 + 0x84);
    }
    return uVar1;
  }
  return 0xd8e06bed;
}
