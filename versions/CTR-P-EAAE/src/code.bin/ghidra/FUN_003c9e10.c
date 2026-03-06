/**
 * FUN_003c9e10.c
 * Source line: 537265
 * Body lines: 11
 */
#include "../../../include/types.h"

void FUN_003c9e10(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined1 auStack_10 [8];
  
  iVar1 = FUN_0039442c(param_2,0);
  if (iVar1 != 0) {
    FUN_003613bc(param_1,iVar1);
    return;
  }
  FUN_00301d0c(auStack_10,FUN_003d0d10,8,1);
  FUN_003613bc(param_1,auStack_10);
  FUN_002f76ac(auStack_10,FUN_003d0d6c,8,1);
  return;
}
