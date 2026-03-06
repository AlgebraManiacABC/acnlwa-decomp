/**
 * FUN_007255d4.c
 * Source line: 1079656
 * Body lines: 4
 */
#include "../../../include/types.h"

float FUN_007255d4(undefined4 param_1,byte *param_2,byte *param_3)

{
  return SQRT((float)(longlong)(int)((uint)*param_2 - (uint)*param_3) *
              (float)(longlong)(int)((uint)*param_2 - (uint)*param_3) +
              (float)(longlong)(int)((uint)param_2[1] - (uint)param_3[1]) *
              (float)(longlong)(int)((uint)param_2[1] - (uint)param_3[1]));
}
