/**
 * FUN_00594e48.c
 * Source line: 842789
 * Body lines: 14
 */
#include "../../../include/types.h"

bool FUN_00594e48(int param_1)

{
  short sVar1;
  float fVar2;
  float fVar3;
  
  sVar1 = *(short *)(param_1 + 0x126) + 0x1000;
  *(short *)(param_1 + 0x126) = sVar1;
  if (sVar1 >= 0) {
    fVar2 = (float)FUN_0047df5c(sVar1);
    fVar3 = (float)FUN_0047df5c(*(undefined2 *)(param_1 + 0x124));
    *(float *)(param_1 + 0x40) = *(float *)(param_1 + 0x34) + fVar2 * 8.0 * fVar3;
    fVar3 = (float)FUN_0047df24(*(undefined2 *)(param_1 + 0x124));
    *(float *)(param_1 + 0x48) = *(float *)(param_1 + 0x3c) + fVar2 * 8.0 * fVar3;
    FUN_00590c14(0,param_1,0);
  }
  return sVar1 < 0;
}
