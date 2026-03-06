/**
 * FUN_0046aa80.c
 * Source line: 636655
 * Body lines: 15
 */
#include "../../../include/types.h"

void FUN_0046aa80(undefined4 param_1)

{
  int iVar1;
  undefined4 local_10;
  undefined4 local_c;
  
  iVar1 = FUN_0046daa8(&local_10);
  if (iVar1 < 0) {
    iVar1 = FUN_0046d44c(&local_c);
    if (-1 < iVar1) {
      FUN_0046e5d4(local_c,param_1);
      return;
    }
  }
  else {
    FUN_0046cd70(local_10,param_1);
  }
  return;
}
