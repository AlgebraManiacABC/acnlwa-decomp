/**
 * FUN_003d3ed8.c
 * Source line: 545530
 * Body lines: 14
 */
#include "../../../include/types.h"

int * FUN_003d3ed8(int *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int *piVar3;
  int *piVar4;
  
  piVar4 = (int *)param_1[1];
  for (piVar3 = (int *)*param_1; piVar3 != piVar4; piVar3 = piVar3 + 3) {
    puVar2 = (undefined4 *)piVar3[1];
    for (puVar1 = (undefined4 *)*piVar3; puVar1 != puVar2; puVar1 = puVar1 + 10) {
      (**(code **)*puVar1)(puVar1);
    }
    FUN_00361988(*piVar3);
  }
  FUN_00361988(*param_1);
  return param_1;
}
