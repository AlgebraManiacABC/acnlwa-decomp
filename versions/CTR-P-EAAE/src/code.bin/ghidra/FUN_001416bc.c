/**
 * FUN_001416bc.c
 * Source line: 153894
 * Body lines: 10
 */
#include "../../../include/types.h"

undefined4 FUN_001416bc(int param_1)

{
  if (*(short *)(param_1 + 0x14) == 0x6801) {
    param_1 += 0x14;
  }
  else if (*(short *)(param_1 + 0x20) == 0x6801) {
    param_1 += 0x20;
  }
  else {
    param_1 = 0;
  }
  return *(undefined4 *)(param_1 + 4);
}
