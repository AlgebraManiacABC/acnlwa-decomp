/**
 * FUN_00286fb4.c
 * Source line: 330175
 * Body lines: 13
 */
#include "../../../include/types.h"

void FUN_00286fb4(int param_1)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  
  uVar2 = 0;
  do {
    iVar3 = uVar2 * 4;
    uVar2 += 1;
    iVar3 = *(int *)(param_1 + iVar3 + 0x61c);
    *(uint *)(iVar3 + 0x3d0) = *(uint *)(iVar3 + 0x3d0) & 0xfffffff7;
  } while (uVar2 < 0x19);
  uVar1 = FUN_00286558(param_1);
  *(undefined4 *)(param_1 + 0x8388) = uVar1;
  return;
}
