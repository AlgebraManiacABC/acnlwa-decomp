/**
 * FUN_006c79c8.c
 * Source line: 1025667
 * Body lines: 11
 */
#include "../../../include/types.h"

undefined4 FUN_006c79c8(void)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = FUN_00315788();
  uVar2 = 0;
  while (((byte)(&UNK_00890672)[uVar2] != uVar1 && ((byte)(&UNK_00890673)[uVar2] != uVar1))) {
    uVar2 += 2;
    if (0xf < uVar2) {
      return 0;
    }
  }
  return 1;
}
