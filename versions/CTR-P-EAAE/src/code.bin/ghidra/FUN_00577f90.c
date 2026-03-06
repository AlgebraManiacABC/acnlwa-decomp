/**
 * FUN_00577f90.c
 * Source line: 821383
 * Body lines: 10
 */
#include "../../../include/types.h"

undefined4 FUN_00577f90(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  if ((*(char *)(*(int *)(param_1 + 0x660) + 0x20d) == '\0') &&
     (iVar1 = FUN_00713ad0(*(int *)(param_1 + 0x660) + 0xf4), iVar1 == 0)) {
    uVar2 = 1;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}
