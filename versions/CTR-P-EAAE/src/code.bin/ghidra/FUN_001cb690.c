/**
 * FUN_001cb690.c
 * Source line: 233222
 * Body lines: 9
 */
#include "../../../include/types.h"

void FUN_001cb690(int param_1)

{
  undefined4 uVar1;
  
  if (*(char *)(param_1 + 0x1ad) != '\0') {
    uVar1 = FUN_001323bc();
    FUN_00569e6c(uVar1,param_1 + 4,0);
    return;
  }
  uVar1 = FUN_001323bc();
  FUN_00569e6c(uVar1,param_1 + 4,1);
  return;
}
