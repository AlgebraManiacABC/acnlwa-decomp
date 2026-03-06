/**
 * FUN_004b3348.c
 * Source line: 692124
 * Body lines: 13
 */
#include "../../../include/types.h"

uint FUN_004b3348(int param_1,undefined4 param_2)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = FUN_004b356c();
  if (-1 < (int)uVar1) {
    *(int *)(param_1 + 0x10) = param_1;
    uVar2 = FUN_004b3990(param_1,param_2);
    uVar1 = uVar2 | uVar1;
    if (-1 < (int)uVar1) {
      uVar2 = FUN_004b3acc(param_1,param_2);
      uVar1 = uVar2 | uVar1;
    }
  }
  return uVar1;
}
