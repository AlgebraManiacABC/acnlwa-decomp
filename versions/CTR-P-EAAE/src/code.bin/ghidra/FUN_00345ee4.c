/**
 * FUN_00345ee4.c
 * Source line: 442923
 * Body lines: 9
 */
#include "../../../include/types.h"

void FUN_00345ee4(int param_1)

{
  if ((*(uint *)(param_1 + 4) & 0xfffffffe) != 0) {
    if ((*(uint *)(param_1 + 4) & 1) != 0) {
      FUN_00134250();
    }
    FUN_0012ede8(*(uint *)(param_1 + 4) & 0xfffffffe);
    *(uint *)(param_1 + 4) = 0;
  }
  FUN_002ffb64(param_1);
  return;
}
