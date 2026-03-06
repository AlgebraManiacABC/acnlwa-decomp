/**
 * FUN_0074818c.c
 * Source line: 1104097
 * Body lines: 8
 */
#include "../../../include/types.h"

uint FUN_0074818c(int *param_1,int *param_2)

{
  uint uVar1;
  
  if ((*param_2 == *param_1) && (param_2[1] == param_1[1])) {
    uVar1 = 1;
  }
  else {
    uVar1 = 0;
  }
  return uVar1 ^ 1;
}
