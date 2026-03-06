/**
 * FUN_00560bac.c
 * Source line: 805607
 * Body lines: 13
 */
#include "../../../include/types.h"

void FUN_00560bac(int param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  puVar1 = *(undefined4 **)(param_1 + 4);
  while (puVar1 != NULL) {
    puVar2 = (undefined4 *)puVar1[2];
    FUN_00560bac(puVar1);
    puVar1[3] = 0;
    puVar1[2] = 0;
    puVar1[1] = 0;
    *puVar1 = 0;
    puVar1 = puVar2;
  }
  return;
}
