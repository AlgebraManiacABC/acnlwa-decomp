/**
 * FUN_00199a1c.c
 * Source line: 208450
 * Body lines: 8
 */
#include "../../../include/types.h"

void FUN_00199a1c(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_00718c6c(param_1 + 0x1ec0);
  if (iVar1 == 0) {
    DAT_0094fd58 = DAT_0094fd58 & 0xfffff7ff | 0x10;
    *(undefined1 *)(param_1 + 0x1e9b) = 0;
    FUN_008165e4(param_1 + 0xa4,&UNK_0019c65c,0);
  }
  return;
}
