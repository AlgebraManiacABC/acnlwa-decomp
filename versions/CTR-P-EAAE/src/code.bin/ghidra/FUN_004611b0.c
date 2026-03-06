/**
 * FUN_004611b0.c
 * Source line: 628516
 * Body lines: 7
 */
#include "../../../include/types.h"

void FUN_004611b0(int param_1)

{
  int iVar1;
  
  iVar1 = 0;
  do {
    FUN_0046601c(*(undefined4 *)(*(int *)(param_1 + iVar1 * 4 + 0x18dc) + 0x68));
    iVar1 += 1;
  } while (iVar1 < 0x18);
  return;
}
