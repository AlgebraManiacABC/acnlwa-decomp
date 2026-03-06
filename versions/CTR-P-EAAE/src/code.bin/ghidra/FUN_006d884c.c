/**
 * FUN_006d884c.c
 * Source line: 1035502
 * Body lines: 6
 */
#include "../../../include/types.h"

undefined4 FUN_006d884c(int param_1)

{
  undefined4 uVar1;
  
  if (*(char *)(param_1 + 0x1910) != '\0') {
    uVar1 = FUN_001323bc(*(char *)(param_1 + 0x1910));
    FUN_00569e6c(uVar1,param_1 + 0x280,1);
  }
  return 2;
}
