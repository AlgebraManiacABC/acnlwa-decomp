/**
 * FUN_005ca264.c
 * Source line: 878271
 * Body lines: 8
 */
#include "../../../include/types.h"

int FUN_005ca264(uint param_1)

{
  int iVar1;
  
  if (param_1 < 0xfc) {
    iVar1 = (int)(char)(&DAT_0088c32c)[param_1];
  }
  else {
    iVar1 = 1;
  }
  return iVar1;
}
