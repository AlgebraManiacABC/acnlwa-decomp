/**
 * FUN_006136e8.c
 * Source line: 926522
 * Body lines: 6
 */
#include "../../../include/types.h"

bool FUN_006136e8(uint param_1,int param_2)

{
  bool bVar1;
  
  bVar1 = param_2 - 1U < 4;
  if (bVar1) {
    param_1 -= 1;
  }
  return bVar1 && param_1 < 5;
}
