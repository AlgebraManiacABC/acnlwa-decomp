/**
 * FUN_00238430.c
 * Source line: 289562
 * Body lines: 7
 */
#include "../../../include/types.h"

void FUN_00238430(int param_1,undefined4 param_2,undefined4 param_3,uint param_4)

{
  uint local_10;
  
  local_10 = param_4;
  FUN_0075a91c(param_2,&local_10);
  if ((local_10 & 0xff) < 6) {
    *(uint *)(param_1 + 0x218) = (uint)(byte)(&UNK_008812d4)[local_10 & 0xff];
  }
  return;
}
