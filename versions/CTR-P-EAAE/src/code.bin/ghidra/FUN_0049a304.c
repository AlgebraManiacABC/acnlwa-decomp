/**
 * FUN_0049a304.c
 * Source line: 672616
 * Body lines: 12
 */
#include "../../../include/types.h"

uint FUN_0049a304(undefined4 param_1,undefined4 param_2)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = FUN_0049835c();
  if (-1 < (int)uVar1) {
    uVar2 = FUN_0049a430(param_1,param_2);
    uVar1 = uVar2 | uVar1;
    if (-1 < (int)uVar1) {
      uVar2 = FUN_004aa0d8(param_1,param_2);
      uVar1 = uVar2 | uVar1;
    }
  }
  return uVar1;
}
