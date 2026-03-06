/**
 * FUN_00322c20.c
 * Source line: 425453
 * Body lines: 14
 */
#include "../../../include/types.h"

void FUN_00322c20(int param_1)

{
  int iVar1;
  uint uVar2;
  
  FUN_007244e4();
  uVar2 = 0;
  do {
    iVar1 = FUN_002fcb34();
    if (iVar1 == 0x39) {
      iVar1 = Item_GetRawID((Item_t *)(param_1 + uVar2 * 4));
      iVar1 = 10 - (iVar1 + -0x2282);
    }
    uVar2 += 1;
  } while (uVar2 < 0x10);
  FUN_002fae84(iVar1);
  return;
}
