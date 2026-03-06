/**
 * FUN_00578018.c
 * Source line: 821423
 * Body lines: 10
 */
#include "../../../include/types.h"

void FUN_00578018(int param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  puVar1 = (undefined4 *)(param_1 + 0x70);
  for (puVar2 = (undefined4 *)*puVar1; puVar2 != param_2; puVar2 = (undefined4 *)puVar2[1]) {
    puVar1 = puVar2 + 1;
  }
  *puVar1 = param_2[1];
  *param_2 = 0;
  param_2[1] = 0;
  return;
}
