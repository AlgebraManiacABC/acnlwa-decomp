/**
 * FUN_0010df1c.c
 * Source line: 111068
 * Body lines: 13
 */
#include "../../../include/types.h"

void FUN_0010df1c(int param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  do {
    iVar1 = FUN_00301e20(param_1);
    if ((iVar1 != 0) && (param_2 < 4)) {
      *(uint *)(param_1 + 0x2510) =
           *(uint *)(param_1 + 0x2510) & ((~(1 << (param_2 & 0xff)) & 0xfU) << 3 | 0xffffff87);
    }
    iVar2 += 1;
    param_1 += 0x2518;
  } while (iVar2 < 10);
  return;
}
