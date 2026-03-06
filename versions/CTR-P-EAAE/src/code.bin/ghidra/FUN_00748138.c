/**
 * FUN_00748138.c
 * Source line: 1104066
 * Body lines: 8
 */
#include "../../../include/types.h"

undefined4 FUN_00748138(int *param_1,int *param_2)

{
  undefined4 uVar1;
  
  if ((*param_2 == *param_1) && (param_2[1] == param_1[1])) {
    uVar1 = 1;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}
