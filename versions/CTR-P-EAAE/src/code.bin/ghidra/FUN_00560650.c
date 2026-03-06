/**
 * FUN_00560650.c
 * Source line: 805302
 * Body lines: 13
 */
#include "../../../include/types.h"

void FUN_00560650(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  puVar1 = (undefined4 *)param_1[1];
  while (puVar1 != param_1) {
    puVar2 = (undefined4 *)puVar1[1];
    puVar1[1] = 0;
    *puVar1 = 0;
    puVar1 = puVar2;
  }
  param_1[1] = param_1;
  param_1[2] = 0;
  *param_1 = param_1;
  return;
}
