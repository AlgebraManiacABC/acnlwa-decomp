/**
 * FUN_0072dfa4.c
 * Source line: 1085256
 * Body lines: 6
 */
#include "../../../include/types.h"

undefined4 FUN_0072dfa4(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if (*(int *)(param_1 + 4) != 0) {
    uVar1 = *(undefined4 *)(*(int *)(param_1 + 4) + 8);
  }
  return uVar1;
}
