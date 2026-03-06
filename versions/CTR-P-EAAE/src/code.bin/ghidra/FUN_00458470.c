/**
 * FUN_00458470.c
 * Source line: 622115
 * Body lines: 11
 */
#include "../../../include/types.h"

int FUN_00458470(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_0044df28();
  if (-1 < iVar1) {
    *(undefined4 *)(param_1 + 0x148) = 0;
    FUN_00426830(param_1 + 0x14c);
    *(undefined1 *)(param_1 + 0x13d) = 0xfd;
    *(undefined4 *)(param_1 + 0x140) = 0;
    iVar1 = 0;
    *(undefined4 *)(param_1 + 0x144) = 0;
  }
  return iVar1;
}
