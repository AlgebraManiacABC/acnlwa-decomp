/**
 * FUN_0041fd14.c
 * Source line: 586904
 * Body lines: 7
 */
#include "../../../include/types.h"

uint FUN_0041fd14(int param_1)

{
  uint unaff_r5;
  
  if (**(char **)(param_1 + 0x44) != '\x01') {
    FUN_004261f4(*(undefined4 *)(param_1 + 0x40));
    *(undefined4 *)(param_1 + 0x40) = 0;
    return unaff_r5 & 0xff00 | 1;
  }
  return 5;
}
