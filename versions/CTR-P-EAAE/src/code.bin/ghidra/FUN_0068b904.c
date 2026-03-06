/**
 * FUN_0068b904.c
 * Source line: 992459
 * Body lines: 8
 */
#include "../../../include/types.h"

void FUN_0068b904(int param_1)

{
  int iVar1;
  
  FUN_006547e4(param_1,0,5,0x2800);
  if (((int)((uint)*(byte *)(param_1 + 0x171) << 0x1a) < 0) &&
     (iVar1 = FUN_00723ad4(param_1 + 0x68), iVar1 != 0)) {
    FUN_0067c674(0x41000000,param_1,0);
    return;
  }
  return;
}
