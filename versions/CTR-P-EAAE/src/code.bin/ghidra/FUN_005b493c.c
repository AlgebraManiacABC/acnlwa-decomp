/**
 * FUN_005b493c.c
 * Source line: 864875
 * Body lines: 8
 */
#include "../../../include/types.h"

undefined4 FUN_005b493c(uint param_1)

{
  undefined4 uVar1;
  
  if (param_1 < 0xa5) {
    uVar1 = *(undefined4 *)(&UNK_0088997c + param_1 * 4);
  }
  else {
    uVar1 = 0xffffffff;
  }
  return uVar1;
}
