/**
 * FUN_0011a794.c
 * Source line: 117702
 * Body lines: 13
 */
#include "../../../include/types.h"

int FUN_0011a794(int param_1)

{
  int iVar1;
  uint uVar2;
  
  param_1 += 0x8ee;
  uVar2 = 0;
  while ((iVar1 = FUN_002fbd54(param_1), iVar1 == 0 || ((*(byte *)(param_1 + 0xbc) >> 5 & 1) == 0)))
  {
    uVar2 += 1;
    param_1 += 0xf2;
    if (0xf < uVar2) {
      return 0;
    }
  }
  return param_1;
}
