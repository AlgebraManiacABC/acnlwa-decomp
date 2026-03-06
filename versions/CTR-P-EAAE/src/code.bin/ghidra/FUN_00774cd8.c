/**
 * FUN_00774cd8.c
 * Source line: 1134502
 * Body lines: 5
 */
#include "../../../include/types.h"

void FUN_00774cd8(int param_1,undefined4 param_2,int param_3)

{
  *(int *)(param_1 + 0xa4) = param_3;
  if (*(int *)(param_1 + 0xa8) != param_3) {
          // WARNING: Subroutine does not return
    FUN_0058660c();
  }
  return;
}
