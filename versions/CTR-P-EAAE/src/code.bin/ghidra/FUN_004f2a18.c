/**
 * FUN_004f2a18.c
 * Source line: 740298
 * Body lines: 12
 */
#include "../../../include/types.h"

void FUN_004f2a18(void)

{
  int iVar1;
  
  iVar1 = 0;
  do {
    FUN_0049a0e4(*(undefined4 *)(iVar1 * 4 + 0x9c90c4));
    iVar1 += 1;
  } while (iVar1 < 3);
  FUN_004eb148();
  FUN_00495534(iRam00952a38);
  FUN_007b1038(0x3fff);
  **(undefined4 **)(iRam00952a38 + 0xc0) = 0;
  iRam00952a48 = 1 - iRam00952a48;
  return;
}
