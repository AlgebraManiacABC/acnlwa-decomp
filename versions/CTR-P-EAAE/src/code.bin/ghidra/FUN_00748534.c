/**
 * FUN_00748534.c
 * Source line: 1104405
 * Body lines: 11
 */
#include "../../../include/types.h"

undefined4 FUN_00748534(ItemParam_t *itemParam)

{
  byte bVar1;
  undefined4 uVar2;
  
  if ((((itemParam->field14_0x11 < 0x56) && (itemParam->field14_0x11 != 0)) &&
      (itemParam->field22_0x19 >> 4 < 6)) &&
     (bVar1 = itemParam->field22_0x19 >> 4, bVar1 == 4 || bVar1 == 5)) {
    uVar2 = 1;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}
