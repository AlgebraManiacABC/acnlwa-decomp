/**
 * FUN_0030e4e8.c
 * Source line: 412871
 * Body lines: 10
 */
#include "../../../include/types.h"

undefined4 FUN_0030e4e8(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_00309ef0();
  if ((iVar1 == 0) || (*(char *)(param_1 + 9) != '\0')) {
    uVar2 = 0;
  }
  else {
    uVar2 = 1;
  }
  return uVar2;
}
