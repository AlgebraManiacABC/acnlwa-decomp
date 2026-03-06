/**
 * FUN_002f7c90.c
 * Source line: 390048
 * Body lines: 5
 */
#include "../../../include/types.h"

void FUN_002f7c90(undefined1 param_1,undefined4 *param_2)

{
  undefined1 *puVar1;
  
  puVar1 = (undefined1 *)*param_2;
  *puVar1 = param_1;
  *param_2 = puVar1 + 1;
  return;
}
