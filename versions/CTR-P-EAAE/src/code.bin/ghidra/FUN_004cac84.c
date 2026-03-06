/**
 * FUN_004cac84.c
 * Source line: 710218
 * Body lines: 10
 */
#include "../../../include/types.h"

void FUN_004cac84(float param_1,int param_2,int param_3)

{
  int iVar1;
  
  iVar1 = param_2 + param_3 * 4;
  if (param_1 < 0.0) {
    param_1 = 0.0;
  }
  if (*(float *)(iVar1 + 0x48) != param_1) {
    *(float *)(iVar1 + 0x48) = param_1;
    *(ushort *)(param_2 + 0x20) = *(ushort *)(param_2 + 0x20) | 8;
  }
  return;
}
