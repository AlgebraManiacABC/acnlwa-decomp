/**
 * FUN_00625c40.c
 * Source line: 939531
 * Body lines: 12
 */
#include "../../../include/types.h"

void FUN_00625c40(int param_1)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = 0;
  do {
    uVar2 = uVar1 & 0xff;
    if (uVar2 < 4) {
      *(undefined1 *)(param_1 + uVar2) = 0xa5;
      *(undefined1 *)(param_1 + uVar2 + 4) = 4;
    }
    uVar1 += 1;
  } while ((int)uVar1 < 4);
  return;
}
