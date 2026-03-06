/**
 * FUN_00686bbc.c
 * Source line: 989889
 * Body lines: 12
 */
#include "../../../include/types.h"

void FUN_00686bbc(int param_1)

{
  int *piVar1;
  float fVar2;
  
  fVar2 = 0.0;
  FUN_0068db1c(0,0x3f800000,0x40000000,0x40000000,0x40000000,param_1,0xf2,0,0,0xf);
  *(byte *)(param_1 + 0x17c) = *(byte *)(param_1 + 0x17c) & 0xf7;
  piVar1 = (int *)FUN_0076f954(&DAT_00a14b5c,0xf2);
  if (*piVar1 != 0) {
    fVar2 = *(float *)(*piVar1 + 0x14);
  }
  *(ushort *)(param_1 + 0x5b0) = (ushort)(0.0 < fVar2 * 0.5) * (short)(int)(fVar2 * 0.5);
  *(byte *)(param_1 + 0x174) = *(byte *)(param_1 + 0x174) | 0x40;
  return;
}
