/**
 * FUN_00461774.c
 * Source line: 628851
 * Body lines: 14
 */
#include "../../../include/types.h"

undefined4 FUN_00461774(int param_1,undefined2 param_2)

{
  int iVar1;
  uint *puVar2;
  
  *(char *)(param_1 + 0x26) = (char)param_2;
  FUN_00350d9c();
  iVar1 = FUN_0012f374();
  if (iVar1 != 0) {
    puVar2 = *(uint **)((uint)uRam00aeb996 * 4 + 0xaeb718);
    *(undefined2 *)((int)puVar2 + 0x1a) = param_2;
    *puVar2 = *puVar2 | 0x10000000;
    FUN_00350e88();
    return 1;
  }
  FUN_00350e88();
  return 0;
}
