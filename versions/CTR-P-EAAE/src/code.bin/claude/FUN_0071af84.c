/**
 * FUN_0071af84.c
 * Source line: 1073533
 * Body lines: 8
 */
#include "../../../include/types.h"

undefined4 FUN_0071af84(int param_1)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 0xb4) == 0) {
    uVar1 = 0xffffffff;
  }
  else {
    uVar1 = *(undefined4 *)(*(int *)(param_1 + 0xb4) + 200);
  }
  return uVar1;
}
