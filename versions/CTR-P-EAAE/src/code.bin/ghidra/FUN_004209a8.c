/**
 * FUN_004209a8.c
 * Source line: 587274
 * Body lines: 15
 */
#include "../../../include/types.h"

uint FUN_004209a8(int param_1)

{
  int iVar1;
  uint unaff_r5;
  uint extraout_r12;
  
  iVar1 = (**(code **)(**(int **)(param_1 + 0x5c) + 0x38))
                    (*(int **)(param_1 + 0x5c),param_1 + 0x44,0);
  if (iVar1 < 0) {
    *(undefined **)(param_1 + 0x24) = &UNK_00420724;
    *(undefined4 *)(param_1 + 0x28) = 0;
    *(char **)(param_1 + 0x2c) = "LocalMatchCreateSessionJob::CompleteFailure";
    return extraout_r12 & 0xff00;
  }
  *(undefined **)(param_1 + 0x24) = &UNK_00420bc0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(char **)(param_1 + 0x2c) = "LocalMatchCreateSessionJob::WaitDestroyLocalNetwork";
  return unaff_r5 & 0xff00 | 5;
}
