/**
 * FUN_007259d4.c
 * Source line: 1079763
 * Body lines: 11
 */
#include "../../../include/types.h"

int FUN_007259d4(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = 0;
  while ((iVar2 = param_1 + iVar1 * 800, *(code **)(iVar2 + 0x1240) != FUN_006b17f8 ||
         (*(int *)(iVar2 + 0x1244) != 0))) {
    iVar1 += 1;
    if (0xb < iVar1) {
      return -1;
    }
  }
  return iVar1;
}
