/**
 * byte.c
 * Source line: 1072688
 * Body lines: 6
 */
#include "../../../include/types.h"

byte (*) [16] FUN_0071a040(undefined4 param_1,uint param_2)

{
  byte (*pabVar1) [16];
  
  pabVar1 = BYTE_ARRAY_ARRAY_0083b146;
  if (param_2 < 4) {
    pabVar1 = BYTE_ARRAY_ARRAY_0083b146 + param_2;
  }
  return pabVar1;
}
