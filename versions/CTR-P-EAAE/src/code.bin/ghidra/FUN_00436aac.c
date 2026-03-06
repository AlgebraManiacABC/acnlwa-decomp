/**
 * FUN_00436aac.c
 * Source line: 601023
 * Body lines: 6
 */
#include "../../../include/types.h"

uint FUN_00436aac(int *param_1,undefined4 param_2,uint param_3)

{
  uint unaff_r4;
  
  if ((char)param_1[0x2d] != '\x01') {
    (**(code **)(*param_1 + 0x3c))();
    return unaff_r4 & 0xff00;
  }
  return param_3 & 0xff00 | 5;
}
