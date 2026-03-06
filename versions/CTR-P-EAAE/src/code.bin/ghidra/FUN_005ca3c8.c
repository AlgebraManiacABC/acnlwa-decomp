/**
 * FUN_005ca3c8.c
 * Source line: 878396
 * Body lines: 8
 */
#include "../../../include/types.h"

int FUN_005ca3c8(uint param_1)

{
  int iVar1;
  
  if (param_1 < 0x67) {
    iVar1 = (int)(char)(&UNK_0088d8e0)[(byte)(&UNK_0088d9de)[param_1]];
  }
  else {
    iVar1 = -1;
  }
  return iVar1;
}
