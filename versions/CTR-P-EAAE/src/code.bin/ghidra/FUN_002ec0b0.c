/**
 * FUN_002ec0b0.c
 * Source line: 384682
 * Body lines: 9
 */
#include "../../../include/types.h"

void FUN_002ec0b0(int param_1)

{
  *(undefined4 *)(param_1 + 0x20) = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  *(code **)(param_1 + 4) = FUN_002ec3bc;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined2 *)(param_1 + 0xc) = 0;
  *(undefined2 *)(param_1 + 0xe) = 0xffff;
  *(undefined2 *)(param_1 + 0x10) = 0;
  FUN_0068ef34(param_1,0xb,0);
  return;
}
