/**
 * FUN_004d5618.c
 * Source line: 718035
 * Body lines: 9
 */
#include "../../../include/types.h"

void FUN_004d5618(undefined4 param_1,int param_2)

{
  float fVar1;
  int iVar2;
  
  fVar1 = (float)FUN_004d592c(param_2);
  iVar2 = (uint)(0.0 < fVar1) * (int)fVar1;
  if (*(float *)(param_2 + 4) == fVar1) {
    iVar2 += 1;
  }
  FUN_0013451c(param_1,param_2 + iVar2 * 0x30 + 0xc);
  return;
}
