/**
 * FUN_0071c5d4.c
 * Source line: 1074420
 * Body lines: 11
 */
#include "../../../include/types.h"

int FUN_0071c5d4(int param_1)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = 0;
  uVar2 = 0;
  do {
    if ((10 < uVar2) || (*(char *)(param_1 + uVar2 + 0x3e) != '\0')) {
      iVar1 += 1;
    }
    uVar2 += 1;
  } while ((int)uVar2 < 0xb);
  return iVar1;
}
