/**
 * FUN_0057d9a8.c
 * Source line: 825097
 * Body lines: 15
 */
#include "../../../include/types.h"

void FUN_0057d9a8(int param_1)

{
  int iVar1;
  
  DAT_0094fd58 = DAT_0094fd58 & 0xffffff6f | 8;
  (**(code **)(**(int **)(param_1 + 0x560) + 0x10))();
  if (*(char *)(param_1 + 0x11b0) == '\x01') {
    (**(code **)(**(int **)(param_1 + 0x570) + 0x10))();
  }
  *(undefined4 *)(*(int *)(param_1 + 0x55c) + 0x184) = 2;
  if (*(int *)(param_1 + 0x1104) == 2) {
    iVar1 = 0;
    do {
      FUN_0050c394(*(undefined4 *)(*(int *)(param_1 + iVar1 * 4 + 0x1118) + 4));
      iVar1 += 1;
    } while (iVar1 < 2);
  }
  return;
}
