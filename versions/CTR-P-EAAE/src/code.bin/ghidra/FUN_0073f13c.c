/**
 * FUN_0073f13c.c
 * Source line: 1097660
 * Body lines: 13
 */
#include "../../../include/types.h"

undefined4 FUN_0073f13c(int param_1)

{
  if (*(short *)(param_1 + 0x14) == 0x2000) {
    param_1 += 0x14;
  }
  else if (*(short *)(param_1 + 0x20) == 0x2000) {
    param_1 += 0x20;
  }
  else if (*(short *)(param_1 + 0x2c) == 0x2000) {
    param_1 += 0x2c;
  }
  else {
    param_1 = 0;
  }
  return *(undefined4 *)(param_1 + 8);
}
