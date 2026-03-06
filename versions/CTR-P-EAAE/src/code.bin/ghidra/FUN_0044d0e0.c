/**
 * FUN_0044d0e0.c
 * Source line: 613667
 * Body lines: 10
 */
#include "../../../include/types.h"

void FUN_0044d0e0(int param_1)

{
  uint uVar1;
  
  *(undefined1 *)(param_1 + 0x14) = 0xfd;
  if ((*(int *)(param_1 + 0x18) - 0x100000U < 0x3ff00000) &&
     (uVar1 = 0, *(int *)(param_1 + 0x1c) != 0)) {
    do {
      FUN_0044e80c(*(int *)(param_1 + 0x18) + uVar1 * 0x60);
      uVar1 += 1;
    } while (uVar1 < *(uint *)(param_1 + 0x1c));
  }
  return;
}
