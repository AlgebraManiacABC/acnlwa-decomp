/**
 * FUN_0029b004.c
 * Source line: 339978
 * Body lines: 8
 */
#include "../../../include/types.h"

void FUN_0029b004(int param_1)

{
  if (*(int *)(param_1 + 0xb4) != 0) {
    FUN_001ff500();
  }
  if (*(int *)(param_1 + 0x104) != 0) {
    FUN_001ff500();
  }
  *(undefined4 *)(param_1 + 0x104) = 0;
  return;
}
