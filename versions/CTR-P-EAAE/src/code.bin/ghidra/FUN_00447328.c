/**
 * FUN_00447328.c
 * Source line: 609411
 * Body lines: 6
 */
#include "../../../include/types.h"

uint FUN_00447328(int param_1)

{
  uint unaff_r5;
  
  if (*(int *)(*(int *)(param_1 + 0x44) + 4) == -0x275eb702) {
    FUN_0044bfbc(uRam00974a64);
  }
  *(undefined4 *)(param_1 + 0x44) = 0;
  return unaff_r5 & 0xff00 | 1;
}
