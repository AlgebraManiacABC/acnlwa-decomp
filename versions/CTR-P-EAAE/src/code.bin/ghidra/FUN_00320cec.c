/**
 * FUN_00320cec.c
 * Source line: 424053
 * Body lines: 11
 */
#include "../../../include/types.h"

void FUN_00320cec(int param_1,int param_2)

{
  if (*(int *)(param_1 + 0x280) != 0) {
    FUN_004b9b64(param_1 + 0x130);
    if (param_2 == 0) {
      FUN_00569508();
    }
    else {
      (**(code **)(**(int **)(param_1 + 0x280) + 8))(0);
    }
          // WARNING: Subroutine does not return
    FUN_00568c10(param_1 + 0x130);
  }
  return;
}
