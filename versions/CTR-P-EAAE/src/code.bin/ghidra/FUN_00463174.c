/**
 * FUN_00463174.c
 * Source line: 630328
 * Body lines: 14
 */
#include "../../../include/types.h"

void FUN_00463174(int param_1,uint param_2)

{
  int iVar1;
  float fVar2;
  
  if (16000 < param_2) {
    param_2 = 16000;
  }
  fVar2 = (float)FUN_0047dfd8((float)param_2 * 0.008);
  fVar2 = 2.0 - fVar2;
  fVar2 = SQRT(fVar2 * fVar2 - 1.0) - fVar2;
  *(short *)(param_1 + 8) = (short)(int)((fVar2 + 1.0) * 32768.0);
  *(short *)(param_1 + 10) = -(short)(int)(fVar2 * 32768.0);
  iVar1 = *(int *)(param_1 + 0x68);
  *(undefined4 *)(iVar1 + 0x10) = *(undefined4 *)(param_1 + 8);
  *(ushort *)(iVar1 + 0x6c) = *(ushort *)(iVar1 + 0x6c) | 8;
  return;
}
