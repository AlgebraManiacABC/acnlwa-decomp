/**
 * FUN_004643dc.c
 * Source line: 631187
 * Body lines: 13
 */
#include "../../../include/types.h"

void FUN_004643dc(int param_1,undefined2 param_2)

{
  int iVar1;
  uint *puVar2;
  
  FUN_00350d9c();
  iVar1 = FUN_0012f374();
  if (iVar1 != 0) {
    puVar2 = *(uint **)(param_1 + (uint)*(ushort *)(param_1 + 0x1322) * 4 + 0x10a4);
    *(undefined2 *)(puVar2 + 4) = param_2;
    *puVar2 = *puVar2 | 0x8000;
    FUN_00350e88();
    return;
  }
  FUN_00350e88();
  return;
}
