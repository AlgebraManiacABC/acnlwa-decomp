/**
 * FUN_00724fa8.c
 * Source line: 1079340
 * Body lines: 15
 */
#include "../../../include/types.h"

undefined4 FUN_00724fa8(int param_1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  
  uVar1 = FUN_002ff8b0(4);
  if ((int)uVar1 < 4) {
    iVar2 = 0;
    do {
      uVar3 = (uint)*(char *)(param_1 + iVar2 + 8);
      if ((uVar3 < 4) && (uVar3 != uVar1)) {
        return 1;
      }
      iVar2 += 1;
    } while (iVar2 < 10);
  }
  return 0;
}
