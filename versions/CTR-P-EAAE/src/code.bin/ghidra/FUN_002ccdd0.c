/**
 * FUN_002ccdd0.c
 * Source line: 367548
 * Body lines: 15
 */
#include "../../../include/types.h"

void FUN_002ccdd0(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x110);
  if (iVar1 < *(int *)(param_1 + 0x10c)) {
    do {
      FUN_002e01ac(*(int *)(param_1 + 0x108) + iVar1 * 0x518);
      iVar1 += 1;
    } while (iVar1 < *(int *)(param_1 + 0x10c));
  }
  iVar1 = FUN_006d1e64();
  if ((*(char *)(iVar1 + 0x40) != '\0') && (*(char *)(DAT_0094fd3c + 0x1fc) == '\t')) {
    FUN_001fa354(*(undefined4 *)(iVar1 + 500));
    *(undefined1 *)(iVar1 + 0x40) = 0;
  }
  *(uint *)(param_1 + 0xd4) = *(uint *)(param_1 + 0xd4) | 8;
  return;
}
