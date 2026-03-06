/**
 * FUN_00755758.c
 * Source line: 1111209
 * Body lines: 8
 */
#include "../../../include/types.h"

uint FUN_00755758(short *param_1,short *param_2)

{
  uint uVar1;
  
  if ((*param_1 == *param_2) && (param_1[1] == param_2[1])) {
    uVar1 = 1;
  }
  else {
    uVar1 = 0;
  }
  return uVar1 ^ 1;
}
