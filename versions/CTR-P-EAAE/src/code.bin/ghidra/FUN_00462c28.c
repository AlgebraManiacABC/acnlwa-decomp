/**
 * FUN_00462c28.c
 * Source line: 629938
 * Body lines: 12
 */
#include "../../../include/types.h"

undefined4 FUN_00462c28(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  FUN_00350d9c();
  iVar1 = FUN_0012f374();
  if (iVar1 != 0) {
    *(char *)(param_1 + 2) = (char)param_2;
    uVar2 = FUN_00463f10(0xaea674,param_2);
    FUN_00350e88();
    return uVar2;
  }
  FUN_00350e88();
  return 0;
}
