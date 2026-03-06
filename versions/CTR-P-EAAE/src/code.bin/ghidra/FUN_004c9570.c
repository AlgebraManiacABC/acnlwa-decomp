/**
 * FUN_004c9570.c
 * Source line: 708914
 * Body lines: 13
 */
#include "../../../include/types.h"

undefined2 FUN_004c9570(float param_1)

{
  undefined2 uVar1;
  float fVar2;
  
  fVar2 = 1.0;
  if ((1.0 < param_1) || ((0.0 <= param_1 && (fVar2 = param_1, 0x3e0ade7e < (int)param_1)))) {
    if ((int)fVar2 < 0x3f666666) {
      return *(undefined2 *)(&UNK_008b5264 + (int)((fVar2 - 0.13561438) * 29.999998) * 2);
    }
    uVar1 = 16000;
  }
  else {
    uVar1 = 0x50;
  }
  return uVar1;
}
