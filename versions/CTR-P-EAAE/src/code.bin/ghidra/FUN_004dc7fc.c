/**
 * FUN_004dc7fc.c
 * Source line: 722798
 * Body lines: 7
 */
#include "../../../include/types.h"

undefined4 FUN_004dc7fc(int param_1,undefined2 *param_2)

{
  FUN_0023ffb8(param_1,100);
  *(float *)(param_1 + 4) = *(float *)(param_1 + 4) + 1.0;
  *(float *)(param_1 + 8) = *(float *)(param_1 + 8) - 8.0;
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  return 1;
}
