/**
 * FUN_0057f06c.c
 * Source line: 825865
 * Body lines: 7
 */
#include "../../../include/types.h"

void FUN_0057f06c(int param_1)

{
  int iVar1;
  
  FUN_002cd30c(*(int *)(param_1 + 0x58c) + 0x398);
  if ((DAT_0095e0cb == '\x10') && (iVar1 = FUN_007580f0(iRam0094fbc0 + 0x118), iVar1 != 0)) {
          // WARNING: Could not recover jumptable at 0x0057f0b8. Too many branches
          // WARNING: Treating indirect jump as call
    (**(code **)(**(int **)(param_1 + 0x57c) + 0x10))();
    return;
  }
  return;
}
