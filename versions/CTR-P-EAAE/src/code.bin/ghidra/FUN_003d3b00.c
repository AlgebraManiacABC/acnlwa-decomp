/**
 * FUN_003d3b00.c
 * Source line: 545313
 * Body lines: 8
 */
#include "../../../include/types.h"

int * FUN_003d3b00(int *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  puVar2 = (undefined4 *)param_1[1];
  for (puVar1 = (undefined4 *)*param_1; puVar1 != puVar2; puVar1 = puVar1 + 8) {
    (**(code **)*puVar1)(puVar1);
  }
  FUN_00361988(*param_1);
  return param_1;
}
