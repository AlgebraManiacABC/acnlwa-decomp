/**
 * FUN_005361e8.c
 * Source line: 777748
 * Body lines: 8
 */
#include "../../../include/types.h"

byte * FUN_005361e8(uint param_1)

{
  byte *pbVar1;
  
  if ((param_1 < 0x9b) && (Kind_bin_info.data != NULL)) {
    pbVar1 = Kind_bin_info.data + param_1 * 3;
  }
  else {
    pbVar1 = NULL;
  }
  return pbVar1;
}
