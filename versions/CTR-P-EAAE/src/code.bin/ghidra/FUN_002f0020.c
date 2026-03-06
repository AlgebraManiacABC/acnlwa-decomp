/**
 * FUN_002f0020.c
 * Source line: 385958
 * Body lines: 10
 */
#include "../../../include/types.h"

undefined4 FUN_002f0020(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_001323bc();
  FUN_00569e6c(uVar1,param_1 + 0x4c,0);
  if (0 < *(int *)(param_1 + 0x22dc)) {
    uVar1 = FUN_001323bc();
    FUN_00569e6c(uVar1,param_1 + 0x2e4,0);
  }
  uVar1 = FUN_001323bc();
  FUN_00569e6c(uVar1,param_1 + 0x198,1);
  return 2;
}
