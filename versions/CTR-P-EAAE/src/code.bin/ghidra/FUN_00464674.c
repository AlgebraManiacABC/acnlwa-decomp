/**
 * FUN_00464674.c
 * Source line: 631304
 * Body lines: 14
 */
#include "../../../include/types.h"

undefined4 FUN_00464674(int param_1,int param_2,undefined2 param_3)

{
  int iVar1;
  uint *puVar2;
  
  FUN_00350d9c();
  iVar1 = FUN_0012f374();
  if (iVar1 != 0) {
    puVar2 = *(uint **)(param_1 + (*(ushort *)(param_1 + 0x131e) & 1) * 0x60 + param_2 * 4 + 0x10b4)
    ;
    *(undefined2 *)((int)puVar2 + 0x3a) = param_3;
    *puVar2 = *puVar2 | 0x400000;
    FUN_00350e88();
    return 1;
  }
  FUN_00350e88();
  return 0;
}
