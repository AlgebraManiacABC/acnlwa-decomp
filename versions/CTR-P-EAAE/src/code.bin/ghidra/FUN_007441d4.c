/**
 * FUN_007441d4.c
 * Source line: 1100490
 * Body lines: 3
 */
#include "../../../include/types.h"

float FUN_007441d4(int param_1)

{
  int iVar1;
  
  iVar1 = (**(code **)(**(int **)(param_1 + 0x3c) + 0xc))();
  return (float)(longlong)iVar1 * *(float *)(param_1 + 0x28);
}
