/**
 * FUN_0075e1a8.c
 * Source line: 1118491
 * Body lines: 10
 */
#include "../../../include/types.h"

undefined4 FUN_0075e1a8(char *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_00300904();
  if (((iVar1 == 0) || (iVar1 = FUN_00305f2c(), iVar1 != 2)) || (*param_1 != '\0')) {
    uVar2 = 0;
  }
  else {
    uVar2 = 1;
  }
  return uVar2;
}
