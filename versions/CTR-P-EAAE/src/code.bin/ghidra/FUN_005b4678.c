/**
 * FUN_005b4678.c
 * Source line: 864727
 * Body lines: 8
 */
#include "../../../include/types.h"

undefined4 FUN_005b4678(int param_1)

{
  undefined4 uVar1;
  
  if ((param_1 == 0xa5) || ((~*(uint *)(&UNK_00889074 + param_1 * 4) & 0x10000) != 0)) {
    uVar1 = 0;
  }
  else {
    uVar1 = 1;
  }
  return uVar1;
}
