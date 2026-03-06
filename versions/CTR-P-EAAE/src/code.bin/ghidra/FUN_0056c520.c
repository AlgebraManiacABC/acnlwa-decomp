/**
 * FUN_0056c520.c
 * Source line: 813568
 * Body lines: 11
 */
#include "../../../include/types.h"

uint FUN_0056c520(void)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = 0x16;
  do {
    iVar1 = FUN_0062f728(uVar2 & 0xff);
    if (iVar1 == 0) {
      return uVar2 + 1 & 0xff;
    }
    uVar2 -= 1;
  } while (-1 < (int)uVar2);
  return 0;
}
