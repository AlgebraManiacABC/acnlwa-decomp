/**
 * FUN_006a20f4.c
 * Source line: 1001883
 * Body lines: 5
 */
#include "../../../include/types.h"

void FUN_006a20f4(int param_1,undefined4 param_2,int param_3)

{
  *(int *)(param_1 + 0xb8) = param_3;
  if (*(int *)(param_1 + 0xbc) != param_3) {
          // WARNING: Subroutine does not return
    FUN_0058660c();
  }
  return;
}
