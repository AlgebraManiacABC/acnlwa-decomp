/**
 * FUN_00437ae0.c
 * Source line: 601570
 * Body lines: 6
 */
#include "../../../include/types.h"

uint FUN_00437ae0(int param_1)

{
  uint unaff_r5;
  
  FUN_00426270(*(undefined4 *)(param_1 + 0x40),0);
  *(undefined4 *)(param_1 + 0x40) = 0;
  *(undefined1 *)(iRam0097d428 + 0xa4) = 0;
  FUN_00447ac0(iRam0097d428,0);
  return unaff_r5 & 0xff00 | 1;
}
