/**
 * FUN_00447370.c
 * Source line: 609425
 * Body lines: 4
 */
#include "../../../include/types.h"

uint FUN_00447370(int param_1)

{
  uint unaff_r5;
  
  FUN_00426270(*(undefined4 *)(param_1 + 0x44),0);
  *(undefined4 *)(param_1 + 0x44) = 0;
  return unaff_r5 & 0xff00 | 1;
}
