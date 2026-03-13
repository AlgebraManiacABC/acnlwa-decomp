/**
 * FUN_003e65c4.c
 * Source line: 559330
 * Body lines: 7
 */
#include "../../../include/types.h"

void FUN_003e65c4(int *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  
  puVar1 = (undefined4 *)*param_1;
  uVar2 = param_2[1];
  *puVar1 = *param_2;
  puVar1[1] = uVar2;
  return;
}
