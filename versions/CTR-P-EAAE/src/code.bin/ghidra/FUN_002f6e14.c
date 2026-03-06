/**
 * FUN_002f6e14.c
 * Source line: 389089
 * Body lines: 8
 */
#include "../../../include/types.h"

void FUN_002f6e14(int *param_1)

{
  if ((param_1[0x35] & 1U) != 0 || (param_1[0x35] & 2U) != 0) {
    (**(code **)(*param_1 + 0x34))(param_1);
    param_1[0x2d] = 0;
    param_1[0x35] = param_1[0x35] & 0xfffffffc;
    param_1[0x2e] = (int)FUN_002f64d8;
    param_1[0x2f] = 0;
  }
  return;
}
