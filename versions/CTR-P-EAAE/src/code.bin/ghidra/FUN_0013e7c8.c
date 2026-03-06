/**
 * FUN_0013e7c8.c
 * Source line: 150941
 * Body lines: 10
 */
#include "../../../include/types.h"

int * FUN_0013e7c8(int *param_1,int param_2)

{
  int *piVar1;
  undefined4 *puVar2;
  
  piVar1 = (int *)(param_2 + 4);
  puVar2 = (undefined4 *)param_1[2];
  *piVar1 = (int)(param_1 + 1);
  *(undefined4 **)(param_2 + 8) = puVar2;
  param_1[2] = (int)piVar1;
  *puVar2 = piVar1;
  *param_1 = *param_1 + 1;
  return piVar1;
}
