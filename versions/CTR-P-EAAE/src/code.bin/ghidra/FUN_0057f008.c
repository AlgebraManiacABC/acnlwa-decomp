/**
 * FUN_0057f008.c
 * Source line: 825849
 * Body lines: 6
 */
#include "../../../include/types.h"

void FUN_0057f008(int param_1)

{
  int iVar1;
  
  if ((DAT_0095e0cb == '\x10') && (iVar1 = FUN_007580f0(iRam0094fbc0 + 0x118), iVar1 != 0)) {
          // WARNING: Could not recover jumptable at 0x0057f058. Too many branches
          // WARNING: Treating indirect jump as call
    (**(code **)(**(int **)(param_1 + 0x1134) + 0x10))(*(int **)(param_1 + 0x1134),0,1);
    return;
  }
  return;
}
