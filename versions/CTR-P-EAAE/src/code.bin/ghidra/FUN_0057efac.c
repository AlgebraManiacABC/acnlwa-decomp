/**
 * FUN_0057efac.c
 * Source line: 825832
 * Body lines: 7
 */
#include "../../../include/types.h"

void FUN_0057efac(int param_1)

{
  int iVar1;
  
  FUN_002cd2c0(*(int *)(param_1 + 0x58c) + 0x398);
  if ((DAT_0095e0cb == '\x10') && (iVar1 = FUN_007580f0(iRam0094fbc0 + 0x118), iVar1 != 0)) {
          // WARNING: Could not recover jumptable at 0x0057eff8. Too many branches
          // WARNING: Treating indirect jump as call
    (**(code **)(**(int **)(param_1 + 0x578) + 0x10))();
    return;
  }
  return;
}
