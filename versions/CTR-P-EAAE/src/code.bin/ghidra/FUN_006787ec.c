/**
 * FUN_006787ec.c
 * Source line: 982945
 * Body lines: 12
 */
#include "../../../include/types.h"

void FUN_006787ec(int param_1)

{
  int iVar1;
  
  FUN_00651874();
  iVar1 = FUN_00763830(param_1);
  if ((iVar1 == 0) && (iVar1 = FUN_0070ab24(param_1 + 0x1b4,0), iVar1 != 0)) {
    if ((int)((uint)*(byte *)(param_1 + 0x171) << 0x1a) < 0) {
      FUN_0067c674(0x41000000,param_1,0);
      return;
    }
    FUN_0064dc88(0x41000000,param_1);
    *(byte *)(param_1 + 0x171) = *(byte *)(param_1 + 0x171) | 8;
  }
  return;
}
