/**
 * FUN_0016cb20.c
 * Source line: 184567
 * Body lines: 10
 */
#include "../../../include/types.h"

uint FUN_0016cb20(uint param_1)

{
  uint uVar1;
  int iVar2;
  
  iVar2 = 0;
  if (((param_1 & 0x7fffffff) == 0) || (iVar2 = ((param_1 << 1) >> 0x18) - 0x40, -1 < iVar2)) {
    uVar1 = (param_1 << 9) >> 0x10 | iVar2 << 0x10 | (param_1 >> 0x1f) << 0x17;
  }
  else {
    uVar1 = (param_1 >> 0x1f) << 0x17;
  }
  return uVar1;
}
