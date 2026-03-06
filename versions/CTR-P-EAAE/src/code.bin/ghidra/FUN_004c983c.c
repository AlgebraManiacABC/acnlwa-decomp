/**
 * FUN_004c983c.c
 * Source line: 709021
 * Body lines: 6
 */
#include "../../../include/types.h"

undefined4 FUN_004c983c(float param_1)

{
  float fVar1;
  
  fVar1 = 6.0;
  if ((param_1 <= 6.0) && (fVar1 = param_1, param_1 < -90.4)) {
    fVar1 = -90.4;
  }
  return *(undefined4 *)(((int)(fVar1 * 10.0) + 0x388) * 4 + 0x8b56c4);
}
