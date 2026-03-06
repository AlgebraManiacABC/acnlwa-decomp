/**
 * FUN_003f8cac.c
 * Source line: 565687
 * Body lines: 10
 */
#include "../../../include/types.h"

void FUN_003f8cac(undefined4 *param_1)

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
  return;
}
