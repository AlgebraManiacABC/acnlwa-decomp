/**
 * FUN_0068f0ac.c
 * Source line: 994971
 * Body lines: 11
 */
#include "../../../include/types.h"

undefined4 FUN_0068f0ac(uint param_1)

{
  undefined4 uVar1;
  
  if (DAT_00950874 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = 0;
    if (((uint)*(byte *)(DAT_00950874 + 0x7d) & 1 << (param_1 & 0xff)) != 0) {
      uVar1 = 1;
    }
  }
  return uVar1;
}
