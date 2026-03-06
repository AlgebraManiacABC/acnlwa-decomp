/**
 * FUN_00519e3c.c
 * Source line: 759701
 * Body lines: 8
 */
#include "../../../include/types.h"

undefined4 FUN_00519e3c(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined1 auStack_20 [20];
  
  FUN_0046c1ec(auStack_20);
  iVar1 = FUN_0046bb74(auStack_20,param_2);
  if ((-1 < iVar1) && (iVar1 = FUN_0046bcc4(auStack_20,param_3), -1 < iVar1)) {
    return 1;
  }
  return 0;
}
