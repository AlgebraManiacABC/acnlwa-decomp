/**
 * FUN_00689ab8.c
 * Source line: 991494
 * Body lines: 13
 */
#include "../../../include/types.h"

void FUN_00689ab8(int param_1)

{
  short sVar1;
  int *piVar2;
  float fVar3;
  
  fVar3 = 0.0;
  FUN_0068db1c(0,0xbf800000,0x41000000,0x40c00000,0x40c00000,param_1,0x18,0,0,0xf);
  piVar2 = (int *)FUN_0076f954(&DAT_00a14b5c,0x18);
  if (*piVar2 != 0) {
    fVar3 = *(float *)(*piVar2 + 0x14);
  }
  sVar1 = (ushort)(0.0 < fVar3 * 0.5) * (short)(int)(fVar3 * 0.5);
  *(short *)(param_1 + 0x5b0) = sVar1;
  *(short *)(param_1 + 0x5b6) = sVar1;
  return;
}
