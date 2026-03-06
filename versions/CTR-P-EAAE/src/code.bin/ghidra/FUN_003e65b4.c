/**
 * FUN_003e65b4.c
 * Source line: 559317
 * Body lines: 5
 */
#include "../../../include/types.h"

void FUN_003e65b4(undefined4 *param_1,int *param_2)

{
  undefined4 uVar1;
  
  uVar1 = ((undefined4 *)*param_2)[1];
  *param_1 = *(undefined4 *)*param_2;
  param_1[1] = uVar1;
  return;
}
