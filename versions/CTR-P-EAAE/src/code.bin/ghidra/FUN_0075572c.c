/**
 * FUN_0075572c.c
 * Source line: 1111193
 * Body lines: 8
 */
#include "../../../include/types.h"

undefined4 FUN_0075572c(short *param_1,short *param_2)

{
  undefined4 uVar1;
  
  if ((*param_1 == *param_2) && (param_1[1] == param_2[1])) {
    uVar1 = 1;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}
