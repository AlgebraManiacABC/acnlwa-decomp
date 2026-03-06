/**
 * FUN_002f7ccc.c
 * Source line: 390077
 * Body lines: 7
 */
#include "../../../include/types.h"

void FUN_002f7ccc(undefined2 param_1,undefined4 *param_2)

{
  undefined2 *puVar1;
  
  puVar1 = (undefined2 *)*param_2;
  if (puVar1 < (undefined2 *)param_2[1]) {
    *param_2 = puVar1 + 1;
    *puVar1 = param_1;
  }
  return;
}
