/**
 * FUN_0044bca4.c
 * Source line: 612692
 * Body lines: 9
 */
#include "../../../include/types.h"

undefined4 FUN_0044bca4(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 0x5c) == 0) {
    *(undefined4 *)(param_1 + 0x5c) = param_2;
    uVar1 = 0;
  }
  else {
    uVar1 = 0xe0a14827;
  }
  return uVar1;
}
