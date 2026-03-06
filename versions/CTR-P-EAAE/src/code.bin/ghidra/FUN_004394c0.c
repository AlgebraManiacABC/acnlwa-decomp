/**
 * FUN_004394c0.c
 * Source line: 602619
 * Body lines: 6
 */
#include "../../../include/types.h"

uint FUN_004394c0(int param_1)

{
  uint unaff_r5;
  
  if (*(int *)(*(int *)(param_1 + 0x40) + 4) == -0x275eb702) {
    FUN_0044bfbc(uRam00974a64);
  }
  *(undefined4 *)(param_1 + 0x40) = 0;
  return unaff_r5 & 0xff00 | 1;
}
