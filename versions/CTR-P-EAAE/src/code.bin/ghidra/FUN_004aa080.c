/**
 * FUN_004aa080.c
 * Source line: 684746
 * Body lines: 9
 */
#include "../../../include/types.h"

undefined4 FUN_004aa080(undefined4 *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if (*(int *)*param_1 == -0x7fffffff) {
    uVar1 = (*pcRam0097e48c)(param_2);
  }
  else if (*(int *)*param_1 == -0x7ffffffe) {
    uVar1 = (*pcRam0097e488)(param_2);
  }
  return uVar1;
}
