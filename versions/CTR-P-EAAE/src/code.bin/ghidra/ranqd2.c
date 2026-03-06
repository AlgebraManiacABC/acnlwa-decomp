/**
 * ranqd2.c
 * Source line: 148290
 * Body lines: 6
 */
#include "../../../include/types.h"

float ranqd2(uint *seed_ptr)

{
  uint top32;
  longlong rand;
  
  rand = (ulonglong)*seed_ptr * rand_a + CONCAT44((int)rand,rand_b);
  top32 = (uint)((ulonglong)rand >> 32);
  *seed_ptr = top32;
  return (float)(top32 >> 9 | 0x3f800000) - 1.0;
}
