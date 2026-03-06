/**
 * FUN_006c850c.c
 * Source line: 1026027
 * Body lines: 15
 */
#include "../../../include/types.h"

undefined4 FUN_006c850c(void)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = FUN_006c5ad8();
  uVar2 = 0;
  while( true ) {
    if ((byte)(&UNK_00890664)[uVar2] == uVar1) {
      return 1;
    }
    if ((byte)(&UNK_00890665)[uVar2] == uVar1) break;
    uVar2 += 2;
    if (5 < uVar2) {
      return 0;
    }
  }
  return 1;
}
