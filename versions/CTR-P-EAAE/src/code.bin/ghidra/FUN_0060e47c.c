/**
 * FUN_0060e47c.c
 * Source line: 924887
 * Body lines: 9
 */
#include "../../../include/types.h"

void FUN_0060e47c(int param_1)

{
  undefined4 uVar1;
  
  if (*(char *)(param_1 + 0x26c) != '\x01') {
    uVar1 = FUN_001323bc();
    FUN_00569e6c(uVar1,param_1 + 0x108,1);
    return;
  }
  uVar1 = FUN_001323bc();
  FUN_00569e6c(uVar1,param_1 + 0x108,0);
  return;
}
