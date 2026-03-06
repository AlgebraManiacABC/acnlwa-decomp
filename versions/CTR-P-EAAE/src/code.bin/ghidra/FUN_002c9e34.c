/**
 * FUN_002c9e34.c
 * Source line: 366339
 * Body lines: 11
 */
#include "../../../include/types.h"

undefined4 FUN_002c9e34(int param_1)

{
  int iVar1;
  
  iVar1 = 0;
  do {
    FUN_002504e0(param_1 + iVar1 * 0x60 + 0x224);
    iVar1 += 1;
  } while (iVar1 < 4);
  if (iRam00950618 != 0) {
    iRam00950618 = 0;
    return 2;
  }
  return 2;
}
