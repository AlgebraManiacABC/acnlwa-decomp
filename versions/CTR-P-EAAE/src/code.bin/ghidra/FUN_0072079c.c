/**
 * FUN_0072079c.c
 * Source line: 1077759
 * Body lines: 9
 */
#include "../../../include/types.h"

byte FUN_0072079c(int param_1)

{
  byte bVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0xc);
  if ((((iVar2 == 0) || (*(int *)(param_1 + 0x10) != *(int *)(iVar2 + 0xc))) ||
      (*(char *)(iVar2 + 0x1cc) != '\0')) ||
     (bVar1 = *(byte *)(param_1 + 0x14) & 2, (*(byte *)(param_1 + 0x14) & 2) != 0)) {
    bVar1 = 1;
  }
  return bVar1;
}
