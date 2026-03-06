/**
 * FUN_0027a31c.c
 * Source line: 323730
 * Body lines: 13
 */
#include "../../../include/types.h"

int FUN_0027a31c(undefined4 param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  
  iVar1 = FUN_00301d0c(param_1,&UNK_001b497c,0x878);
  uVar2 = 0;
  do {
    iVar3 = iVar1 + uVar2 * 0x878;
    FUN_001b3f24(iVar3,0x16);
    uVar2 += 1;
    *(undefined4 *)(iVar3 + 0x870) = 0xffffffff;
    *(undefined4 *)(iVar3 + 0x874) = 0xffffffff;
  } while (uVar2 < 8);
  return iVar1;
}
