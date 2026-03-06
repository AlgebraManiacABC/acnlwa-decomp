/**
 * ranqd2_ranged_int_from_seed_1.c
 * Source line: 394807
 * Body lines: 3
 */
#include "../../../include/types.h"

int ranqd2_ranged_int_from_seed_1(int range)

{
  float ran0_1;
  
  ran0_1 = ranqd2(&ranqd2_seed_1);
  return (int)(ran0_1 * (float)(longlong)range);
}
