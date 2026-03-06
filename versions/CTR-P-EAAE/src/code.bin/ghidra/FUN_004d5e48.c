/**
 * FUN_004d5e48.c
 * Source line: 718595
 * Body lines: 7
 */
#include "../../../include/types.h"

void FUN_004d5e48(float param_1,float param_2,int param_3)

{
  int iVar1;
  int iVar2;
  
  iVar1 = (**(code **)(**(int **)(param_3 + 0x3c) + 8))();
  iVar2 = (**(code **)(**(int **)(param_3 + 0x3c) + 0xc))();
  *(float *)(param_3 + 0x24) = param_1 / (float)(longlong)iVar1;
  *(float *)(param_3 + 0x28) = param_2 / (float)(longlong)iVar2;
  return;
}
