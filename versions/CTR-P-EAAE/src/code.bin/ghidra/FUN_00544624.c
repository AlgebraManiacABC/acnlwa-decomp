/**
 * FUN_00544624.c
 * Source line: 787374
 * Body lines: 7
 */
#include "../../../include/types.h"

int FUN_00544624(float param_1)

{
  int iVar1;
  int iVar2;
  float fVar3;
  
  iVar2 = (int)(param_1 * 128.0);
  iVar1 = iVar2 * 8;
  fVar3 = *(float *)(&UNK_008c9b18 + iVar1) * (param_1 * 128.0 - (float)(longlong)iVar2);
  return (uint)(0.0 < fVar3) * (int)fVar3 + *(int *)(&UNK_008c9b14 + iVar1);
}
