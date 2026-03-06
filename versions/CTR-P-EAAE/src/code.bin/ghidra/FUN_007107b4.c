/**
 * FUN_007107b4.c
 * Source line: 1066748
 * Body lines: 11
 */
#include "../../../include/types.h"

int FUN_007107b4(int param_1)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = 0;
  uVar2 = 0;
  do {
    if ((0x11 < uVar2) || (*(char *)(param_1 + uVar2 + 0x4a) != '\0')) {
      iVar1 += 1;
    }
    uVar2 += 1;
  } while ((int)uVar2 < 0x12);
  return iVar1;
}
