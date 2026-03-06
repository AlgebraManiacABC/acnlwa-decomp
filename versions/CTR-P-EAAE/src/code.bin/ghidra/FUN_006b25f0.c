/**
 * FUN_006b25f0.c
 * Source line: 1010441
 * Body lines: 11
 */
#include "../../../include/types.h"

void FUN_006b25f0(int param_1,float *param_2)

{
  if (*(int *)(param_1 + 0xd04) != 0) {
    if (*(float *)(param_1 + 0xd08) == *param_2) {
      if (*(float *)(param_1 + 0xd0c) == param_2[1]) goto LAB_006b2650;
    }
  }
  FUN_006b2104(param_1,0x1000443);
  *(float *)(param_1 + 0xd08) = *param_2;
  *(float *)(param_1 + 0xd0c) = param_2[1];
LAB_006b2650:
  *(undefined1 *)(param_1 + 0xd00) = 1;
  return;
}
