/**
 * FUN_005b49e0.c
 * Source line: 864929
 * Body lines: 6
 */
#include "../../../include/types.h"

undefined4 FUN_005b49e0(int param_1)

{
  undefined4 uVar1;
  
  if (((param_1 == 0xa5) || ((~*(uint *)(&UNK_00889074 + param_1 * 4) & 0x100000) != 0)) ||
     (uVar1 = 1, (param_1 - 0x81U & 0x80000001) != 1)) {
    uVar1 = 0;
  }
  return uVar1;
}
