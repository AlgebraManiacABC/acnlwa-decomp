/**
 * FUN_004648a8.c
 * Source line: 631405
 * Body lines: 13
 */
#include "../../../include/types.h"

undefined4 FUN_004648a8(int param_1,uint param_2)

{
  int iVar1;
  uint *puVar2;
  
  FUN_00350d9c();
  iVar1 = FUN_0012f374();
  if ((iVar1 != 0) && (param_2 < 2)) {
    puVar2 = *(uint **)(param_1 + (uint)*(ushort *)(param_1 + 0x1322) * 4 + 0x10a4);
    *(short *)((int)puVar2 + 0x1e) = (short)param_2;
    *puVar2 = *puVar2 | 0x40000000;
    FUN_00350e88();
    return 1;
  }
  FUN_00350e88();
  return 0;
}
