/**
 * FUN_00268270.c
 * Source line: 313486
 * Body lines: 11
 */
#include "../../../include/types.h"

void FUN_00268270(int param_1)

{
  int iVar1;
  uint uVar2;
  bool bVar3;
  
  uVar2 = 0;
  do {
    bVar3 = *(uint *)(param_1 + 0x185c) != uVar2;
    iVar1 = uVar2 * 0x130;
    uVar2 += 1;
    *(bool *)(param_1 + iVar1 + 0xe0d) = bVar3;
  } while (uVar2 < 4);
  return;
}
