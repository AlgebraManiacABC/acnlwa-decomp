/**
 * FUN_005b4c94.c
 * Source line: 864953
 * Body lines: 8
 */
#include "../../../include/types.h"

undefined4 FUN_005b4c94(uint param_1)

{
  undefined4 uVar1;
  
  if ((param_1 < 0xa5) && ((~*(uint *)(&UNK_00889074 + param_1 * 4) & 2) == 0)) {
    uVar1 = 1;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}
