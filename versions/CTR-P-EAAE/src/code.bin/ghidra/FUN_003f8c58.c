/**
 * FUN_003f8c58.c
 * Source line: 565668
 * Body lines: 11
 */
#include "../../../include/types.h"

void FUN_003f8c58(undefined4 *param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)param_1[0xf0];
  *param_1 = &PTR_LAB_008ff16c;
  if (puVar1 != NULL) {
    (**(code **)*puVar1)(puVar1);
    FUN_0053814c(puVar1);
    param_1[0xf0] = 0;
  }
  FUN_003e3418(param_1);
  FUN_004260c4();
  return;
}
