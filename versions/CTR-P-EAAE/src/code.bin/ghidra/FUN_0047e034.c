/**
 * FUN_0047e034.c
 * Source line: 650713
 * Body lines: 15
 */
#include "../../../include/types.h"

float FUN_0047e034(float param_1)

{
  int iVar1;
  float fVar2;
  uint uVar3;
  
  fVar2 = ABS(param_1);
  if (0x477fffff < (int)fVar2) {
    fVar2 = (float)FUN_0077a6ec(fVar2,0x47800000);
  }
  uVar3 = (uint)(0.0 < fVar2) * (int)fVar2;
  iVar1 = (uVar3 & 0xff) * 0x10;
  fVar2 = *(float *)(&UNK_008a13c0 + iVar1) +
          (fVar2 - (float)(uVar3 & 0xffff)) * *(float *)(&UNK_008a13c8 + iVar1);
  if (param_1 < 0.0) {
    fVar2 = -fVar2;
  }
  return fVar2;
}
