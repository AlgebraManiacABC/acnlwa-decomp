/**
 * FUN_00746da8.c
 * Source line: 1102832
 * Body lines: 13
 */
#include "../../../include/types.h"

float FUN_00746da8(undefined4 param_1,int param_2,uint param_3)

{
  int iVar1;
  float fVar2;
  
  if (param_3 < 0x20) {
    fVar2 = 0.0;
  }
  else if (*(char *)(param_2 + 0x670) == '\0') {
    iVar1 = (**(code **)(**(int **)(param_2 + 0x664) + 0x38))(param_1);
    fVar2 = (float)(longlong)iVar1 * *(float *)(param_2 + 0x64c);
  }
  else {
    fVar2 = *(float *)(param_2 + 0x660);
  }
  return fVar2;
}
