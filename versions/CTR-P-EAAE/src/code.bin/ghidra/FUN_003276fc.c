/**
 * FUN_003276fc.c
 * Source line: 428129
 * Body lines: 6
 */
#include "../../../include/types.h"

undefined4 FUN_003276fc(int param_1)

{
  undefined4 uVar1;
  
  if (*(char *)(param_1 + 0xabc) != '\0') {
    uVar1 = FUN_001323bc(*(char *)(param_1 + 0xabc));
    FUN_00569e6c(uVar1,param_1 + 0x38,1);
  }
  return 2;
}
