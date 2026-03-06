/**
 * FUN_006a6c78.c
 * Source line: 1003859
 * Body lines: 15
 */
#include "../../../include/types.h"

void FUN_006a6c78(int *param_1,int *param_2,int param_3,int param_4)

{
  if (param_3 < 0) {
    param_3 = ((int)(param_3 + 1 + ((uint)(param_3 + 1 >> 0x1f) >> 0x1c)) >> 4) + -1;
  }
  else {
    param_3 >>= 4;
  }
  *param_1 = param_3;
  if (param_4 < 0) {
    param_4 = ((int)(param_4 + 1 + ((uint)(param_4 + 1 >> 0x1f) >> 0x1c)) >> 4) + -1;
  }
  else {
    param_4 >>= 4;
  }
  *param_2 = param_4;
  return;
}
