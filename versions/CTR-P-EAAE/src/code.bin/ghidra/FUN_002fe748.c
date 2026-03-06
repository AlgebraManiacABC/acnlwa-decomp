/**
 * FUN_002fe748.c
 * Source line: 396663
 * Body lines: 13
 */
#include "../../../include/types.h"

uint FUN_002fe748(Fg_t *param_1)

{
  uint uVar1;
  FgParam_t *pFVar2;
  
  if ((param_1->raw_id & 0x7fff) < 0xfe) {
    pFVar2 = Fg_GetParam(param_1);
    uVar1 = 0;
    if (pFVar2 != NULL) {
      uVar1 = ((uint)(byte)pFVar2->field_0xf << 0x1c) >> 0x1f;
    }
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}
