/**
 * FUN_005b436c.c
 * Source line: 864550
 * Body lines: 9
 */
#include "../../../include/types.h"

undefined4 FUN_005b436c(uint param_1)

{
  uint uVar1;
  
  uVar1 = 0;
  while (((byte)(&UNK_00889ca4)[uVar1] != param_1 && ((byte)(&UNK_00889ca5)[uVar1] != param_1))) {
    uVar1 += 2;
    if (0xb < uVar1) {
      return 0;
    }
  }
  return 1;
}
