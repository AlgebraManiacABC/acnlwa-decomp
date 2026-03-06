/**
 * FUN_002f74e0.c
 * Source line: 389596
 * Body lines: 8
 */
#include "../../../include/types.h"

undefined4 FUN_002f74e0(uint param_1,int param_2)

{
  undefined4 uVar1;
  
  if ((param_2 == 0xa5) || ((param_1 & ~*(uint *)(&UNK_00889074 + param_2 * 4)) != 0)) {
    uVar1 = 0;
  }
  else {
    uVar1 = 1;
  }
  return uVar1;
}
