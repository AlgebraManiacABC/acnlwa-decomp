/**
 * FUN_007540a0.c
 * Source line: 1109768
 * Body lines: 14
 */
#include "../../../include/types.h"

undefined4 * FUN_007540a0(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  
  iVar1 = FUN_00754b50(param_2);
  uVar2 = FUN_00754b5c(param_2);
  puVar3 = (undefined4 *)FUN_00754a3c(param_1 + iVar1 * 0x48 + 8,uVar2);
  (**(code **)*puVar3)(puVar3);
  iVar1 = FUN_007554e4();
  puVar4 = NULL;
  if (iVar1 != 0) {
    puVar4 = puVar3;
  }
  return puVar4;
}
