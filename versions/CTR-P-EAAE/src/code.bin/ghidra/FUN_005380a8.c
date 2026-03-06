/**
 * FUN_005380a8.c
 * Source line: 779295
 * Body lines: 7
 */
#include "../../../include/types.h"

undefined4 FUN_005380a8(int param_1)

{
  if ((*(uint *)(param_1 + -4) & 1) == 0) {
    param_1 += -0x10;
  }
  else {
    param_1 = *(uint *)(param_1 + -4) - 1;
  }
  return *(undefined4 *)(param_1 + 8);
}
