/**
 * FUN_005ca1d4.c
 * Source line: 878211
 * Body lines: 8
 */
#include "../../../include/types.h"

int FUN_005ca1d4(uint param_1)

{
  int iVar1;
  
  if (param_1 < 0xfc) {
    iVar1 = (uint)*(ushort *)(&UNK_0088bf34 + param_1 * 2) * 100;
  }
  else {
    iVar1 = 0;
  }
  return iVar1;
}
