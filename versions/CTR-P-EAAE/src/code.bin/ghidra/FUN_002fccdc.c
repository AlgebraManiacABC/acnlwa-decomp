/**
 * FUN_002fccdc.c
 * Source line: 395249
 * Body lines: 13
 */
#include "../../../include/types.h"

byte FUN_002fccdc(Fg_t *param_1)

{
  byte bVar1;
  FgParam_t *pFVar2;
  
  if ((param_1->raw_id & 0x7fff) < 0xfe) {
    pFVar2 = Fg_GetParam(param_1);
    bVar1 = 0;
    if ((pFVar2 != NULL) && (bVar1 = pFVar2->field_0xa, 0x1c < bVar1)) {
      bVar1 = 0;
    }
  }
  else {
    bVar1 = 0x1d;
  }
  return bVar1;
}
