/**
 * FUN_003d0acc.c
 * Source line: 542486
 * Body lines: 10
 */
#include "../../../include/types.h"

int FUN_003d0acc(int param_1)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = (uint)*(byte *)(param_1 + 4) * 0x1b0;
  if (cRam0096b8f6 != '\0') {
    piVar2 = (int *)FUN_007d5870(uRam0096b950);
    if (*piVar2 != 0) {
      return *(int *)(iVar1 + 0xadd980) + *piVar2 * 0xd0;
    }
  }
  return iVar1 + 0xadd988;
}
