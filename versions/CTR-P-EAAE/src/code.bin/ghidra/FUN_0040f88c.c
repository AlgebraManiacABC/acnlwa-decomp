/**
 * FUN_0040f88c.c
 * Source line: 577604
 * Body lines: 15
 */
#include "../../../include/types.h"

undefined4 FUN_0040f88c(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 auStack_18 [16];
  
  (**(code **)(**(int **)(param_1 + 0x6c) + 0x20))(auStack_18);
  iVar1 = FUN_0072d97c(auStack_18);
  if (iVar1 == 0) {
    uVar2 = 3;
  }
  else if (*(char *)(*(int *)(param_1 + 0x70) + 4) == '\0') {
    uVar2 = 1;
  }
  else {
    uVar2 = 2;
  }
  return uVar2;
}
