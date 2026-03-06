/**
 * FUN_004c5750.c
 * Source line: 705882
 * Body lines: 8
 */
#include "../../../include/types.h"

void FUN_004c5750(int param_1)

{
  if ((*(uint *)(param_1 + 4) & 0xfffffffe) != 0) {
    if ((*(uint *)(param_1 + 4) & 1) != 0) {
      FUN_00134250();
    }
    FUN_0012ede8(*(uint *)(param_1 + 4) & 0xfffffffe);
    *(undefined4 *)(param_1 + 4) = 0;
  }
  return;
}
