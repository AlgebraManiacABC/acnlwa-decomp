/**
 * FUN_001a24d4.c
 * Source line: 210385
 * Body lines: 9
 */
#include "../../../include/types.h"

void FUN_001a24d4(int param_1)

{
  undefined4 uVar1;
  
  if (*(char *)(param_1 + 0x1b7) != '\0') {
    uVar1 = FUN_006e225c(0x57);
    FUN_001a1abc(param_1,uVar1,(int)*(char *)(param_1 + 0x136));
    return;
  }
  uVar1 = FUN_006e225c(0x10);
  FUN_001a1abc(param_1,uVar1,(int)*(char *)(param_1 + 0x136));
  return;
}
