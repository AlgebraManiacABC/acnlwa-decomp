/**
 * FUN_007441a8.c
 * Source line: 1100479
 * Body lines: 3
 */
#include "../../../include/types.h"

float FUN_007441a8(int param_1)

{
  int iVar1;
  
  iVar1 = (**(code **)(**(int **)(param_1 + 0x3c) + 0x10))();
  return (float)(longlong)iVar1 * *(float *)(param_1 + 0x28);
}
