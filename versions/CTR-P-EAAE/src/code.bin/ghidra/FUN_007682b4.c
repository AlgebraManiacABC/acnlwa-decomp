/**
 * FUN_007682b4.c
 * Source line: 1125886
 * Body lines: 15
 */
#include "../../../include/types.h"

undefined4 FUN_007682b4(Fg_t *param_1)

{
  byte bVar1;
  FgParam_t *pFVar2;
  
  if ((param_1->raw_id & 0x7fff) < 0xfe) {
    pFVar2 = Fg_GetParam(param_1);
    if (pFVar2 == NULL) {
      return 0;
    }
    bVar1 = pFVar2->field_0xa;
    if ((bVar1 < 0x1d) &&
       (((bVar1 == 4 || bVar1 == 6 || (bVar1 == 8 || bVar1 == 0x19)) &&
        ('\0' < (char)pFVar2->field_0xd)))) {
      return 1;
    }
  }
  return 0;
}
