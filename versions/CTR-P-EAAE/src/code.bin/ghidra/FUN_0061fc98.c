/**
 * FUN_0061fc98.c
 * Source line: 934908
 * Body lines: 8
 */
#include "../../../include/types.h"

void FUN_0061fc98(int param_1)

{
  int iVar1;
  
  *(undefined1 *)(param_1 + 0x11ae8) = 1;
  iVar1 = FUN_0050d0c4(&DAT_00a22020,param_1 + 0x11950,100,param_1 + 0x11ae4,1,0);
  if (iVar1 != 0) {
    *(undefined1 *)(param_1 + 0x11ae8) = 0;
    *(undefined1 *)(param_1 + 0x11ae9) = 0;
  }
  return;
}
