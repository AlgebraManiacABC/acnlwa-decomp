/**
 * FUN_002e93ec.c
 * Source line: 383387
 * Body lines: 12
 */
#include "../../../include/types.h"

void FUN_002e93ec(int *param_1,undefined1 param_2,int param_3)

{
  int iVar1;
  
  if ((*param_1 == -1) && (DAT_0094d548 != 0)) {
    iVar1 = DAT_0094d548 + 0x244;
    param_1[2] = iVar1;
    if (iVar1 != 0) {
      iVar1 = FUN_002a502c(iVar1,param_1);
      *param_1 = iVar1;
      *(undefined1 *)(param_1 + 4) = param_2;
      param_1[1] = param_3;
    }
  }
  return;
}
