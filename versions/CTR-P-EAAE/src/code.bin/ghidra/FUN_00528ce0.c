/**
 * FUN_00528ce0.c
 * Source line: 769262
 * Body lines: 14
 */
#include "../../../include/types.h"

uint * FUN_00528ce0(float param_1,float param_2,float param_3,undefined4 param_4,undefined4 param_5,
                   uint *param_6)

{
  uint uVar1;
  int iVar2;
  float fVar3;
  
  fVar3 = (param_3 + param_1 * param_2) * 128.0 * 5.960465e-08;
  iVar2 = 0;
  if ((ABS(fVar3) == 0.0) || (iVar2 = ((uint)((int)fVar3 << 1) >> 0x18) - 0x40, -1 < iVar2)) {
    uVar1 = (uint)((int)fVar3 << 9) >> 0x10 | iVar2 << 0x10 | ((uint)fVar3 >> 0x1f) << 0x17;
  }
  else {
    uVar1 = ((uint)fVar3 >> 0x1f) << 0x17;
  }
  *param_6 = uVar1;
  param_6[1] = 0xf004e;
  return param_6 + 2;
}
