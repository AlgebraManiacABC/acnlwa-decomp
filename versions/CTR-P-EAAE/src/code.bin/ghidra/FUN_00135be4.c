/**
 * FUN_00135be4.c
 * Source line: 142348
 * Body lines: 5
 */
#include "../../../include/types.h"

void FUN_00135be4(int param_1)

{
  if (*(int *)(param_1 + 0x18) != 0) {
    FUN_0013e6bc(param_1 + 0x18);
    *(undefined4 *)(param_1 + 0x18) = 0;
  }
  return;
}
