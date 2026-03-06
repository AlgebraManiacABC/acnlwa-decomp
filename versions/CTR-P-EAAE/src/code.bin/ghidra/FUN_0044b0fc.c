/**
 * FUN_0044b0fc.c
 * Source line: 612100
 * Body lines: 9
 */
#include "../../../include/types.h"

int FUN_0044b0fc(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = param_1 + (uint)*(byte *)(param_1 + 0xb5) * 4;
  iVar1 = FUN_0044b9a4(param_1,param_2,param_3,*(undefined4 *)(iVar1 + 0xc4),
                       *(undefined4 *)(iVar1 + 0xb8));
  if (-1 < iVar1) {
    *(undefined1 *)(param_1 + 0xa4) = 0x23;
    FUN_004282d4(*(undefined4 *)(param_1 + 0x48),0);
  }
  return iVar1;
}
