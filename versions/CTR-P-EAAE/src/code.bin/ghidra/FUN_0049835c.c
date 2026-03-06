/**
 * FUN_0049835c.c
 * Source line: 671021
 * Body lines: 8
 */
#include "../../../include/types.h"

uint FUN_0049835c(undefined4 param_1,undefined4 param_2)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = FUN_004b3348();
  if (-1 < (int)uVar1) {
    uVar2 = FUN_00498394(param_1,param_2);
    uVar1 = uVar2 | uVar1;
  }
  return uVar1;
}
