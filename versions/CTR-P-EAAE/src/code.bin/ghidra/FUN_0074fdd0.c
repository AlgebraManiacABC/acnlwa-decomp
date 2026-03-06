/**
 * FUN_0074fdd0.c
 * Source line: 1106557
 * Body lines: 9
 */
#include "../../../include/types.h"

undefined4 FUN_0074fdd0(int param_1)

{
  if (*(char *)(param_1 + 0x14) == '\x01') {
    if (*(float *)(param_1 + 8) < *(float *)(param_1 + 4) - 1.0) {
      return 0;
    }
  }
  else if ((*(char *)(param_1 + 0x14) != '\x03') || (0.0 < *(float *)(param_1 + 8))) {
    return 0;
  }
  return 1;
}
