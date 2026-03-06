/**
 * FUN_00136718.c
 * Source line: 143097
 * Body lines: 15
 */
#include "../../../include/types.h"

void FUN_00136718(int *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  puVar1 = (undefined4 *)*param_2;
  while (param_2 != puVar1) {
    puVar2 = (undefined4 *)*param_2;
    puVar3 = (undefined4 *)param_2[1];
    puVar2[1] = puVar3;
    *puVar3 = puVar2;
    *param_1 = *param_1 + -1;
    *param_2 = 0;
    param_2[1] = 0;
    param_2 = puVar2;
  }
  return;
}
