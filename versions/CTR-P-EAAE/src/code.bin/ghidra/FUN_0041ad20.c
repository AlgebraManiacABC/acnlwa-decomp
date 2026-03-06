/**
 * FUN_0041ad20.c
 * Source line: 584384
 * Body lines: 8
 */
#include "../../../include/types.h"

uint FUN_0041ad20(int param_1)

{
  uint unaff_r5;
  
  if (**(char **)(param_1 + 0x44) != '\x01') {
    FUN_0041b854(param_1);
    FUN_004261f4(*(undefined4 *)(param_1 + 0x40));
    *(undefined4 *)(param_1 + 0x40) = 0;
    return unaff_r5 & 0xff00 | 1;
  }
  return 5;
}
