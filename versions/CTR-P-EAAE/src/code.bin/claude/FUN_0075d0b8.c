/**
 * FUN_0075d0b8.c
 * Source line: 1117632
 * Body lines: 8
 */
#include "../../../include/types.h"

undefined4 FUN_0075d0b8(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = 0;
  if (((*(int *)(param_1 + 0x18) != 0) && (*(char *)(param_1 + 4) == '\x03')) &&
     (iVar1 = FUN_00521d3c(2), iVar1 != 0)) {
    uVar2 = 1;
  }
  return uVar2;
}
