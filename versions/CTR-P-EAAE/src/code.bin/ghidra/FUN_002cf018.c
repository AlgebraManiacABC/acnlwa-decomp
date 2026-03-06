/**
 * FUN_002cf018.c
 * Source line: 368677
 * Body lines: 6
 */
#include "../../../include/types.h"

void FUN_002cf018(int param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_00135748(param_1 + 8);
  *(undefined4 *)(param_1 + 0x2c0) = param_2;
  *(undefined4 *)(param_1 + 0x2cc) = param_3;
  *(undefined4 *)(param_1 + 0x2d8) = 0;
  FUN_001357ec(param_1 + 8);
  return;
}
