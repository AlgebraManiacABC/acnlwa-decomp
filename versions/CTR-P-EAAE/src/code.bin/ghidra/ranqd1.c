/**
 * ranqd1.c
 * Source line: 808166
 * Body lines: 6
 */
#include "../../../include/types.h"

uint ranqd1(uint *seed_ptr)

{
  uint top32;
  longlong rand;
  
  rand = (ulonglong)*seed_ptr * rand_a + CONCAT44((int)rand,rand_b);
  top32 = (uint)((ulonglong)rand >> 32);
  *seed_ptr = top32;
  return top32;
}
