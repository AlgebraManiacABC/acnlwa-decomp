/**
 * FUN_0050cfb8.c
 * Source line: 750979
 * Body lines: 12
 */
#include "../../../include/types.h"

void FUN_0050cfb8(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0xb8);
  if (iVar1 != 0) {
    if (*(byte *)(iVar1 + 0x144) < 4) {
      *(byte *)(iVar1 + 0x144) = 0;
      *(undefined4 *)(iVar1 + 0x148) = 0;
      *(undefined1 *)(iVar1 + 0x14c) = 0;
      *(undefined1 *)(iVar1 + 0x14d) = 6;
    }
    return;
  }
  return;
}
