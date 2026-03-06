/**
 * FUN_0024c698.c
 * Source line: 300147
 * Body lines: 13
 */
#include "../../../include/types.h"

void FUN_0024c698(int param_1,uint param_2)

{
  int iVar1;
  
  if ((*(byte *)(param_1 + 0xc) & 7) != 4) {
    iVar1 = 0;
    while (param_2 != (*(byte *)(param_1 + iVar1 * 4 + 0x12) & 0xf)) {
      iVar1 += 1;
      if (6 < iVar1) {
        return;
      }
    }
    param_1 += iVar1 * 4;
    *(byte *)(param_1 + 0x12) = *(byte *)(param_1 + 0x12) | 0x20;
  }
  return;
}
