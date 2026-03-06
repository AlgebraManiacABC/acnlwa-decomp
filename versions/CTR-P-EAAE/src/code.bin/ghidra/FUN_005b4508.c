/**
 * FUN_005b4508.c
 * Source line: 864658
 * Body lines: 8
 */
#include "../../../include/types.h"

undefined4 FUN_005b4508(uint param_1)

{
  undefined4 uVar1;
  
  if (param_1 < 0xa5) {
    uVar1 = *(undefined4 *)(&UNK_008896e8 + param_1 * 4);
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}
