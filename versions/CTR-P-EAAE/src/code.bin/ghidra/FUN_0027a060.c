/**
 * FUN_0027a060.c
 * Source line: 323588
 * Body lines: 11
 */
#include "../../../include/types.h"

void FUN_0027a060(int param_1)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = 0;
  do {
    iVar2 = param_1 + uVar1 * 0x878;
    FUN_001b3f24(iVar2,0x16);
    uVar1 += 1;
    *(undefined4 *)(iVar2 + 0x870) = 0xffffffff;
    *(undefined4 *)(iVar2 + 0x874) = 0xffffffff;
  } while (uVar1 < 8);
  return;
}
