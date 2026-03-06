/**
 * FUN_00464300.c
 * Source line: 631142
 * Body lines: 11
 */
#include "../../../include/types.h"

uint FUN_00464300(int param_1)

{
  ushort uVar1;
  int iVar2;
  
  FUN_00350d9c();
  iVar2 = FUN_0012f374();
  if (iVar2 != 0) {
    uVar1 = *(ushort *)(*(int *)(param_1 + (uint)*(ushort *)(param_1 + 0x1320) * 4 + 0x10ac) + 2);
    FUN_00350e88();
    return (uint)uVar1;
  }
  FUN_00350e88();
  return 0xffffffff;
}
