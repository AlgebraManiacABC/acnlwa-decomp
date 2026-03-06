/**
 * FUN_001f9ff0.c
 * Source line: 259091
 * Body lines: 6
 */
#include "../../../include/types.h"

undefined4 FUN_001f9ff0(int param_1)

{
  undefined4 uVar1;
  
  if (*(char *)(param_1 + 0x4d1) == '\x01') {
    uVar1 = FUN_001323bc();
    FUN_00569e6c(uVar1,param_1 + 0x38,1);
  }
  return 2;
}
