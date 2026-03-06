/**
 * FUN_003961e8.c
 * Source line: 503208
 * Body lines: 15
 */
#include "../../../include/types.h"

undefined4 FUN_003961e8(int param_1,undefined4 param_2,uint param_3)

{
  undefined4 uVar1;
  
  if (param_3 < 0xf) {
    param_1 += param_3 * 4;
    if (*(int *)(param_1 + 4) != 0) {
      FUN_0035ba40(&UNK_0089a244,0x44,0xe000000f,0);
      return 0;
    }
    *(undefined4 *)(param_1 + 4) = param_2;
    uVar1 = 1;
  }
  else {
    FUN_0035ba40(&UNK_0089a244,0x3e,0xe0000003,0);
    uVar1 = 0;
  }
  return uVar1;
}
