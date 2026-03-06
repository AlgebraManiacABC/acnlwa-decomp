/**
 * FUN_002b8fb0.c
 * Source line: 355619
 * Body lines: 13
 */
#include "../../../include/types.h"

void FUN_002b8fb0(int param_1,int param_2)

{
  if (*(int *)(param_1 + 0x280) != 0) {
    FUN_004b9b64(param_1 + 0x134);
    if (param_2 == 0) {
      FUN_00569508();
    }
    else {
      (**(code **)(**(int **)(param_1 + 0x280) + 8))(0);
    }
          // WARNING: Subroutine does not return
    FUN_00568c10(param_1 + 0x134);
  }
  *(byte *)(param_1 + 0xd9) = (byte)param_2 ^ 1;
  *(byte *)(param_1 + 0x12d) = (byte)param_2 ^ 1;
  return;
}
