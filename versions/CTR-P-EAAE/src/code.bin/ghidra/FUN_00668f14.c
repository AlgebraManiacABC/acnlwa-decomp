/**
 * FUN_00668f14.c
 * Source line: 974936
 * Body lines: 11
 */
#include "../../../include/types.h"

void FUN_00668f14(int param_1)

{
  int iVar1;
  
  if (-1 < (int)((uint)*(byte *)(param_1 + 0x171) << 0x1a)) {
    return;
  }
  iVar1 = GET_BYTE_00957322();
  if (iVar1 != 1) {
    FUN_006609bc(param_1);
  }
  FUN_00651600(param_1,0);
  FUN_00316f9c(param_1,0x28);
  return;
}
