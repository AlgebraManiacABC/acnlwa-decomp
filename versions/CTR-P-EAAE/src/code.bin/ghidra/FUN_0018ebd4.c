/**
 * FUN_0018ebd4.c
 * Source line: 203655
 * Body lines: 8
 */
#include "../../../include/types.h"

void FUN_0018ebd4(int param_1)

{
  undefined4 uVar1;
  
  if (*(char *)(param_1 + 0x31c) == '\x01') {
    uVar1 = FUN_001323bc();
    FUN_00569e6c(uVar1,param_1 + 0x24,1);
    switchD_000b7c78::caseD_9(*(undefined4 *)(param_1 + 0x318));
    return;
  }
  return;
}
