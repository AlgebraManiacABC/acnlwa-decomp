/**
 * FUN_005ca358.c
 * Source line: 878351
 * Body lines: 6
 */
#include "../../../include/types.h"

void FUN_005ca358(float *param_1,uint param_2)

{
  if (param_2 < 0xfc) {
    *param_1 = (float)(longlong)(int)(char)(&DAT_0088d6e4)[param_2 * 2];
    param_1[1] = 0.0;
    param_1[2] = (float)(longlong)(int)(char)(&DAT_0088d6e5)[param_2 * 2];
  }
  return;
}
