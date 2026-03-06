/**
 * FUN_0058ec08.c
 * Source line: 839314
 * Body lines: 11
 */
#include "../../../include/types.h"

void FUN_0058ec08(uint param_1)

{
  int iVar1;
  
  iVar1 = iRam009524dc;
  while( true ) {
    if (iVar1 == 0) {
      return;
    }
    if (*(byte *)(iVar1 + 0x1b) == param_1) break;
    iVar1 = *(int *)(iVar1 + 4);
  }
          // WARNING: Could not recover jumptable at 0x0058ec4c. Too many branches
          // WARNING: Treating indirect jump as call
  FUN_0075383c();
  return;
}
