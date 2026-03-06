/**
 * FUN_003841ec.c
 * Source line: 490290
 * Body lines: 12
 */
#include "../../../include/types.h"

undefined4 FUN_003841ec(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined1 auStack_18 [4];
  undefined4 local_14;
  
  FUN_003d0d10(auStack_18);
  iVar1 = FUN_003613bc(param_1,auStack_18);
  if (iVar1 != 0) {
    FUN_00355d54(param_2,local_14);
    FUN_003d0d6c(auStack_18);
    return 1;
  }
  FUN_003d0d6c(auStack_18);
  return 0;
}
