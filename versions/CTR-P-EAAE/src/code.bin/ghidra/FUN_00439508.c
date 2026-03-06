/**
 * FUN_00439508.c
 * Source line: 602633
 * Body lines: 10
 */
#include "../../../include/types.h"

uint FUN_00439508(int param_1)

{
  uint unaff_r5;
  
  FUN_00426270(*(undefined4 *)(param_1 + 0x40),0);
  *(undefined4 *)(param_1 + 0x40) = 0;
  if (cRam00ae62ad == -1) {
    cRam00ae62ad = '\x01';
  }
  else {
    cRam00ae62ad += '\x01';
  }
  return unaff_r5 & 0xff00 | 1;
}
