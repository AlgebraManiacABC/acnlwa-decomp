/**
 * FUN_006002b8.c
 * Source line: 916793
 * Body lines: 12
 */
#include "../../../include/types.h"

void FUN_006002b8(int param_1)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = 0;
  do {
    iVar2 = *(int *)(param_1 + uVar1 * 4 + 4);
    if (iVar2 == 0) {
      return;
    }
    uVar1 += 1;
    *(undefined1 *)(iVar2 + 0x1e7) = 1;
  } while (uVar1 < 4);
  return;
}
