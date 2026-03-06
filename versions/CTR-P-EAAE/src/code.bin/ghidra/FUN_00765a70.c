/**
 * FUN_00765a70.c
 * Source line: 1124142
 * Body lines: 4
 */
#include "../../../include/types.h"

void FUN_00765a70(int param_1,int param_2)

{
  FUN_006a5f0c(param_1,7,2);
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 0x18);
  *(float *)(param_1 + 8) = *(float *)(param_1 + 8) + 32.0;
  return;
}
