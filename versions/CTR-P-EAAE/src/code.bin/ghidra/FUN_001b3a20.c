/**
 * FUN_001b3a20.c
 * Source line: 220484
 * Body lines: 6
 */
#include "../../../include/types.h"

uint FUN_001b3a20(int param_1,int param_2)

{
  uint uVar1;
  
  uVar1 = param_1 + param_2 * 0x10 & 0xff;
  if ((*(ushort *)(uVar1 * 2 + 0x95c010) & 0xf) != 0) {
    uVar1 = 0;
  }
  return uVar1;
}
