/**
 * FUN_0040b714.c
 * Source line: 576061
 * Body lines: 9
 */
#include "../../../include/types.h"

uint FUN_0040b714(int param_1)

{
  uint unaff_r5;
  
  if (*(int *)(param_1 + 0x58) < 0) {
    FUN_00426224(*(undefined4 *)(param_1 + 0x40));
  }
  else {
    FUN_00426270(*(undefined4 *)(param_1 + 0x40),0);
  }
  *(undefined4 *)(param_1 + 0x40) = 0;
  return unaff_r5 & 0xff00 | 1;
}
