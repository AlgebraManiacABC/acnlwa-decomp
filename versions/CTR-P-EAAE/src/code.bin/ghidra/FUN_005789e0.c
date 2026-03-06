/**
 * FUN_005789e0.c
 * Source line: 821808
 * Body lines: 5
 */
#include "../../../include/types.h"

void FUN_005789e0(int param_1)

{
  int iVar1;
  
  if ((DAT_00950148 != 0) && (iVar1 = FUN_00697034(DAT_00950148,param_1), iVar1 != 0)) {
    *(byte *)(param_1 + 0xb0a) = *(byte *)(param_1 + 0xb0a) | 0x10;
  }
  return;
}
