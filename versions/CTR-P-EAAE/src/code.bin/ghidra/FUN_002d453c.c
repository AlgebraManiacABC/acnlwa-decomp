/**
 * FUN_002d453c.c
 * Source line: 372754
 * Body lines: 13
 */
#include "../../../include/types.h"

void FUN_002d453c(int param_1)

{
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined2 *)(param_1 + 0x7ec) = 0;
  *(undefined2 *)(param_1 + 0x7ee) = 0;
  *(undefined2 *)(param_1 + 0x7f0) = 0;
  *(undefined2 *)(param_1 + 0x7f2) = 0;
  __rt_memclr_w(param_1 + 0x6c,0x780);
  return;
}
