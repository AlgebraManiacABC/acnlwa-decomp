/**
 * FUN_002da74c.c
 * Source line: 375612
 * Body lines: 6
 */
#include "../../../include/types.h"

undefined4 FUN_002da74c(int param_1)

{
  undefined4 uVar1;
  
  if (*(char *)(param_1 + 0x7a5) == '\x01') {
    uVar1 = FUN_001323bc();
    FUN_00569e6c(uVar1,param_1 + 0x50,1);
  }
  return 2;
}
