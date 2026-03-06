/**
 * FUN_0027a460.c
 * Source line: 323802
 * Body lines: 3
 */
#include "../../../include/types.h"

uint FUN_0027a460(void)

{
  uint uVar1;
  
  uVar1 = ranqd2_ranged_int_from_seed_2(0x8000);
  return uVar1 & 0xffff | 0x8000;
}
