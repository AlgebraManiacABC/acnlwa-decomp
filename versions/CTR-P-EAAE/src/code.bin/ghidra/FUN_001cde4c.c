/**
 * FUN_001cde4c.c
 * Source line: 234655
 * Body lines: 12
 */
#include "../../../include/types.h"

void FUN_001cde4c(int param_1)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = 1;
  *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) & 0xc3ffffff;
  do {
    iVar1 = FUN_00624f00(uVar2 & 0xff);
    if (iVar1 != 0) {
      *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) | 1 << (uVar2 + 0x1a & 0xff);
    }
    uVar2 += 1;
  } while (uVar2 < 4);
  return;
}
