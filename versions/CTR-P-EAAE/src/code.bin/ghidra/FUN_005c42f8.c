/**
 * FUN_005c42f8.c
 * Source line: 873671
 * Body lines: 9
 */
#include "../../../include/types.h"

bool FUN_005c42f8(void)

{
  int iVar1;
  
  iVar1 = FUN_005c33d0(4,0);
  if (iVar1 != 0) {
    FUN_005c40dc(0);
    FUN_0068a80c(iVar1);
    *(byte *)(iVar1 + 0x172) = *(byte *)(iVar1 + 0x172) | 2;
    *(byte *)(iVar1 + 0x8c5) = *(byte *)(iVar1 + 0x8c5) | 1;
  }
  return iVar1 != 0;
}
