/**
 * FUN_003b7ccc.c
 * Source line: 526460
 * Body lines: 9
 */
#include "../../../include/types.h"

void FUN_003b7ccc(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  undefined4 uStack_10;
  
  uStack_10 = param_4;
  puVar1 = (undefined4 *)FUN_0039442c(param_2,0);
  if (puVar1 == NULL) {
    puVar1 = &uStack_10;
  }
  FUN_0035489c(param_1,puVar1);
  return;
}
