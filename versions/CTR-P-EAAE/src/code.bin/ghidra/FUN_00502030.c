/**
 * FUN_00502030.c
 * Source line: 747045
 * Body lines: 14
 */
#include "../../../include/types.h"

undefined4 FUN_00502030(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = 0;
  iVar1 = FUN_005244d4(param_1 + 0xa50);
  if (iVar1 != 0) {
    if (*(int *)(param_1 + 0xa5c) < 3) {
      FUN_005cc4d4(*(undefined4 *)(param_1 + 0xa74));
    }
    else {
      FUN_005cc4a4();
    }
    uVar2 = 1;
  }
  return uVar2;
}
