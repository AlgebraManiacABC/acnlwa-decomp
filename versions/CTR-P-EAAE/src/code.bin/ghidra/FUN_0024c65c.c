/**
 * FUN_0024c65c.c
 * Source line: 300128
 * Body lines: 11
 */
#include "../../../include/types.h"

void FUN_0024c65c(int param_1,uint param_2)

{
  int iVar1;
  
  iVar1 = 0;
  do {
    if (param_2 == (*(byte *)(param_1 + iVar1 * 4 + 0x12) & 0xf)) {
      param_1 += iVar1 * 4;
      *(byte *)(param_1 + 0x12) = *(byte *)(param_1 + 0x12) | 0x40;
      return;
    }
    iVar1 += 1;
  } while (iVar1 < 7);
  return;
}
