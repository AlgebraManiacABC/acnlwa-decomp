/**
 * FUN_00194ff4.c
 * Source line: 206656
 * Body lines: 10
 */
#include "../../../include/types.h"

void FUN_00194ff4(int param_1,float *param_2,int param_3,int param_4)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x9c0);
  *param_2 = ((float)(longlong)(param_3 - *(int *)(param_1 + 0x6b70)) + 0.5) *
             *(float *)(&UNK_00849648 + *(int *)(param_1 + 0x6b54) * 4) -
             *(float *)(iVar1 + 0x48) * 0.5;
  param_2[1] = *(float *)(iVar1 + 0x4c) * 0.5 -
               ((float)(longlong)(param_4 - *(int *)(param_1 + 0x6b74)) + 0.5) *
               *(float *)(&UNK_00849648 + *(int *)(param_1 + 0x6b54) * 4);
  param_2[2] = 0.0;
  return;
}
