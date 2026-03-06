/**
 * FUN_006c77d8.c
 * Source line: 1025566
 * Body lines: 11
 */
#include "../../../include/types.h"

undefined4 FUN_006c77d8(void)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = FUN_00315788();
  uVar2 = 0;
  while (((byte)(&UNK_0089066a)[uVar2] != uVar1 && ((byte)(&UNK_0089066b)[uVar2] != uVar1))) {
    uVar2 += 2;
    if (7 < uVar2) {
      return 0;
    }
  }
  return 1;
}
