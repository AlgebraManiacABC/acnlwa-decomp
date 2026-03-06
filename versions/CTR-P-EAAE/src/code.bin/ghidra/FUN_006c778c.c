/**
 * FUN_006c778c.c
 * Source line: 1025547
 * Body lines: 11
 */
#include "../../../include/types.h"

undefined4 FUN_006c778c(void)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = FUN_00315788();
  uVar2 = 0;
  while (((byte)(&UNK_0089065e)[uVar2] != uVar1 && ((byte)(&UNK_0089065f)[uVar2] != uVar1))) {
    uVar2 += 2;
    if (5 < uVar2) {
      return 0;
    }
  }
  return 1;
}
