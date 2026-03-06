/**
 * FUN_00497180.c
 * Source line: 670187
 * Body lines: 8
 */
#include "../../../include/types.h"

uint FUN_00497180(int param_1,undefined4 param_2)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = FUN_004aa69c();
  if ((-1 < (int)uVar1) && (*(char *)(param_1 + 0x230) == '\0')) {
    uVar2 = FUN_004971d4(param_1,param_2);
    uVar1 = uVar2 | uVar1;
  }
  return uVar1;
}
