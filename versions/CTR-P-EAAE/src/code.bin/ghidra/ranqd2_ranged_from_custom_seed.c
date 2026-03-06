/**
 * ranqd2_ranged_from_custom_seed.c
 * Source line: 412801
 * Body lines: 3
 */
#include "../../../include/types.h"

int ranqd2_ranged_from_custom_seed(uint *param_1,int range)

{
  float fVar1;
  
  fVar1 = ranqd2(param_1);
  return (int)(fVar1 * (float)(longlong)range);
}
