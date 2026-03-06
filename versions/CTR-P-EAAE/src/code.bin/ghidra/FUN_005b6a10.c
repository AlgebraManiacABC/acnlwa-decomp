/**
 * FUN_005b6a10.c
 * Source line: 866163
 * Body lines: 15
 */
#include "../../../include/types.h"

undefined4 FUN_005b6a10(uint param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_002ff8b0(4);
  iVar2 = FUN_0027ab40();
  if (iVar2 != 0) {
    iVar2 = 0;
    do {
      if (((byte)(&UNK_00889c80)[iVar2 + iVar1 * 6] == param_1) ||
         ((byte)(&UNK_00889c80)[iVar2 + iVar1 * 6 + 1] == param_1)) {
        return 1;
      }
      iVar2 += 2;
    } while (iVar2 < 6);
  }
  return 0;
}
