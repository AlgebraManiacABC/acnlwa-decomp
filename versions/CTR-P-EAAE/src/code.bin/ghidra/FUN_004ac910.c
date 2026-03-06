/**
 * FUN_004ac910.c
 * Source line: 686891
 * Body lines: 10
 */
#include "../../../include/types.h"

uint FUN_004ac910(undefined4 param_1,undefined4 param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar1 = FUN_0049835c();
  if (-1 < (int)uVar1) {
    uVar2 = FUN_004ac958(param_1,param_2);
    uVar3 = FUN_004acffc(param_1,param_2);
    uVar1 = uVar3 | uVar1 | uVar2;
  }
  return uVar1;
}
