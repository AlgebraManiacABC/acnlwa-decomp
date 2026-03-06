/**
 * FUN_003cfbf4.c
 * Source line: 541668
 * Body lines: 12
 */
#include "../../../include/types.h"

int FUN_003cfbf4(int param_1)

{
  int iVar1;
  int local_10 [2];
  
  if (*(int *)(param_1 + 0x24) != 0) {
    FUN_0035ba40(&UNK_0089be44,0x61,0xe000000e,0);
    return -1;
  }
  FUN_0035b994(local_10);
  iVar1 = ((local_10[0] - *(int *)(param_1 + 0x10)) - *(int *)(param_1 + 0x18)) +
          *(int *)(param_1 + 0x20);
  *(int *)(param_1 + 0x20) = iVar1;
  *(undefined4 *)(param_1 + 0x24) = 2;
  return iVar1;
}
