/**
 * FUN_005c1d80.c
 * Source line: 871381
 * Body lines: 13
 */
#include "../../../include/types.h"

int FUN_005c1d80(void)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = 0;
  uVar2 = 0;
  do {
    iVar1 = FUN_005c33d0(uVar2 & 0xff,0);
    if (iVar1 != 0) {
      iVar3 += 1;
    }
    uVar2 += 1;
  } while (uVar2 < 4);
  return iVar3;
}
