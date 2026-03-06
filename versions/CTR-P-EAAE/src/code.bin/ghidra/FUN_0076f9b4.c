/**
 * FUN_0076f9b4.c
 * Source line: 1132723
 * Body lines: 11
 */
#include "../../../include/types.h"

int FUN_0076f9b4(int param_1)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = 0;
  uVar2 = 0;
  do {
    if ((uVar2 < 0x172b) && (((uint)*(byte *)(param_1 + (uVar2 >> 3)) & 1 << (uVar2 & 7)) != 0)) {
      iVar1 += 1;
    }
    uVar2 += 1;
  } while (uVar2 < 0x172b);
  return iVar1;
}
