/**
 * FUN_004647a4.c
 * Source line: 631354
 * Body lines: 15
 */
#include "../../../include/types.h"

undefined4 FUN_004647a4(int param_1,int param_2,undefined2 param_3,undefined2 param_4)

{
  int iVar1;
  uint *puVar2;
  
  FUN_00350d9c();
  iVar1 = FUN_0012f374();
  if (iVar1 != 0) {
    puVar2 = *(uint **)(param_1 + (*(ushort *)(param_1 + 0x131e) & 1) * 0x60 + param_2 * 4 + 0x10b4)
    ;
    *(undefined2 *)(puVar2 + 0xf) = param_3;
    *(undefined2 *)((int)puVar2 + 0x3e) = param_4;
    *puVar2 = *puVar2 | 0x800000;
    FUN_00350e88();
    return 1;
  }
  FUN_00350e88();
  return 0;
}
