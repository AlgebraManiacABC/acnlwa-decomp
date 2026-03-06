/**
 * FUN_00463a5c.c
 * Source line: 630740
 * Body lines: 13
 */
#include "../../../include/types.h"

void FUN_00463a5c(uint param_1,int param_2)

{
  int iVar1;
  uint *puVar2;
  
  FUN_00350d9c();
  iVar1 = FUN_0012f374();
  if (iVar1 != 0) {
    puVar2 = *(uint **)(param_2 + (uint)*(ushort *)(param_2 + 0x1322) * 4 + 0x10a4);
    puVar2[1] = param_1;
    *puVar2 = *puVar2 | 0x10000;
    FUN_00350e88();
    return;
  }
  FUN_00350e88();
  return;
}
