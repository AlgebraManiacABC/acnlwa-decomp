/**
 * FUN_002267e4.c
 * Source line: 280498
 * Body lines: 15
 */
#include "../../../include/types.h"

void FUN_002267e4(void)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = 0;
  do {
    uVar2 = uVar1;
    if (1 < uVar1) {
      uVar2 = 0;
    }
    *(undefined1 *)(uVar2 * 0x14 + 0x997c58) = 0;
    if (uVar1 < 6) {
      *(undefined4 *)(&DAT_00997c30 + uVar1 * 4) = 0;
    }
    uVar1 += 1;
  } while (uVar1 < 2);
  return;
}
