/**
 * FUN_0072c3f8.c
 * Source line: 1084016
 * Body lines: 9
 */
#include "../../../include/types.h"

undefined4 FUN_0072c3f8(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_00826a34(param_1 + 4);
  uVar2 = 0;
  if (*(int *)(iVar1 + 0x14) != 0) {
    iVar1 = FUN_00826a34(param_1 + 4);
    uVar2 = *(undefined4 *)(**(int **)(iVar1 + 0x10) + 0x14);
  }
  return uVar2;
}
