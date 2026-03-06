/**
 * FUN_006b4adc.c
 * Source line: 1011534
 * Body lines: 5
 */
#include "../../../include/types.h"

int FUN_006b4adc(float param_1,float param_2,float param_3,int param_4,int param_5)

{
  if (param_2 != param_3) {
    param_4 = (int)(((param_1 - param_2) * (float)(longlong)(param_5 - param_4)) /
                    (param_3 - param_2) + (float)(longlong)param_4);
  }
  return param_4;
}
