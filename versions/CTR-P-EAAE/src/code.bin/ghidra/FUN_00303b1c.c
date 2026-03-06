/**
 * FUN_00303b1c.c
 * Source line: 400841
 * Body lines: 13
 */
#include "../../../include/types.h"

void FUN_00303b1c(void)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = 0;
  while (((iVar1 = FUN_002fb96c(uVar2 & 0xff), iVar1 == 0 ||
          ((int)((uint)*(byte *)(iVar1 + 0x5720) << 0x1d) < 0)) ||
         (-1 < (int)((uint)*(byte *)(iVar1 + 0x5701) << 0x1e)))) {
    uVar2 += 1;
    if (3 < (int)uVar2) {
      return;
    }
  }
  GET_DAT_0095bf74();
  return;
}
