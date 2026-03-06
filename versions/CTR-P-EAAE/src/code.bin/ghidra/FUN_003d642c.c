/**
 * FUN_003d642c.c
 * Source line: 547546
 * Body lines: 12
 */
#include "../../../include/types.h"

void FUN_003d642c(int param_1,int param_2,undefined4 param_3)

{
  *(int *)(param_1 + 0x48) = param_2;
  if (param_2 == 1) {
    *(undefined4 *)(param_1 + 0x18) = 0x5f;
    *(undefined4 *)(param_1 + 0x1c) = param_3;
    return;
  }
  if (param_2 != 2 && param_2 != 3) {
    FUN_003d6460(param_1,0x60,0);
    return;
  }
  FUN_003d6460(param_1,0x62);
  return;
}
