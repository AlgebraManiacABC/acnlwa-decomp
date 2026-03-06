/**
 * FUN_0074fdc8.c
 * Source line: 1106541
 * Body lines: 9
 */
#include "../../../include/types.h"

undefined4 FUN_0074fdc8(int param_1)

{
  if (*(char *)(param_1 + 0x3cc) == '\x01') {
    if (*(float *)(param_1 + 0x3c0) < *(float *)(param_1 + 0x3bc) - 1.0) {
      return 0;
    }
  }
  else if ((*(char *)(param_1 + 0x3cc) != '\x03') || (0.0 < *(float *)(param_1 + 0x3c0))) {
    return 0;
  }
  return 1;
}
