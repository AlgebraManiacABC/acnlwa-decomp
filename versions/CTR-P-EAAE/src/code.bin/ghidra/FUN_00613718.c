/**
 * FUN_00613718.c
 * Source line: 926544
 * Body lines: 6
 */
#include "../../../include/types.h"

bool FUN_00613718(uint param_1,int param_2)

{
  bool bVar1;
  
  bVar1 = param_2 - 0x10U < 0x40;
  if (bVar1) {
    param_1 -= 0x10;
  }
  return bVar1 && param_1 < 0x50;
}
