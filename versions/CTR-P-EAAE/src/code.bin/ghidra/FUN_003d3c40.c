/**
 * FUN_003d3c40.c
 * Source line: 545393
 * Body lines: 8
 */
#include "../../../include/types.h"

int * FUN_003d3c40(int *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  puVar2 = (undefined4 *)param_1[1];
  for (puVar1 = (undefined4 *)*param_1; puVar1 != puVar2; puVar1 = puVar1 + 6) {
    (**(code **)*puVar1)(puVar1);
  }
  FUN_00361988(*param_1);
  return param_1;
}
