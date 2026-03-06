/**
 * ranqd2_ranged_from_custom_seed.c
 * Source line: 808180
 * Body lines: 3
 */
#include "../../../include/types.h"

int ranqd2_ranged_from_custom_seed(uint *param_1,int range)

{
  float ran0_1;
  
  ran0_1 = ranqd2(param_1);
  return (int)(ran0_1 * (float)(longlong)range);
}
