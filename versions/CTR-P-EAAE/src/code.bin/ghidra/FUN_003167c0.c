/**
 * FUN_003167c0.c
 * Source line: 418015
 * Body lines: 9
 */
#include "../../../include/types.h"

undefined4 FUN_003167c0(int param_1)

{
  undefined4 uVar1;
  
  if (*(char *)(param_1 + 0x1889) == '\x01') {
    uVar1 = FUN_001323bc();
    FUN_00569e6c(uVar1,param_1 + 0x4c,1);
    if (*(char *)(param_1 + 0x1890) == '\x01') {
      switchD_000b7c78::caseD_9(param_1 + 0xeb8);
    }
  }
  return 2;
}
