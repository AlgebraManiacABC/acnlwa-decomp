/**
 * FUN_0027a0a0.c
 * Source line: 323607
 * Body lines: 11
 */
#include "../../../include/types.h"

void FUN_0027a0a0(int param_1)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = 0;
  do {
    iVar2 = param_1 + uVar1 * 0x878;
    FUN_003059f8(iVar2);
    uVar1 += 1;
    *(undefined4 *)(iVar2 + 0x870) = 0xffffffff;
    *(undefined4 *)(iVar2 + 0x874) = 0xffffffff;
  } while (uVar1 < 8);
  return;
}
