/**
 * FUN_003e2ff4.c
 * Source line: 557083
 * Body lines: 15
 */
#include "../../../include/types.h"

void FUN_003e2ff4(int param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  
  uVar1 = 0;
  do {
    uVar2 = uVar1 + 1;
    iVar3 = param_1 + uVar1 * 0x14;
    *(undefined4 *)(iVar3 + 0x2f8) = 0;
    *(undefined4 *)(iVar3 + 0x2fc) = 0;
    *(undefined4 *)(iVar3 + 0x300) = 0;
    *(undefined4 *)(iVar3 + 0x304) = 0;
    *(undefined4 *)(iVar3 + 0x308) = 0;
    uVar1 = uVar2;
  } while (uVar2 < 3);
  return;
}
