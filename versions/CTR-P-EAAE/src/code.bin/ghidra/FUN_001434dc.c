/**
 * FUN_001434dc.c
 * Source line: 155784
 * Body lines: 10
 */
#include "../../../include/types.h"

undefined4 FUN_001434dc(int param_1)

{
  if (*(short *)(param_1 + 0x14) == 0x6800) {
    param_1 += 0x14;
  }
  else if (*(short *)(param_1 + 0x20) == 0x6800) {
    param_1 += 0x20;
  }
  else {
    param_1 = 0;
  }
  return *(undefined4 *)(param_1 + 4);
}
