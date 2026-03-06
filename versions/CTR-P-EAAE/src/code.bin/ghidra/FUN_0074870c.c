/**
 * FUN_0074870c.c
 * Source line: 1104539
 * Body lines: 8
 */
#include "../../../include/types.h"

byte FUN_0074870c(ItemParam_t *param_1)

{
  byte bVar1;
  
  if (param_1->field22_0x19 >> 4 < 6) {
    bVar1 = param_1->field22_0x19 >> 4;
  }
  else {
    bVar1 = 0;
  }
  return bVar1;
}
