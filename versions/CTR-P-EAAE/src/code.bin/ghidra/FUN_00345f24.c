/**
 * FUN_00345f24.c
 * Source line: 442939
 * Body lines: 8
 */
#include "../../../include/types.h"

int FUN_00345f24(int param_1)

{
  if ((*(uint *)(param_1 + 4) & 0xfffffffe) != 0) {
    if ((*(uint *)(param_1 + 4) & 1) != 0) {
      FUN_00134250();
    }
    FUN_0012ede8(*(uint *)(param_1 + 4) & 0xfffffffe);
    *(uint *)(param_1 + 4) = 0;
  }
  return param_1;
}
