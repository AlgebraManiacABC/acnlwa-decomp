/**
 * FUN_001a0260.c
 * Source line: 209127
 * Body lines: 7
 */
#include "../../../include/types.h"

void FUN_001a0260(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_003170f8(0xe,0);
  if (iVar1 == 0) {
    *(undefined1 *)(param_1 + 0x39) = 0;
    FUN_008166f0(param_1 + 0x14,&UNK_001a0830,0);
  }
  return;
}
