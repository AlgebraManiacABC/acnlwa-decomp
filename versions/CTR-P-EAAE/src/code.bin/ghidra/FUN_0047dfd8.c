/**
 * FUN_0047dfd8.c
 * Source line: 650695
 * Body lines: 10
 */
#include "../../../include/types.h"

float FUN_0047dfd8(float param_1)

{
  int iVar1;
  uint uVar2;
  
  param_1 = ABS(param_1);
  if (0x477fffff < (int)param_1) {
    param_1 = (float)FUN_0077a6ec(param_1,0x47800000);
  }
  uVar2 = (uint)(0.0 < param_1) * (int)param_1;
  iVar1 = (uVar2 & 0xff) * 0x10;
  return *(float *)(&UNK_008a13c4 + iVar1) +
         (param_1 - (float)(uVar2 & 0xffff)) * *(float *)(&UNK_008a13cc + iVar1);
}
