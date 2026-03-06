/**
 * FUN_001cb674.c
 * Source line: 233204
 * Body lines: 10
 */
#include "../../../include/types.h"

void FUN_001cb674(int param_1)

{
  undefined4 uVar1;
  
  FUN_001cb690(param_1 + 0x274);
  if (*(char *)(param_1 + 0x62d) != '\0') {
    uVar1 = FUN_001323bc();
    FUN_00569e6c(uVar1,param_1 + 0x484,0);
    return;
  }
  uVar1 = FUN_001323bc();
  FUN_00569e6c(uVar1,param_1 + 0x484,1);
  return;
}
