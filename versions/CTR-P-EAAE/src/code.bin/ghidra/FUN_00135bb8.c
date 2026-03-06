/**
 * FUN_00135bb8.c
 * Source line: 142335
 * Body lines: 6
 */
#include "../../../include/types.h"

void FUN_00135bb8(int param_1)

{
  *(undefined4 *)(param_1 + 0x54) = 0;
  if (*(int *)(param_1 + 0x18) != 0) {
    FUN_0013e6bc(param_1 + 0x18);
    *(undefined4 *)(param_1 + 0x18) = 0;
  }
  return;
}
