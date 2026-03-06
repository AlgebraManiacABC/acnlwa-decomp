/**
 * FUN_006c48ac.c
 * Source line: 1023358
 * Body lines: 13
 */
#include "../../../include/types.h"

void FUN_006c48ac(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = (int)*(char *)(param_1 + 0xc);
  if (iVar2 != -1) {
    if ((iVar2 < 0x40) &&
       (iVar1 = FUN_006158c4(), 0xb < (byte)*(undefined2 *)(iVar1 + iVar2 * 0x14 + 0x14))) {
      return;
    }
    if (*(byte *)(param_1 + 0xc) < 0x40) {
      FUN_006158c4();
    }
  }
  return;
}
