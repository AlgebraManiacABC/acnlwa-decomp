/**
 * FUN_00279d6c.c
 * Source line: 323421
 * Body lines: 13
 */
#include "../../../include/types.h"

void FUN_00279d6c(undefined4 param_1,int param_2,uint param_3,undefined4 param_4)

{
  bool bVar1;
  
  if (param_3 < 0x12) {
    bVar1 = *(char *)(param_2 + param_3 + 0x434) != '\0';
    if (bVar1) {
      param_2 += param_3 * 4;
    }
    if (!bVar1) {
      FUN_002bcd40(param_2 + param_3 * 0x1c + 500,param_4);
      return;
    }
    *(undefined4 *)(param_2 + 0x3ec) = param_1;
  }
  return;
}
