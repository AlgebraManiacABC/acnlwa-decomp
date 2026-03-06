/**
 * FUN_006b4aa8.c
 * Source line: 1011522
 * Body lines: 5
 */
#include "../../../include/types.h"

float FUN_006b4aa8(float param_1,float param_2,int param_3,int param_4,int param_5)

{
  if (param_4 != param_5) {
    param_1 = ((float)(longlong)(param_3 - param_4) * (param_2 - param_1)) /
              (float)(longlong)(param_5 - param_4) + param_1;
  }
  return param_1;
}
