/**
 * FUN_00747944.c
 * Source line: 1103635
 * Body lines: 15
 */
#include "../../../include/types.h"

void FUN_00747944(int param_1)

{
  uint uVar1;
  
  do {
    uRam00975290 += 1;
    if ((uRam00975290 < 0x400) || (0x1ff < (uRam00975290 & 0x3ff))) {
      uVar1 = uRam00975290 & 0x3ff;
    }
    else {
      uVar1 = (uRam00975290 & 0x3ff) + 0x200;
    }
  } while (*(int *)(param_1 + uVar1 * 0x14) != 0);
  if (uRam00975290 != 0xffffffff) {
    return;
  }
  do {
          // WARNING: Do nothing block with infinite loop
  } while( true );
}
